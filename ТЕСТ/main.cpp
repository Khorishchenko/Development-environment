#include <iostream>
#include <fstream>
#include <vector>
#include <limits.h>
#include <cmath>
#include<string> //cin >> string

#include "functions.h"

using namespace std;

int main() {
    int min_val, max_val;
    string file1;

    vector<int> sc;
    vector<vector<int> > store_rowcol;

    int rows = 0;
	int r;
    int columns = 0;
    cout << "Enter rows: " << endl;
    cin >> rows;
    cout << "Enter columns: " << endl;
    cin >> columns;
    cout << "Enter a filename: " << endl;
    cin >> file1;	
    if((rows < 0) || ( columns < 0))
    {
        cout << "ERROR: Negative number. " << endl;
        return -1;
    }
	
    ifstream file;
    file.open(file1.c_str());
	
    if(!file.is_open())
    {
        cout << "Error: Could not open file." << endl;
        return -1;
    }
	
    vector<vector <int>> R(rows);
    vector<vector <int>> G(rows);
    vector<vector <int>> B(rows);

    int jval = 0;
    for (int i = 0; i < rows; i++) {
        vector<int> ROWS;
        for (int j = 0; j < columns; j++) {
                if(file.fail())
                {
                    file.bad();
                    cout << "Error: Data mismatch. " << endl;
                    return -1 ;
                }
            jval = 0;
            file >> jval;
            ROWS.push_back(jval);
        }
        store_rowcol.push_back(ROWS);
    }

    file >> jval;

    if(!file.eof())
	{
		cout << "Error: Too much data..." << endl;
		return -1;
	}
	file.close();

    vector<int> min;
	min_val = INT_MAX ; max_val = INT_MIN;
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < columns ; j++)
        {
            if(store_rowcol.at(i).at(j ) <min_val)
            {
                min_val = store_rowcol.at(i).at(j);
            }
            if(store_rowcol.at(i).at(j) > max_val)
            {
                max_val = store_rowcol.at(i).at(j);
            }
        }
    }
    //cout << "Min: " <<  min_val << endl;
    //cout << "Max: " << max_val << endl;
	
    double x = 0;
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < columns ; j++)
        {
            if(max_val == min_val)
				x = 0;
            else
                x = round((store_rowcol.at(i).at(j) - min_val) * 1.0 / (max_val - min_val) * 255.0);
            R.at(i).push_back((int)x);
            G.at(i).push_back((int)x);
            B.at(i).push_back((int)x);
        }
    }
	
    string ofilename = "map-input-" + to_string(columns) + "-" + to_string(rows) + ".dat.ppm";
    ofstream off1(ofilename.c_str());
	// Checking if output file is made
	if(!off1.is_open())
	{
		std::cout << "Error: Could not open output file for writing." << std::endl;
		return -1;
	}
	
	// Output in PPM format
	off1 << "P3" << std::endl;
	off1 << columns << " " << rows <<std::endl;
	off1 << 255 << std::endl;

	for(unsigned i = 0 ; i < store_rowcol.size(); i++)
	{
		for(int j = 0 ; j < store_rowcol.at(i).size(); j++)
			off1 << R.at(i).at(j) << " " << G.at(i).at(j) << " " << B.at(i).at(j) <<" ";
		off1 << std::endl;
	}
	off1.close();

	//Perform calculations
	int shortestDistance = INT_MAX, currentDistance = 0, shortestIndex = 0;
	for (int i = 0; i < rows; i++) {
		currentDistance = colorPath(store_rowcol, R, G, B, 252, 25, 63, i);
		if (currentDistance < shortestDistance) {// < codition cause always first index will be taken for shortest path
			shortestDistance = currentDistance;
			shortestIndex = i;
		}
		cout << currentDistance << endl;
	}
	cout << "Shortest Distance = " << shortestDistance << " index = " << shortestIndex << endl;
	//Color shortest path wih green color
	colorPath(store_rowcol, R, G, B, 31, 253, 13, shortestIndex);

	//Save output fie
	// Output in PPM format
	ofilename = "map-output-" + to_string(columns) + "-" + to_string(rows) + ".dat.ppm";
	ofstream off2(ofilename.c_str());
	// Checking if output file is made
	if (!off2.is_open())
	{
		std::cout << "Error: Could not open output file for writing." << std::endl;
		return -1;
	}

	
	off2 << "P3" << std::endl;
	off2 << columns << " " << rows << std::endl;
	off2 << 255 << std::endl;

	for (unsigned i = 0; i < store_rowcol.size(); i++)
	{
		for (int j = 0; j < store_rowcol.at(i).size(); j++)
			off2 << R.at(i).at(j) << " " << G.at(i).at(j) << " " << B.at(i).at(j) << " ";
		off2 << std::endl;
	}
	off2.close();

	system("pause");
    return 0;
}

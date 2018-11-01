#include<vector>
#include "functions.h"
#include <iostream>
using namespace std;

int colorPath(const vector<vector<int>>& heightMap, vector<vector<int>>& r, vector<vector<int>>& g, vector<vector<int>>& b, int color_r, int color_g,
	int color_b, int start_row) {
	int dist = 0;

	int currentColumn = 0, currentRow = start_row, rows = heightMap.size(), columns = heightMap.at(0).size();
	//cout << "columns = " << columns << ", rows = " << rows << endl;
	
	int currrent = heightMap.at(start_row).at(currentColumn);
	int direction = -1;
	while (currentColumn < columns) {
		//cout << "(" << currentRow << "," << currentColumn << ")" << endl;
		int diff1 = -1, diff2 = -1, diff3 = -1;
		direction = -1;//0-go forward,1->go fwd-top , 2->go fwd-down
		//calculate differences:
		if (currentRow >= 1 && currentColumn < columns - 1) {
			diff1 = abs(currrent - heightMap.at(currentRow - 1).at(currentColumn + 1));
		}
		if (currentColumn < columns - 1) {
			diff2 = abs(currrent - heightMap.at(currentRow).at(currentColumn + 1));
		}
		if (currentRow < rows - 1 && currentColumn < columns - 1) {
			diff3 = abs(currrent - heightMap.at(currentRow + 1).at(currentColumn + 1));
		}
		//set proper direction
		if (diff1 == -1) {//currentRow = 0
			if (diff2 != -1 && diff3 != -1) {
				if (diff2 < diff3) {
					direction = 0;
					dist += diff2;
				}
				else if (diff3 < diff2) {
					direction = 2;
					dist += diff3;
				}
				else if (diff2 == diff3) {
					direction = 0;
					dist += diff2;
				}
			}
		}
		if(diff3 == -1){//currentRow = rows - 1
			if (diff1 != -1 && diff2 != -1) {
				if (diff1 < diff2) {
					direction = 1;
					dist += diff1;
				}
				else if (diff2 < diff1) {
					direction = 0;
					dist += diff1;
				}
				else if (diff1 == diff2) {
					direction = 0;
					dist += diff1;
				}
			}
		}
		
		if (diff1 != -1 && diff2 != -1 && diff3 != -1) {
			//find minimum:
			int min = diff1;
			if (diff2 < min)
				min = diff2;
			if (diff3 < min)
				min = diff3;
			if (min == diff2)//if fwd direction is the same as minimum direction is fwd
				direction = 0;
			else if (min != diff2) {
				if (min == diff1 == diff3) {
					direction = 2;
				}
			}

			dist += min;
		}

		switch (direction) {
		case 0://go fwd		
			currentRow = currentRow;
			break;
		case 1://go fwd-top
			currentRow = currentRow - 1;
			break;
		case 2://go fwd-down
			currentRow = currentRow + 1;
			break;
		}

		r.at(currentRow).at(currentColumn) = color_r;
		g.at(currentRow).at(currentColumn) = color_g;
		b.at(currentRow).at(currentColumn) = color_b;

		currentColumn += 1;

		//cout << "(" << currentRow << "," << currentColumn << ")" << endl;
	}
	return dist;
}

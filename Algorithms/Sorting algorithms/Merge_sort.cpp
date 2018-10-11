#include <iostream>
using namespace std;

#define maxn 100

int	a[maxn];

int	n;

void	merge(int l, int r) 
{
	if (r == l)
        	return;
    	if (r - l == 1) 
	{ 
        	if (a[r] < a[l])
            		swap(a[r], a[l]);
        	return;
    	}
	int	m = (r + l) / 2;
    
	merge(l, m);
    	merge(m + 1, r);
    	
	int	buf[maxn];
    	int 	xl = l;
    	int 	xr = m + 1;
    	int 	cur = 0;
    
	while (r - l + 1 != cur) 
	{
        	if (xl > m)
            		buf[cur++] = a[xr++];
        	else if (xr > r)
            		buf[cur++] = a[xl++];
        	else if (a[xl] > a[xr])
            		buf[cur++] = a[xr++];
        	else buf[cur++] = a[xl++];

    	}
    	for (int i = 0; i < cur; i++)
        	a[i + l] = buf[i];
}

int main() 
{    
	cin >> n;

    	for (int i = 0; i < n; i++)
        	cin >> a[i];

    	merge(0, n - 1);

    	for (int i = 0; i < n; i++)
        	cout << a[i];
	cout << endl;

    	return 0;
}

/*#include <iostream>
#include <cstdlib>
using namespace std;

void	MergeSort(char* buf, int first, int last);

int	main(void)
{
	const int nSIZE = 20;
	char 	arr[nSIZE] = {9, 8, 7 ,3, 2, 1, 4, 5, 6, 10, 13, 11, 12, 14, 17, 15, 16, 20, 19, 18};
	
	MergeSort(arr, 0, nSIZE);
	for (int i = 0; i < nSIZE; i++)
	{
		cout << arr[i];
	}
	cout << "\n";
	return (0);
}

void	MergeSort(int buf[], int first, int last)
{
	if (first >= last - 1) return;

	int	mid = (first + last) / 2;
	MergeSort(buf, first, mid);
	MergeSort(buf, mid, last);

	contact * mas = new contact[last - first];
	for(int i = first; i < last; ++i) 
		mas[i - first] = buf[i];

	int	l = 0, r = mid - first;
	for(int i = first; i < last; ++i)
	{
		if (l == mid - first)
			buf[i] = mas[r++];
		else if (r == last - first)
			buf[i] = mas[l++];
		else if (strcmp(mas[l].sname,mas[r].sname) < 0)
			buf[i] = mas[l++];
		else
			buf[i] = mas[r++];
	}
	delete[] mas;
}*/
}

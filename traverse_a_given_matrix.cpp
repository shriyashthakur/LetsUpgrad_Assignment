// C++ Program to print a matrix spirally

#include <bits/stdc++.h>
using namespace std;
#define Row 3
#define Column 3
void spiralPrint(int m, int n, int a[Row][Column])
{
	int i, k = 0, l = 0;

	while (k < m && l < n) {
		for (i = l; i < n; ++i) {
			cout << a[k][i] << " ";
		}
		k++;
		for (i = k; i < m; ++i) {
			cout << a[i][n - 1] << " ";
		}
		n--;
		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				cout << a[m - 1][i] << " ";
			}
			m--;
		}
		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
}
int main()
{
	int a[Row][Column];
	cout<<"enter the element=\n";    
     for(int i=0;i<Row;i++)    
     { 
       for(int j=0;j<Column;j++)    
       {    
         cin>>a[i][j];  
       }    
     }
	spiralPrint(Row, Column, a);
	return 0;
}



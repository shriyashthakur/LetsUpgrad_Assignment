#include <iostream>
using namespace std;
int main()
{
	//Key to hold the first element of array
	int key;
	//Hold the number of count
	int count = 0;
	//Assigne the array size.
	int arr[5];
	//Loop to get the array from user
	for(int i=0;i<5; i++)
	{
		cin>>arr[i];
	}
	//Hold the index of first element of array.
	key = arr[0];
	//Iteration the value of array
	for(int i=0; i<5; i++)
	{
		//Check the condition
		if(key<=arr[i])
		{
			count++;
		}
	}
	//Display the total count
	cout<<count;
}

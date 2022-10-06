//Write a C++ program to find greater of 2 numbers.
#include<iostream>
using namespace std;
int main()
{
	//variable initialization.
	int num1,num2;
	cout<<"Enter the two number"<<endl;
	//Two input given by user through key.
	cin>>num1>>num2;
	//Checking the condition
	if(num1>num2)
	{
		//print the number1 is greater
		cout<<"Number1 is greater "<<num1<<endl;
	}
	else
	{
		//print the number2 is greater
		cout<<"Number2 is greater "<<num2<<endl;
	}
	return 0;
}



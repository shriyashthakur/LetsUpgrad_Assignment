//Find the Factorial Number
#include <iostream>  
using namespace std;
int main() 
{
    int n, i;
    //To get only positive value 
    unsigned long fact = 1;
    printf("Enter an Number ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        cout<<"Error! Factorial of a negative number doesn't exist."<<endl;
    else 
	{
        for (i = 1; i <= n; ++i) 
		{
			
            fact *= i;
        }
        cout<<"Factorial of = "<<fact<<endl;
    }

    return 0;
}


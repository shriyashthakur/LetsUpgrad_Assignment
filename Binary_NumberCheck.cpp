#include <iostream>
using namespace std;
int main() 
{
    int binarynumber = 0,i = 1;
    int remainder,n;
    cout<<"Enter the integer number"<<endl;
    cin>>n;
    // Loop termination condition.
    while(n!=0)
    {
        remainder = n % 2;
        // Divide the number by 2.
        n = n / 2;
        binarynumber = binarynumber+remainder * i;
        // To increase the place value.
        i=i*10;
    }
    cout << "Binary Representation of given number: ";
    cout << binarynumber << endl;
}


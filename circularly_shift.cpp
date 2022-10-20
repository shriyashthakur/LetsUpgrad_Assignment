//Given 3 values x,y,z, write a program to circularly shift their values to the right
#include<iostream>   
using namespace std;
void shift_right(int *a, int *b, int *c)  
{  
    int temp;  
  
    temp = *c;  
    *c   = *b;  
    *b   = *a;  
    *a   = temp;  
}  
int main()  
{  
    int x, y, z;  
  
    cout<<"Enter three numbers"<<endl;  
    cin>>x>>y>>z;  
    cout<<"Before shifting right = "<<x<<" "<<y<<" "<<z<<" "<<endl;  
    shift_right(&x, &y, &z);  
    cout<<"After shifting right  = "<<x<<" "<<y<<" "<<z<<" "<<endl;  
    return 0;  
}  


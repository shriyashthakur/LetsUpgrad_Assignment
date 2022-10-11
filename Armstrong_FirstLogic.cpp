//Find the Armstrong number
#include <iostream>  
using namespace std;  
int main()  
{  
int n,r,sum=0,org;    
cout<<"Enter the Number"<<endl;    
cin>>n;    
org=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(org==sum)    
cout<<"Number is Armstrong."<<endl;    
else    
cout<<"Number is not Armstrong."<<endl;   
return 0;  
}

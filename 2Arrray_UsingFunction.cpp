// Function to multiply two matrices.
#include <iostream>
using namespace std;
#define ARRAYRANGE 3
void multiply(int arr1[ARRAYRANGE][ARRAYRANGE], int arr2[ARRAYRANGE][ARRAYRANGE], int arr3[ARRAYRANGE][ARRAYRANGE]){
    for(int i = 0; i < ARRAYRANGE; i++){
        for(int j = 0; j < ARRAYRANGE; j++){
            arr3[i][j] = 0;
            for(int k = 0; k < ARRAYRANGE; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main() 
{   
    int arr1[ARRAYRANGE][ARRAYRANGE] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };    
    int arr2[ARRAYRANGE][ARRAYRANGE] = {
        {1,4,7},
        {2,5,8},
        {3,6,9}
    };
    
    int arr3[ARRAYRANGE][ARRAYRANGE];
    multiply(arr1,arr2,arr3);
    
    cout<<"Multiplication of 2 matrix:"<<endl;
    for(int i = 0; i < ARRAYRANGE; i++){
        for(int j = 0; j < ARRAYRANGE; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

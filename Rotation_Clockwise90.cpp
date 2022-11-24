//Write a Program to rotate a given matrix 90 degrees clockwise.
#include<iostream>
using namespace std;
#define row_col_size 3
void Rotate_ClockWise(int arr[row_col_size][row_col_size]){
   for(int i = 0; i < row_col_size; i++){
      for(int j = 0; j < row_col_size - i; j++){
         int ptr = arr[i][j];
         arr[i][j] = arr[row_col_size - 1 - j][row_col_size - 1 - i];
         arr[row_col_size - 1 - j][row_col_size - 1 - i] = ptr;
      }
   }
   for(int i = 0; i < row_col_size / 2; i++){
      for(int j = 0; j < row_col_size; j++){
         int ptr = arr[i][j];
         arr[i][j] = arr[row_col_size - 1 - i][j];
         arr[row_col_size - 1 - i][j] = ptr;
      }
   }
}
int main()
{
   int arr[row_col_size][row_col_size];
   //Get value from user.
   for(int i = 0; i <3; i++)
   {
   	
      for(int j = 0; j <3; j++){
         cin>>arr[i][j];
      }
   }
   Rotate_ClockWise(arr);
   cout<<"Rotation of a matrix by 90 degree in clockwise direction without using any extra space is:"<<"\n";
   for(int i = 0; i < row_col_size; i++)
   {
   	
      for(int j = 0; j < row_col_size; j++){
         cout <<" "<<arr[i][j] << " ";
      }
      cout << "\n";
   }
   return 0;
}

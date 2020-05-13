/*
Given an N * M 2D binary matrix, the task is to find the count of columns having odd number of 1s.

sample input: {
{1, 1, 0, 0, 1, 1},
{0, 1, 0, 1, 0, 0},
{1, 1, 1, 0, 1, 0}}

sample outpu: 4
*/

#include<iostream>
using namespace std;
#define loopOuter(i,row) for(int i=0;i<row;i++)
#define loopInner(j,col) for(int j=0;j<col;j++)
int main ()
{ 
  int count=0,row,col;
  cout << "Enter number of rows and cloumns" << endl;
  cin >> row >> col;
  
  //Allocating 2D Matrix
  int **arr = new int*[row];
  loopOuter(i,row) arr[i] = new int[col];
   
  //Input matrix elements
  cout << "Enter elements "<< row*col <<" of array:" << endl;
  loopOuter(i,row) loopInner(j,col) cin >> arr[i][j];
  
  
  //Logic
  for(int i=0;i<col;i++){

  	int sum = 0;
  	
  	for(int j=0;j<row;j++) sum+= arr[j][i]; 
  	
    if (sum % 2 == 1) count++;   	
  }
  
  //output
  cout <<"Output: "<< count <<endl; 
}

/*
Search in a row wise and column wise sorted matrix. Given an n x n matrix
and a number x, find the position of x in the matrix if it is present in it.
Otherwise, print “Not Found”. In the given matrix, every row and column is
sorted in increasing order. The designed algorithm should have linear time
complexit

Input : mat[][] = { {10, 20, 30, 40},{ 15, 25, 35, 45},{27, 29, 37, 48},{32, 33, 39, 50}};
Element: 29
Output: found at 2,1
*/

#include<iostream>
using namespace std;
#define loopOuter(i,row) for(int i=0;i<row;i++)
#define loopInner(j,col) for(int j=0;j<col;j++)
int main ()
{ 
  int row, col, ele;
  cout << "Enter number of rows and columns" << endl;
  cin >> row >> col;
  
  //Allocating 2D Matrix
  int **arr = new int*[row];
  loopOuter(i,row) arr[i] = new int[col];
   
  //Input matrix elements
  cout << "Enter elements "<< row*col <<" of array:" << endl;
  loopOuter(i,row) loopInner(j,col) cin >> arr[i][j];
  
  cout << "Enter elemnt to be searched" << endl;
  cin >> ele;
  
  int i = 0, j = col-1;
  bool check = true;
  
  while(i<row && j>=0){
  	if(arr[i][j] == ele){
  		cout << "Element found at: " << i <<" , "<< j << endl;
  		check = false;
  		break;
	  }
	else if(arr[i][j] < ele) i++;
	else j--;
  }
  if(check) cout << "Element not found " <<endl;
  
}

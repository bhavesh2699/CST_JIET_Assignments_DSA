/*
Given a M x N matrix mat[][], the task is to count the number of cells which
have the sum of its adjacent cells equal to a prime number. For a cell x[i][j],
only x[i+1][j], x[i-1][j], x[i][j+1] and x[i][j-1] are the adjacent cells.

Input : mat[][] = {{1, 3}, 
				   {2, 5}}
Output :2
*/

#include<iostream>
using namespace std;
#define loopOuter(i,row) for(int i=0;i<row;i++)
#define loopInner(j,col) for(int j=0;j<col;j++)
#define primeLoop(i,sum) for (int i = 2; i <= sum / 2; i++) 
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
  
  loopOuter(i,row){
  	loopInner(j,col)
  {
  	 int sum = 0; 
  	bool isPrime = true;
  	 
  
            // i-1, j 
            if (i - 1 >= 0) 
                sum += arr[i - 1][j]; 
  
            // i+1, j 
            if (i + 1 < row) 
                sum += arr[i + 1][j]; 
  
            // i, j-1 
            if (j - 1 >= 0) 
                sum += arr[i][j - 1]; 
  
            // i, j+1 
            if (j + 1 < col) 
                sum += arr[i][j + 1]; 
                
            
		  primeLoop(i,sum){
		      if (sum % i == 0) {
		         isPrime = false;
		         break;
		      }
		   }
		   if (isPrime)
		      count++; 
	}	
  }
  cout <<"Output: "<< count <<endl; 
}

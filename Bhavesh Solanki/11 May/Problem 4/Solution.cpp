/*
Given an integer A, find and return the number of paths in a grid of size (A x A) that
starts from (1, 1) and reaches (A, A) without crossing the major diagonal.

sample input: 3
sample input: 2
*/

#include <iostream> 
#include <cstring> 

using namespace std; 

#define ALLOC(size,dp) memset(dp,0,size*sizeof(*dp));
  
int main() 
{
	int size;
	cout << "Enter number of rows and columns:" << endl;
    cin >> size;
    
    int *dp = new int[size];
    
    ALLOC(size,dp)
    
    dp[0] = 1; 
   
    for (int i = 1; i < size; i++) { 
        for (int j = 1; j < size; j++) { 
          if(j<=i) dp[j] += dp[j - 1];
		  else break; 
        } 
    } 
  
	cout << "Output: "<<dp[size-1]; 
	delete dp;
} 

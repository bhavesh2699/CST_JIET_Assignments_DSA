/*
Given an integar A. Compute and return the square root of A.
If A is not a perfect square, return floor(sqrt(A)). DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY

sample input: 11
sample input: 3
*/

#include<bits/stdc++.h> 
using namespace std; 

int main() 
{	 
 	int num;
	cout << "Enter number: " << endl;
    cin >> num;

	if (num == 0 || num == 1) {
		cout << "Output: "<<num; 
	}

	int start = 1, end = num, ans; 
	while (start <= end) 
	{		 
		int mid = (start + end) / 2; 

		if (mid*mid == num) 
			return mid; 

		
		if (mid*mid < num) 
		{ 
			start = mid + 1; 
			ans = mid; 
		} 
		else end = mid-1;		 
	} 
 
	cout << "Output: "<<ans;
} 


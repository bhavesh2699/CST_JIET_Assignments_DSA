/*
Question-2
Given two arrays A[] and B[] of size N, the task is to count the maximum number of pairs, where each pair
contains one from each array, such that A[i] > B[i]. Also the array A can be rearranged any number of
times. 

Input: A[] = {20, 30, 50}, B[]= {60, 40, 25}
Output: 2

Explanation:
Initially:
A[0] = 20 < B[0] = 60
A[1] = 30 < B[1] = 40
A[2] = 50 > B[2] = 25
Clearly, this arrangement has only 1 value such that A[i] > B[i].
This array A[] when rearranged to {20, 50, 30}:
A[0] = 20 < B[0] = 60
A[1] = 50 > B[1] = 40
A[2] = 30 > B[2] = 25
2 values follow the condition A[i] > B[i] which is the maximum for these set of arrays
*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,a,count=0;
	
	priority_queue<int> arr1;
	priority_queue<int> arr2;
		
	cout<<"Enter number of Elements: "<<endl;
	cin>>n;

	cout<<"Enter Elements in array 1: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr1.push(a);			
		
	}
	cout<<"Enter Elements in array 2: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr2.push(a);
	}
	
	for (int i = 0; i < n; i++) { 

        if (arr1.top()>arr2.top()) { 
            count++; 
            arr1.pop(); 
            arr2.pop(); 
        } 
        else { 
            if (arr2.size() == 0) { 
                break; 
            } 
            arr2.pop(); 
        } 
    } 
	
	cout<<endl;
	cout<<"Pairs: "<<count<<endl;
	
	return 0;
	
}

/*
Question-1

Given an integer K and an array of integers arr, the task is to find the maximum element from the array and
after every retrieval the number will get decremented by 1. Repeat these steps exactly K number of times
and print the sum of all the values retrieved in the end.

Input: K = 3, arr[] = {2, 3, 5, 4}
Output: 13

For K = 1, current maximum is 5 (Sum = 5 and arr[] = {2, 3, 4, 4})
For K = 2, current maximum is 4 (Sum = 5 + 4 = 9 and arr[] = {2, 3, 3, 4})
For K = 3, current maximum is 4 (Sum = 9 + 4 = 13 and arr[] = {2, 3, 3, 3})
Hence, the result is 13
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,sum=0,k,a;
	
	priority_queue<int> arr;
	
	cout<<"Enter number of Elements: "<<endl;
	cin>>n;
	cout<<"Enter value of K: "<<endl;
	cin>>k;	
	cout<<"Enter Elements: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push(a);
	}
	for(int i=0;i<k;i++)
	{
		sum=sum+arr.top();
	    //cout<<arr.top()<<endl;
	    int k=arr.top();
		arr.pop();
		arr.push(k-1);
		//print(arr,n);
		
		
	
	}
	//cout<<arr.top()<<endl;
	cout<<endl;
	cout<<"COUNT: "<<sum<<endl;
	
	return 0;
	
}

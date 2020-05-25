/*
Question-2

Given an array a, your task is to convert it into a non-increasing form such that we can either increment or
decrement the array value by 1 in minimum changes possible.

Input : a[] = {3, 1, 5, 1}
Output : 4
We need to decrease 5 to 1 to make array sorted
in non-increasing order.

Input : a[] = {1, 5, 5, 5}
Output : 4
We need to increase 1 to 5.
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

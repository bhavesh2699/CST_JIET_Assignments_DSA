/*
Given an array arr size N, the task is to print the final array value remaining in the array when the maximum
and second maximum element of the array is replaced by their absolute difference in the array, repeatedly.
Note: If the maximum two elements are same, then both are removed from the array, without replacing any
value.

Input: arr = [2, 7, 4, 1, 8, 1]
Output: 1

Explanations:
Merging 7 and 8: absolute difference = 7 – 8 = 1. So the array converted into [2, 4, 1, 1, 1].
Merging 2 and 4: absolute difference = 4 – 2 = 2. So the array converted into [2, 1, 1, 1].
Merging 2 and 1: absolute difference = 2 – 1 = 1. So the array converted into [1, 1, 1].
Merging 1 and 1: absolute difference = 4 – 2 = 0. So nothing will be Merged.
So final array = [1].
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,num2,num1,a;
	
	priority_queue<int> arr;
	
	cout<<"Enter number of Elements: "<<endl;
	cin>>n;

	cout<<"Enter Elements: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push(a);
	}
	num1 = arr.top();
	arr.pop();
	num2 = arr.top();
	arr.pop();
	//cout<< num1<<" "<<num2;
	while(abs(num1-num2) != 0){
		arr.push(abs(num1-num2));
		num1 = arr.top();
		arr.pop();
		num2 = arr.top();
		arr.pop();
	}
	cout<<endl;
	while(!arr.empty()){
		cout<<"FINAL ARRAY: "<<arr.top()<<" ";
		arr.pop();
	}
	
	
	
	cout<<endl;
	//cout<<"COUNT: "<<sum<<endl;
	
	return 0;
	
}

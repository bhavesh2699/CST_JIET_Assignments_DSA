/*
Given an array arr[] and an integer K, the task is to find the number of merge operation required such that
all the elements of the array is greater than or equal to K.
Merge Process of the Element is as per following formula

New Element = 1 * (First Minimum element) + 2 * (Second Minimum element)

Input: arr[] = {1, 2, 3, 9, 10, 12}, K = 7
Output: 2

Explanation:
After the first merge operation elements 1 and 2 is removed,
and the element (1*1 + 2*2 = 5) is inserted into the array
{3, 5, 9, 10, 12}
After the second merge operation elements 3 and 5 is removed,
and the element (3*1 + 5*2 = 13) is inserted into the array
{9, 10, 12, 13}
Thus, 2 operations are required such that all elements are greater than K.
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,num2,num1,a,k,count=0;
	
	priority_queue<int, vector<int>, greater<int> > arr;
	
	cout<<"Enter number of Elements: "<<endl;
	cin>>n;
	
	cout<<"Enter K: "<<endl;
	cin>>k;

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
	
	while(num1 < k && num2 < k){
		arr.push( (1 * num1 + 2 * num2) );
		num1 = arr.top();
		arr.pop();
		num2 = arr.top();
		arr.pop();
		count++;
	}
		
	cout<<endl;
	cout<<"COUNT: "<<count<<endl;
	
	return 0;
	
}

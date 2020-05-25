/*
Question-2

Given an integer array arr the task is to count the number of elements ‘A[i]’, such that A[i] + 1 is also
present in the array.

Input: arr = [1, 2, 3]
Output: 2
Explanation: 1 and 2 are counted cause 2 and 3 are in arr.

Input: arr = [1, 1, 3, 3, 5, 5, 7, 7]
Output: 0
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,rec=0;
	vector<int> arr;
	map<int,int> count;
	
	cout<<"Enter number of Elements: "<<endl;
	cin>>n;
	cout<<"Enter Elements: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
		count.insert(make_pair(a,0));
	}
	for(int i=0;i<n;i++)
	{
		if(count.find(arr[i]+arr[i+1])!=count.end()){
			rec++;
		}
	
	}
	cout<<endl;
	cout<<"COUNT: "<<rec<<endl;
	
	return 0;
	
}

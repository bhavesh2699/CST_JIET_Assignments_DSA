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

#include <bits/stdc++.h> 
using namespace std; 

int DecreasingArray(int a[], int n) 
{ 
	int sum = 0, dif = 0; 

	priority_queue<int, vector<int>, greater<int> > pq;
	
		for (int i = 0; i < n; i++) { 
	
			if (!pq.empty() && pq.top() < a[i]) { 
            //cout<<"not empty: "<<endl;

			dif = a[i] - pq.top(); 
			sum += dif; 
			pq.pop(); 
			pq.push(a[i]); 
			
		} 
      else{
            //cout<<" empty: "<<endl;

		pq.push(a[i]); 
		
		}
		
	} 
	
	return sum; 
} 

int main() 
{ 
	int a[] = {3, 1, 5, 1}; 
	int n = sizeof(a) / sizeof(a[0]); 
	cout<<"SEQUENCE: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
cout<<endl;
	cout << "OUTPUT: "<<DecreasingArray(a, n); 

	return 0; 
} 


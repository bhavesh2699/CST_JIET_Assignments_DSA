/*
Given an integer K and an array arr[] containing N integers, the task is to find the sum and product of K
smallest and K largest fibonacci numbers in the array.

Note: Assume that there are at least K fibonacci numbers in the array.
Input: arr[] = {2, 5, 6, 8, 10, 11}, K = 2
Output:

Sum of K-minimum fibonacci numbers is 7
Product of K-minimum fibonacci numbers is 10
Sum of K-maximum fibonacci numbers is 13
Product of K-maximum fibonacci numbers is 40

Explanation :
{2, 5, 8} are the only fibonacci numbers from the array.
{2, 5} are the 2 smallest and {5, 8} are the 2 largest among them.
*/
#include<bits/stdc++.h>

using namespace std;

bool isPerfectSquare(int x) 
{ 
    int s = sqrt(x); 
    return (s*s == x); 
} 
  
bool isFibonacci(int n) 
{ 
    
    return isPerfectSquare(5*n*n + 4) || 
           isPerfectSquare(5*n*n - 4); 
} 

int main()
{
	int n,num2,num1,a,k;
	int sum_min=0,sum_max=0,pro_min=1,pro_max=1;
	
	priority_queue<int> max_arr;
	priority_queue<int, vector<int>, greater<int> > min_arr;
		
	cout<<"Enter number of Elements: "<<endl;
	cin>>n;
	cout<<"Enter K: "<<endl;
	cin>>k;
	cout<<"Enter Elements: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if (isFibonacci(a)){
			max_arr.push(a);
			min_arr.push(a);			
		} 
	}
	
	
	if(max_arr.size() >= k){
		for(int i = 0; i < k; i++){
			sum_min+=min_arr.top();
			sum_max+=max_arr.top();
			
			pro_min*=min_arr.top();
			pro_max*=max_arr.top();
			
			
			min_arr.pop();
			max_arr.pop();
							
		}
	}
	
	cout<<endl;
	cout<<"Sum of K-minimum fibonacci numbers is: "<<sum_min<<endl;
	cout<<"Product of K-minimum fibonacci numbers is: "<<pro_min<<endl;
	cout<<"Sum of K-maximum fibonacci numbers is: "<<sum_max<<endl;
	cout<<"Product of K-maximum fibonacci numbers is: "<<pro_max<<endl;
	
	return 0;
	
}

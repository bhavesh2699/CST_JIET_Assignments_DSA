/*
Question-1

Given an integer k and an array of integers arr, the task is to find the sum and product of k smallest
and k largest composite numbers in the array. Assume that there are at least k composite numbers in the
array.

Input: arr[] = {2, 5, 6, 8, 10, 11}, k = 2
Output: 
Sum of k-minimum composite numbers is 14
Sum of k-maximum composite numbers is 18
Product of k-minimum composite numbers is 48
Product of k-maximum composite numbers is 80

{6, 8, 10} are the only composite numbers from the array. {6, 8} are the 2 smallest and {8, 10} are the 2
largest among them.
*/
#include<bits/stdc++.h>

using namespace std;

bool isComposite(int n) 
{
    if (n <= 1)  return false; 
    if (n <= 3)  return false; 
   
    if (n%2 == 0 || n%3 == 0) return true; 
   
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return true; 
   
    return false; 
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
		if (isComposite(a)){
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

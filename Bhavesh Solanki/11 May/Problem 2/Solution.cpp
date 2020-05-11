/*
Given an integer array A of N integers, find the pair of integers in the array which have 
minimum XOR value. Report the minimum XOR value. 

sample input: { 9, 5, 3 }
sample input: 6
*/

#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 100000
#define loop(i,n) for(int i=0;i<n;i++)
  
int main() 
{ 
    int size;
    cout << "Enter size of array:" << endl;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter elements of array:" << endl;
    loop(i,size) cin >> arr[i];
    
    sort(arr, arr + size); 
  
    int minXor = MAX; 
    int val = 0; 
  
    for (int i = 0; i < size - 1; i++) { 
        minXor = min(minXor, arr[i] ^ arr[i + 1]); 
    } 
    
    cout <<"Output: "<<minXor << endl; 
    
    
    delete arr;
    

} 


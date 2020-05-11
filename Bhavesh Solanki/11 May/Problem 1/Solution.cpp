/*
Given an array of integers, every element appears twice except for one. Find that single
one 
sample input: { 1, 1, 2, 3, 2, 4, 5, 4, 5 }
sample input: 3
*/

#include<iostream>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)

int main ()
{ 
  int size;
  cout << "Enter size of array:" << endl;
  cin >> size;
  int *arr = new int[size];
  cout << "Enter elements of array:" << endl;
  loop(i,size) cin >> arr[i];
  int result = arr[0];
  for (int j = 1; j < size; j++) result ^= arr[j];  
  cout << "Output: " << result;
  delete arr;
}

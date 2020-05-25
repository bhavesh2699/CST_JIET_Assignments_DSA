/*
Question-1
Program to find frequency of each element in a vector using map in C++
Input: vec = {1, 2, 2, 3, 1, 4, 4, 5}
Output:
1 2
2 2
3 1
4 2
5 1

*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {1, 2, 2, 3, 1, 4, 4, 5};
	map<int,int> freq;
	
	for(int i = 0;i<arr.size();++i)
	{
		if(freq.find(arr[i]) != freq.end())
		{
			freq[arr[i]] +=1;
		}
		else
		{
			freq.insert(make_pair(arr[i],1));
		}
		
		
	}
	for( auto &it: freq)
		{
			cout<<"Frequency of "<<(it).first<<" : "<<(it).second<<endl;
		}
	
	return 0;
	
}

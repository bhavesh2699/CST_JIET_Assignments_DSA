/*
Given a directed graph having n nodes. For each node, delete all the outgoing edges except the outgoing
edge with minimum weight. Apply this deletion operation for every node and then print the final graph
remained where each node of the graph has at most one outgoing edge and that too with minimum weight.

Input : Adjacency Matrix of input graph :

  | 1 2 3 4
  ---------
1 | 0 3 2 5
2 | 0 2 4 7
3 | 1 2 0 3
4 | 5 2 1 3
Output : Adjacency Matrix of output graph :
  | 1 2 3 4
  ---------
1 | 0 0 2 0
2 | 0 2 0 0
3 | 1 0 0 0
4 | 0 0 1 0

*/

#include <bits/stdc++.h> 

using namespace std; 

int minFn(int arr[],int index) 
{ 
	int min = arr[index]; 

	for (int i = 0; i < 4; i++) 
		if (min > arr[i] && arr[i] != 0) 
			min = arr[i]; 
			//cout<<min<<endl;
	return min; 
} 

void minimize(int arr[][4]) 
{ 
	int min; 
	for (int i = 0; i < 4; i++) 
        for (int j = 0; j < 4; j++) 
            if (arr[i][j] == 0) 
                arr[i][j] = INT_MAX; 

	for (int i = 0; i < 4; i++) { 

		min = minFn(arr[i],i); 

		for (int j = 0; j < 4; j++) { 
			if (!(arr[i][j] == min) || (arr[i][j] == INT_MAX)) 
				arr[i][j] = 0; 
		} 
		min=0;
	} 

	for (int i = 0; i < 4; i++) { 
		for (int j = 0; j < 4; j++) 
			cout << arr[i][j] << " "; 
		cout << "\n"; 
	} 
} 


int main() 
{ 
	int arr[4][4] = { 1, 2, 4, 0, 
					0, 0, 0, 5, 
					0, 2, 0, 3, 
					0, 0, 0, 0 }; 

	minimize(arr); 

	return 0; 
} 


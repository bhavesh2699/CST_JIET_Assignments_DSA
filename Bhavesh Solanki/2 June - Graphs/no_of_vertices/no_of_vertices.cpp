/*
The number of vertices is given for a Cycle Graph. The task is to find the Degree and the number of Edges
of the cycle graph.

Input:
Number of vertices = 4
Output:
Degree is 8
Edges are 4

*/

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int numberOfVertices;
	
	cout<<"Enter number Of Vertices: "<<endl;
	cin>>numberOfVertices;
 
	cout << "For numberOfVertices = "
		<< numberOfVertices 
		<< "\nDegree = "
		<< 2 * numberOfVertices 
		<< "\nNumber of Edges = "
		<< numberOfVertices; 

	return 0; 
} 


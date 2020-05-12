/*
Given an integer A representing the square blocks. The height of each square block is 1. 
The task is to create a staircase of max height using these blocks. 
The first stair would require only one block, the second stair would require two blocks
and so on. Find and return the maximum height of the staircase

sample input: 5
sample input: 2
*/

#include<iostream>
using namespace std;

#define loop(i,size) for(int i=1;;i++)
#define output(blocks) cout <<"Output: "<< blocks << endl;
  
int main() 
{ 
    int size, blocks = 0;
    cout << "Enter number of square blocks:" << endl;
    cin >> size;
    
    loop(i,size){
    	size -= i;
    	if(size < 0){
    		output(blocks)
    		break;
		}
		else blocks += 1;
    	
	}     
} 


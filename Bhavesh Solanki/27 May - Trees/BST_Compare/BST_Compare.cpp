#include<stdio.h>
#include<iostream>
using namespace std;

//create a structure for Binry Search tree
typedef struct Binary_Search_Tree{
	struct Binary_Search_Tree *left;	//8 bytes
	int data;	//4 bytes
	struct Binary_Search_Tree *right;	//8 bytes
}BST;

/*
	To add node in the Tree
*/
void insert(BST **cur, int num){
	//check if root is numm means Tree is empty
	if(*cur == NULL){
		//create a new  node
		BST *new_node = (BST *)malloc(sizeof(BST));
		//check if node is created
		if(new_node == NULL){
			cout<<"Unable to create node"<<endl;
			return;
		}
		new_node->data = num;
		new_node->left = NULL;
		new_node->right = NULL;
		
		//attach new_node to the root
		*cur = new_node;
	}else if((*cur)->data > num){
		//attach to Left subtree
		insert(&((*cur)->left),num);
	}else if((*cur)->data < num){
		//attach to right subtree
		insert(&((*cur)->right),num);
	}
}
int isIdentical(BST* root1, BST* root2) 
{ 
    // Check if both the trees are empty 
    if (root1 == NULL && root2 == NULL) 
        return 1; 
    // If any one of the tree is non-empty 
    // and other is empty, return false 
    else if (root1 != NULL && root2 == NULL) 
        return 0; 
    else if (root1 == NULL && root2 != NULL) 
        return 0; 
    else { // Check if current data of both trees equal 
        // and recursively check for left and right subtrees 
        if (root1->data == root2->data && isIdentical(root1->left, root2->left) 
            && isIdentical(root1->right, root2->right)) 
            return 1; 
        else
            return 0; 
    } 
}
int main(){
	//create a Tree with no elements
	BST *root1 = NULL;
	BST *root2 = NULL;
	int choice;
	do{
		cout<<"1. Insert node in tree1 "<<endl;
		cout<<"2. Insert node in tree2 "<<endl;
		cout<<"3. check "<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Enter Selection ";
		cin>>choice;
		
		switch(choice){
			case 1:
				int ele1;
				cout<<"Enter element to be added ";
				cin>>ele1;
				insert(&root1, ele1);
				break;
			case 2:
				int ele2;
				cout<<"Enter element to be added ";
				cin>>ele2;
				insert(&root2, ele2);
				break;
			case 3:
				if (isIdentical(root1, root2)) 
			        cout << "Both BSTs are identical"<<endl; 
			    else
			        cout << "BSTs are not identical"<<endl; 
				break;
			default:
				cout<<"Invalid Selection Enter again"<<endl;
		}
	}while(choice != 0);
	return 0;
	
}


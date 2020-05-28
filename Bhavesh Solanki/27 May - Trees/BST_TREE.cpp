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
/*
	Left-Root-Right
	Data in sorted order (Ascending)
*/
void inorder(BST *cur){
	if(cur != NULL){
		//move to left
		inorder(cur->left);
		//print current element
		cout<<cur->data<<" ";
		//move to right
		inorder(cur->right);
	}
}
/*
	Root-Left-Right
	FIrst element will be root element
*/
void preorder(BST *cur){
	if(cur != NULL){
		//print current element
		//cout<<"adress: "<<cur<<endl;
		cout<<cur->data<<" ";
		//move to left
		preorder(cur->left);
		//move to right
		preorder(cur->right);
	}
}

/*
	Left-Right-Root
	Last element will be root element
*/
void postorder(BST *cur){
	if(cur != NULL){
		//move to left
		postorder(cur->left);
		//move to right
		postorder(cur->right);
		//print current element
		cout<<cur->data<<" ";
	}
}

int search(BST **root, int num, BST **par, BST **x){
	BST *temp = *root;
	//flag to indicate search status, 0: fail, 1: success
	int found = 0;
	while(temp != NULL){
		if(temp->data == num){
			//element found, assign its addess to x
			*x = temp;
			found = 1;
			break;
		}else if(temp->data > num){
			//move to left child
			*par = temp;
			temp = temp->left;
		}else if(temp->data < num){
			//move to right child
			*par = temp;
			temp = temp->right;
		}
	}
	return found;
}

void deletenode(BST **root, int num){
	//check if tree is empty
	if(*root == NULL){
		cout<<"Tree is empty"<<endl;
		return;
	}
	//par is to hold address to parent of node to be delete
	BST *par = NULL;
	//x is to hold address of node to be deleted
	BST *x;
	//xsucc is to hold address of iorder successor node of node to be deleted
	BST *xsucc;
	//search for the node
	int found = search(root, num, &par, &x);
	//check if search is failed
	if(found == 0){
		cout<<num<<" Not found in node "<<endl;
		return;
	}
	//case-1: when the node to be deleted has two children
	if(x->left != NULL && x->right != NULL){
		par = x;
		//inorder successor is left most child of right subtree
		xsucc = x->right;
		while(xsucc->left != NULL){
			par = xsucc;
			xsucc = xsucc->left;
		}
		x->data = xsucc->data;
		x = xsucc;
		//now x will be in either of three cases given below
	}
	//case 2:when the node to be deleted has right child only
	if(x->left == NULL && x->right != NULL){
		//check if, at the right part of parent
		if(par->left == x){
			par->left = x->right;
		}else{
			par->right = x->right;
		}
		free(x);
	}
	//case 3:when the node to be deleted has left child only
	if(x->left != NULL && x->right == NULL){
		//check if, at the left part of parent
		if(par->left == x){
			par->left = x->left;
		}else{
			par->right = x->left;
		}
		free(x);
	}
	//case 4:when the node to be deleted is leaf node
	if(x->left == NULL && x->right == NULL){
		//check if, at the left part of parent
		if(par->left == x){
			par->left = NULL;
		}else{
			par->right = NULL;
		}
		free(x);
	}
}

int main(){
	//create a Tree with no elements
	BST *root = NULL;
	int choice;
	do{
		cout<<"1. Insert node "<<endl;
		cout<<"2. View Inorder Sequence "<<endl;
		cout<<"3. View Preorder Sequence "<<endl;
		cout<<"4. View Postorder Sequence "<<endl;
		cout<<"5. Search node "<<endl;
		cout<<"6. Delete node "<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Enter Selection ";
		cin>>choice;
		
		switch(choice){
			case 1:
				int ele;
				cout<<"Enter element to be added ";
				cin>>ele;
				insert(&root, ele);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				preorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				BST *par, *x;
				int num, found;
				cout<<"Enter node to be search ";
				cin>>num;
				found = search(&root, num, &par, &x);
				if(found){
					cout<<num<<" is available in tree";
				}else{
					cout<<num<<" is not available in tree";
				}
				break;
			case 6:
				cout<<"Enter node to be deleted ";
				cin>>num;
				deletenode(&root, num);
				break;
			default:
				cout<<"Invalid Selection Enter again"<<endl;
		}
	}while(choice != 0);
	return 0;
	
}


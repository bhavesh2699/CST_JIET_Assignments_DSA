#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

void insertBetween(Node *prev_node, int new_data)
{
	
	if(prev_node==NULL){
		cout<<"given prev node cannot be null";
		return;
	}
	Node *new_node= new Node();
		
	new_node->data=new_data;
	
	new_node->next=prev_node->next;
	
	prev_node->next=new_node;
	
}




void push(Node **ref_head, int new_data){
	Node *new_node= new Node();
	new_node->data=new_data;
	new_node->next=(*ref_head);
	(*ref_head)=new_node;		
}



void append(Node **ref_head, int new_data)
{
	Node *new_node= new Node();
	Node *last=*ref_head;
	
	new_node->data=new_data;
	new_node->next=NULL;
	
	if(*ref_head==NULL){
		*ref_head=new_node;
		return;
	}
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=new_node;
	return;
}

void printLL(Node *node){
	while(node != NULL){
		cout<<node->data<<" ";
		node=node->next;		
	}
}

int main(){
   Node *head=NULL;
   append(&head, 6);
   push(&head,7);
   push(&head,1);
   append(&head, 4);
   insertBetween(head,8);
   cout<<"HEAD: "<<head->data<<" "<<head->next<<endl;
   cout<<"Elements of Linked List: "<<endl;
   printLL(head);
   	
}

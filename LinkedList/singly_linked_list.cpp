#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    
};

int main() {
	// create a singly linked list
	int n,x;
	cin>>n;
	node*head=NULL;
	node*tail=NULL;
	for(int i=0;i<n;i++){
		cin>>x;
		node*newnode=new node();
		newnode->data=x;
		newnode->next=NULL;
		if(head==NULL){
			tail=head=newnode;
		}
		else{
			tail->next=newnode;
			tail=newnode;
		}
	}
	//insert at end;
	int val;
	cin>>val;
	node*newnode=new node();
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL){
		head=tail=newnode;
	}
	else{
		tail->next=newnode;
		tail=newnode;
	}
	//print linked list
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}

}

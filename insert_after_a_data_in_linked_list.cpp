#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    
    int data;
    node*next;
};

int main() {
	// your code goes here
	int n,x;
	cin>>n;
	node*head=NULL;
	node*tail=NULL;
	for(int i=0;i<n;i++){
	    cin>>x;
	    node*newnode=new node();
	    newnode->data=x;
	    newnode->next=NULL;
	    if(head==NULL)
	    tail=head=newnode;
	    else{
	        tail->next=newnode;
	        tail=newnode;
	    }
	}
	int val,target;
	cin>>val>>target;
	node*newnode=new node();
	newnode->data=val;
	node*temp=head;
	//search for target
	while(temp!=NULL&&temp->data!=target){
	    temp=temp->next;
	}
	if(temp!=NULL){  //target found
	    newnode->next=temp->next;
	    temp->next=newnode;
	}
	else{
	    cout<<"Target not found"<<endl;
	    delete newnode;
	}
	temp=head;
	while(temp!=NULL){
	    cout<<temp->data<<" ";
	    temp=temp->next;
	}

}

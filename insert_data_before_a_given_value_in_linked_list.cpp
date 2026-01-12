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
	    if(head==NULL){
	        head=tail=newnode;
	    }
	    else{
	        tail->next=newnode;
	        tail=newnode;
	    }
	}
	//givem value and target
	int val,target;
	cin>>val>>target;
	node*newnode=new node();
	newnode->data=val;
	// if target is aT head;
	if(head!=NULL&&head->data==target){
	    newnode->next=head;
	    head=newnode;
	    
	}
	else{
	    node*temp=head;
	    while(temp!=NULL&&temp->next!=NULL&& temp->next->data!=target){
	        temp=temp->next;
	    }
	    if(temp!=NULL&&temp->next!=NULL){    //found target
	        newnode->next=temp->next;
	        temp->next=newnode;
	    }
	    else{
	        cout<<"Target not found"<<endl;
	        delete newnode;
	    }
	}
	node*temp=head;
	while(temp!=NULL){
	    cout<<temp->data<<" ";
	    temp=temp->next;
	}

}

#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
	int value;
	Node* nxt;
	Node* prv;
};

class LinkedList{
    public:

	Node* head;
	Node* tail;
	LinkedList()
	
    {
    head=NULL;
    tail=NULL;
		
	}

    Node* createnode(int data)
    {
        Node* newnode=new Node;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        newnode->value=data;
        return newnode;
        

    }
	void insertHead(int value)
	{ 
        Node* newnode=createnode(value);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        head->prv=newnode;
        newnode->nxt=head;
        head=newnode;
        return;

	}
	void insertTail(int value)
	{
        Node* newnode=createnode(value);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
      tail->nxt=newnode;
      newnode->prv=tail;
      tail=newnode;
        return;
	}
	void insertMid(int value)
	{   Node *newnode=createnode(value);
        if(head==NULL)
    {
        head=tail=newnode;
        return;
    }

		   Node *slow=head;  
           Node *fast=head;
        while(fast && fast->nxt!=NULL)
        {
            fast=fast->nxt->nxt;
            slow=slow->nxt;
        }
        

        slow->prv->nxt=newnode;
        newnode->prv=slow->prv;
        newnode->nxt=slow;
        slow->prv=newnode;

	}
	void print()
	{
	Node *a=head;
    while(a)
    {
        cout<<a->value<<" ";
        a=a->nxt;
    }

	}
	void Merge(LinkedList a)
	{ if(a,head==NULL)return;
    tail->nxt=a.head;
    a.head->prv=tail;
    tail=a.tail;
	 

	}
};
int main()
{ 
	LinkedList a;
	LinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	a.print(); // prints  0 1 3 5 10
	cout<<"\n";
	b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print(); // prints  9 10 30 50 100
		cout<<"\n";

	a.Merge(b);
	a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    	cout<<"\n";

	b.print(); // prints  9 10 30 50 100*/
}
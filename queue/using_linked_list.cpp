#include<bits/stdc++.h>

using namespace std;
class node{
public:
int data;
node* next;
};
class linked_list_queue{
public:

node* head;
node* tail;
int sz;
linked_list_queue()
{
    head=NULL;
    tail=NULL;
    sz=0;
}
node* create_node(int value)
{
    node* newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
void enqueue(int val)
{
    node* newnode=create_node(val);
    sz++;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
    

}
void dequeue()
{   
    if(sz==0)
    {
        cout<<"stack is empty";
        return;
    }
    if(sz==1)
    {
        delete head;
        sz--;
        head=NULL;
        tail=NULL;
        return;
    }
    if(sz>1)
    {
        node* a=head;
        head=head->next;
        delete a;
        sz--;

    }
}
int front()
{
    if(sz==0)
    {
        cout<<"stack is empty";
        return -1;
    }
    return head->data;
}


};

int main()
{
linked_list_queue q;
q.enqueue(1);
cout<<q.front()<<"\n";
q.dequeue();
q.enqueue(5);
cout<<q.front()<<"\n";
q.dequeue();
q.enqueue(6);
cout<<q.front()<<"\n";

    return 0;
}
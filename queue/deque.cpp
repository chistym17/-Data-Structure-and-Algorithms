#include<bits/stdc++.h>
//deque using doubly linked list
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

};
class deque_list
{public:
node* head;
node* tail;
int sz;
deque_list()
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

void push_back(int value)
{   node* newnode=create_node(value);
    if(sz==0)
    {head=newnode;
    tail=newnode;
    sz++;
    return;

    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    sz++;
}
void push_front(int value)
{
     node* newnode=create_node(value);
    if(sz==0)
    {head=newnode;
    tail=newnode;
    sz++;
    return;

}
newnode->next=head;
head->prev=newnode;
head=newnode;
sz++;
}

void popfront()
{
    if(sz==0)
    {
        cout<<"deque is empty";
        return;
    }
    if(sz==1)
    {
        node* a=head;
        delete a;
        head=NULL;
        tail=NULL;
        sz--;
        return;

    }
    node *a=head;
    head=head->next;
    head->prev=NULL;
    delete a;
    sz--;


}
void popback()
{  if(sz==0)
    {
        cout<<"deque is empty";
        return;
    }
    if(sz==1)
    {
        node* a=head;
        delete a;
        head=NULL;
        tail=NULL;
        sz--;
        return;

    }
    node* a= tail;
    tail=tail->prev;
    tail->next=NULL;
    delete a;
    sz--;

}
int getsize()
{
    return sz;
}
int front()
{
    return head->data;
}
int back()
{
    return tail->data;
}
void traverse()
{
node* a=head;
while(a)
{
    cout<<a->data<<" ";
    a=a->next;
}

}
int get_max()
{
    node* a=head;
    int maxi=-1;
    while(a)
    {
       maxi= max(maxi,a->data);
        a=a->next;
    }
    return maxi;

}
int get_min()
{
    node* a=head;
    int mini;
    while(a)
    {
        mini=min(mini,a->data);
        a=a->next;
    }
    return mini;

}

};

int main()
{deque_list dl;
dl.push_front(2);
dl.push_back(5);
dl.push_back(1);
dl.push_front(9);
dl.push_front(7);
dl.traverse();
cout<<"\n";
cout<<dl.get_max()<<"\n";
cout<<dl.get_min()<<"\n";

    return 0;
}
#include<bits/stdc++.h>
//deque using doubly linked list
using namespace std;
template<class t>
class node{
    public:
    t data;
    node* next;
    node* prev;

};
template<class t>
class deque_list
{public:
node<t>* head;
node<t>* tail;
int sz;
deque_list()
{
    head=NULL;
    tail=NULL;
    sz=0;
}

node<t>* create_node(t value)
{
    node<t>* newnode=new node<t>;
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}

void push_back(t value)
{   node<t>* newnode=create_node(value);
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
void push_front(t value)
{
     node<t>* newnode=create_node(value);
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
        node<t>* a=head;
        delete a;
        head=NULL;
        tail=NULL;
        sz--;
        return;

    }
    node<t> *a=head;
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
        node<t>* a=head;
        delete a;
        head=NULL;
        tail=NULL;
        sz--;
        return;

    }
    node<t>* a= tail;
    tail=tail->prev;
    tail->next=NULL;
    delete a;
    sz--;

}

int getsize()
{
    return sz;
}


t front()
{   if(head==NULL)
{
    t a;
    cout<<"error";
    return a;
}
    return head->data;
}


t back()
{  if(head==NULL)
{
    t b;
    cout<<"error";
    return b;
}
    return tail->data;
}

void traverse()
{
node<t>* a=head;
while(a)
{
    cout<<a->data<<" ";
    a=a->next;
}

}


};

int main()
{deque_list<int> dl;
dl.push_front(2);
dl.push_back(5);
dl.push_back(1);
dl.push_front(9);
dl.push_front(7);
dl.popfront();
dl.traverse();
cout<<"\n";

    return 0;
}
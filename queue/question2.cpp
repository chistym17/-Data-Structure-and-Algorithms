#include<bits/stdc++.h>

using namespace std;
template<class t>
class node{
public:
t data;
node* next;
node()
{
   next=NULL;
}
};

template<class t>
class stack_list
{  public:
    node<t>* head;
    int sz;
    stack_list()
    {head=NULL;
    sz=0;
    }
node<t>* createnode(int val)
{
    node<t> *newnode=new node<t>;
    newnode->data=val;
    newnode->next=NULL;
    return newnode;
}

void push(t value)
{
    node<t>* newnode=createnode(value);
    if(head==NULL)
    {
        head=newnode;
        sz++;
        return;
    }
    newnode->next=head;
    head=newnode;
    sz++;
}

void pop()
{
    if(sz==0)
    {
        cout<<"stack is empty";
        return;
    }
    node<t>* a=head;
    head=head->next;
    delete a;
    sz--;
}
t front()
{
     if(sz==0)
    {   t a;
        cout<<"stack is empty";
        return a;
    }

    return head->data;
}



};


int main()
{
stack_list<int>s;
s.push(1);
cout<<s.front()<<"\n";
s.pop();
s.push(2);
cout<<s.front()<<"\n";


    return 0;
}
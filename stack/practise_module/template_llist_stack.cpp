#include<bits/stdc++.h>
//using singly link list;
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
class singly_list
{public:
node<t>* head;
int size;
singly_list()
{
    head=NULL;
    size=0;
}
node<t>* create_node(t value)
{ 
    node<t> *newnode=new node<t>;
    newnode->data=value;
    newnode->next=NULL;
    return newnode;

}
void insert_at_head(t value)
{   
    node<t>* newnode=create_node(value);
    size++;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
    return;
    
}
void delete_at_head()
{
    if(head==NULL)
    {
        cout<<"error";
        return;
    }
    node<t> *a=head;
    head=head->next;
    delete a;
    size--;
    return;
}

void traverse()
{
    node<t>* a=head;
    while(a)
    {
        cout<<a->next<<" ";
        a=a->next;
    }
}
int get_size()
{
    return size;
}

};

template<class t>
class stack_list
{public:
singly_list<t> l;

void push(t value)
{
    l.insert_at_head(value);
    return;
}

t top()
{   t a;
    if(l.get_size()==0)return a;
    return l.head->data;
}

void pop()
{   if(l.get_size()==0)
{
    cout<<"stack is empty";
    return;
}
    l.delete_at_head();
    return;
}


};

int main()
{
    stack_list<int>sl;
    sl.push(1);
    cout<<sl.top()<<"\n";
    sl.push(2);
    cout<<sl.top()<<"\n";
    sl.pop();
  cout<<sl.top()<<"\n";


    return 0;
}
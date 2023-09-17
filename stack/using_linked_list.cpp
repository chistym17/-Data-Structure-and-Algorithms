#include<bits/stdc++.h>

using namespace std;
class node{
    public:
    node* previous;
    int data;
    node* next;

};
class linked_list{
public:
node *head;
int size;
linked_list()
{
    head=NULL;
    size=0;
}
node *create_node(int value)
{
node *newnode=new node;
newnode->data=value;
newnode->previous=NULL;
newnode->next=NULL;
return newnode;

}

void insert_at_head(int value)
{ 
node* newnode=create_node(value);
size++;
if(head==NULL)head=newnode;
else{
   node *a=head;
  a->previous=newnode;
  newnode->next=a;
  head=newnode;

}

}
void delete_at_head()
{
    if(head==NULL)return;
    node *next=head->next;
    node *temp=head;
    delete temp;
    size--;
    if(next!=NULL)
    {
        next->previous=NULL;
    }
    head=next;
}

void traverse()
{
    node *a=head;
    while(a!=NULL)
    {   cout<<a->data<<" ";
        a=a->next;

    }
}

int get_size()
{
    return size;
}


};
class stack_list{
public:

linked_list l;
stack_list()
{

}

void push(int value)
{
    l.insert_at_head(value);
}
void pop()
{   if(l.get_size()==0)return;
    l.delete_at_head();
}
int top()
{
    if(l.get_size()==0)return -1;
    return l.head->data;
}

};


int main()
{

   stack_list s;
   s.push(1);
      cout<<s.top();
      cout<<"\n";

   s.push(2);
   cout<<s.top();
         cout<<"\n";

   s.pop();
    cout<<s.top();


    return 0;
}
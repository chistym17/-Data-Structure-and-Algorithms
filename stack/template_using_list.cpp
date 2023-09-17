#include<bits/stdc++.h>

using namespace std;
template<class t>
class node{
    public:
    node* previous;
    t data;
    node* next;

};
template<class t>
class linked_list{
public:
node<t> *head;
int size;
linked_list()
{
    head=NULL;
    size=0;
}
node<t> *create_node(t value)
{
node<t> *newnode=new node<t>;
newnode->data=value;
newnode->previous=NULL;
newnode->next=NULL;
return newnode;

}

void insert_at_head(t value)
{ 
node<t>* newnode=create_node(value);
size++;
if(head==NULL)head=newnode;
else{
   node<t> *a=head;
  a->previous=newnode;
  newnode->next=a;
  head=newnode;

}

}
void delete_at_head()
{
    if(head==NULL)return;
    node<t> *next=head->next;
    node<t> *temp=head;
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
    node<t> *a=head;
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
template<class t>
class stack_list{
public:

linked_list<t> l;
stack_list()
{

}

void push(t value)
{
    l.insert_at_head(value);
}
void pop()
{   if(l.get_size()==0)return;
    l.delete_at_head();
}
t top()
{   t aa;
    if(l.get_size()==0)return aa;
    return l.head->data;
}

};


int main()
{

   stack_list<int> s;
   s.push(1);
      cout<<s.top();
      cout<<"\n";

   s.push(2);
   cout<<s.top();
         cout<<"\n";

   s.pop();
    cout<<s.top();
         cout<<"\n";
       stack_list<char> v;
        v.push('a');
      cout<<v.top();
      cout<<"\n";

   v.push('c');
   cout<<v.top();
         cout<<"\n";



    return 0;
}
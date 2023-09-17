#include<bits/stdc++.h>

using namespace std;

class node{
public:

    int data;
    node* next;
};

class linked_list{
 public:
node* head;
int size;
linked_list()
{
    head=NULL;
    size=0;
}

void insert_at_head(int value)
{
size++;
node *n=create_node(value);
if(head==NULL) head=n;// head ke notun node e point kore dibo
else{
n->next=head;
head=n;

}

}

void traverse()
{

node* a;

a=head;

while(a!=NULL)
{
    cout<<a->data<<" ";
    a=a->next;
}

}

//create new node to insert at head

node *create_node(int value)// pointer type karon memory address laaagbe
{
node *newnode=new node; // notun node r jonno jaiga allocate
newnode->data=value;
newnode->next=NULL;
return newnode;

}
int getsize()
{
    return size;
}



};



int main()
{
linked_list l;
int sz=l.getsize();
cout<<sz;
l.insert_at_head(10);
l.insert_at_head(20);
sz=l.getsize();
cout<<sz;


l.insert_at_head(30);

}
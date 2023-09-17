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

void insert_any_pos(int id,int value)
{

    if(id==0)
    {
        insert_at_head(value);
        return;
    }
    if(id<0 || id>size)return;
    size++;
    int curid=0;
    node *a=head;
    while(curid!=id-1)
    {
        a=a->next;
        curid++;
    }
    node *newnode=create_node(value);
    newnode->next=a->next;
    a->next=newnode;

}
void delete_any_pos(int id)
{

    if(id==0)
    {
        delete_at_head();
        return;
    }
    if(id<0 || id>size)return;
    size--;
    int curid=0;
    node *a=head;
    while(curid!=id-1)
    {
        a=a->next;
        curid++;
    }
   node *b=a->next;
   a->next=b->next;
   delete b;

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
void delete_at_head()
{
    if(head==NULL)return;
    size--;
    node *a;
    a=head;
    head=a->next;
    delete(a);

}

node *create_node(int value)
{
node *newnode=new node; 
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
l.insert_at_head(10);
l.insert_at_head(20);
l.insert_at_head(30);
l.traverse();
l.insert_any_pos(2,25);
cout<<"\n";
l.traverse();
cout<<"\n";
l.delete_at_head();
cout<<"\n";
l.traverse();
l.delete_any_pos(2);
cout<<"\n";
l.traverse();
}
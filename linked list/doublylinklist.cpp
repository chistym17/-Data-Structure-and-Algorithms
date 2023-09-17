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
void insert_at_any_index(int id,int value)

{   if(id==0){
 insert_at_head(value);
return;
}
    node *a=head;
    int curid=0;
    while(curid!=id-1)
    {
        a=a->next;
        curid++;
    }
    node *newnode=create_node(value);
    size++;

    newnode->next=a->next;
    newnode->previous=a;
    node *b=a->next;
    b->previous=newnode;
    a->next=newnode;

}
void delete_at_index(int id)
{   if(id<0 || id>=size)return;
    node *a=head;
    int curid=0;
    while(curid!=id)
    {
        a=a->next;
        curid++;
    }
    node *c=a->next;
    node *b=a->previous;
    if(b!=NULL)
    b->next=c;
    if(c!=NULL)
    c->previous=b;
    if(id==0)head=c;
    delete a;
    size--;



}
void traverse()
{
    node *a=head;
    while(a!=NULL)
    {   cout<<a->data<<" ";
        a=a->next;

    }
}
void reverse_list()
{if(head==NULL)return;
node *a=head;
int curid=0;
while(curid!=size-1)
{
    a=a->next;
    curid++;
}
node *b=head;
while(b!=NULL)
{
    swap(b->next,b->previous);
    b=b->previous;
}
head=a;
}
};


int main()
{

    linked_list l;
    l.insert_at_head(10);
    l.insert_at_head(20);
    l.insert_at_any_index(1,15);
    l.insert_at_any_index(2,17);
    l.traverse();
     cout<<"\n";
    l.reverse_list(); 
    l.traverse();


    return 0;
}
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

void insert_any_pos(int id,int value)

{
    if(id<0 || id>size)return;
    if(id==0){
        insert_at_head(value);
        return;
    }
int current_id=0;
node *a=head;
while(current_id!=id-1)
{
    current_id++;
    a=a->next;
}

node *newnode=create_node(value);
newnode->next=a->next;
a->next=newnode;

size++;

}

void delete_at_any_pos(int id)
{
 if(id<0 || id>size)return;
if(id==0){
delete_at_head();
return;
}
    int current_id=0;
node *a=head;
while(current_id!=id-1)
{
    current_id++;
    a=a->next;
}
node *b=a->next;
a->next=b->next;
size--;
delete b;

}

void delete_at_head()
{
    if(head==NULL)return;
    node *a=head;
    head=a->next;
    size--;
    delete a;


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
l.insert_at_head(10);
l.insert_at_head(30);
l.traverse();
cout<<"\n";
l.insert_any_pos(1,20);
l.traverse();
l.delete_at_any_pos(1);
l.traverse();


}
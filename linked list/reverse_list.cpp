#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

};

class linked_list
{   public:
    node* head;
    int size;
    linked_list()
    {
        head=NULL;
        size=0;
    }

node *create_node(int value){
    node *newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
    
    
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
int getsize()
{
    return size;

}

void reverse_list(node *a)
{node *curnode=head;
 node *prev=NULL;
 while(curnode!=NULL)
 {
    node *temp_next=curnode->next;
    curnode->next=prev;
    prev=curnode;
    curnode=temp_next;

 }
 

}




};


int main()
{
    linked_list l;
   int i=5;
   while(i!=0)
   {l.insert_at_head(i);
   i--;
   }
   l.traverse();
   cout<<"\n";
   l.reverse_list(l.head);


    return 0;
}
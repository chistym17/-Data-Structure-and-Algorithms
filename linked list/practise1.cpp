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

void remove_first_element()
{   size--;
    node *a=head;
    head=a->next;
    delete a;
}
void remove_last_element()
{   
    node *a=head;
    node *prv=head;

    for(int i=0;i<size-2;i++)
    {   
        prv=prv->next;

    }

    while(a!=NULL)
    {
        a=a->next;
    }
    delete a;
    prv->next=NULL;

    size--;
}

void find_value(int value)
{
    node *a=head;
    int flag=0;
    int index=0;
    while (a!=NULL)
    {
        if(a->data==value)flag=1;
        a=a->next;
        index++;
    }
    if(flag==1)cout<<"value found at "<<index<<" "<<"th index";
    else
    cout<<"value not found";


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
    l.remove_first_element();
    l.traverse();
    l.remove_last_element();;
        cout<<"\n";

    l.traverse();


    return 0;
}
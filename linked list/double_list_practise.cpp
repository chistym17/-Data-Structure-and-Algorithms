#include<bits/stdc++.h>
using namespace std;
class node{
 public:
node* prv;
int data;
node* next;

};

class doublely_list{
public:
node* head;
int size;
doublely_list()
{
    head=NULL;
    size=0;
}

node *create_node(int value)
{
    node *newnode=new node;
    newnode->data=value;
    newnode->prv=NULL;
    newnode->next=NULL;
    return newnode;
}

int getsize()
{
    return size;
}

void insert_at_head(int value)
{
    node *newnode=create_node(value);
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        newnode->next=head;
        head->prv=newnode;
        head=newnode;
    }
    size++;
}

void traverse()
{
    node *a=head;
while(a)
{
    cout<<a->data<<" ";
    a=a->next;
}

}
void remove_last_element()
{
    node *previous=NULL;
    node *current=head;
    while(current->next!=NULL)
    {   
        previous=current; 
        current=current->next;

    }
    delete current;
    size--;
    previous->next=NULL;
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
    swap(b->next,b->prv);
    b=b->prv;
}
head=a;
}
void delete_specific_element(int val)
{
    node *a=head;
    node *prv=NULL;
    node *curr=head;
    if(a->data==val)
    {   head=a->next;
        delete a;
        size--;
        return;

    }
    while(a)
    {   
        if(curr->data==val)
        {node *b=curr->next;
        b->prv=prv;
        prv->next=b;
        delete curr;
        size--;
        return;
        }
        else{
            prv=curr;
            curr=curr->next;
        }


    }
}

void check_palindrom_or_not()
{

    cout<<"here";
node *low=head;
node *high=head;
node *a=head;
while(high!=NULL)
{       cout<<"here2";
    
    high=high->next;
}
cout<<a->data;
int flag=-1;
while(low!=high)
{        cout<<"here3";

    if(low->data!=high->data)
    {flag=1;
    return;
    }
    low=low->next;
    high=high->prv;
        cout<<"here4";

}
if(flag==-1)cout<<"Not palindrom";
else
cout<<"palindrom";

}

};



int main()
{
doublely_list l;
l.insert_at_head(1);
l.insert_at_head(2);
l.insert_at_head(3);
l.insert_at_head(2);
l.insert_at_head(1);

l.traverse();
cout<<"\n";

l.check_palindrom_or_not();

    return 0;
}
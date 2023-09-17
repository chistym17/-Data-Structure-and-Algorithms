#include<bits/stdc++.h>
//singly linked list.
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

node* get_middle(node* head)
{
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;

    }
    return slow;

}

node* reverse_list(node* head)
{node* prv=NULL;
node* curr=head;
while(curr!=NULL)
{   node *temp=curr->next;
    curr->next=prv;
    prv=curr;
    curr=temp;
}
return  prv;

}
bool check_palindrom(node* head1,node*head2)
{
    if(head1==NULL)return true;
    while(head2!=NULL)
    {
        if(head1->data!=head2->data)return false;
        head1=head1->next;
        head2=head2->next;

    }
    return true;
}



};



int main()
{
linked_list l;
l.insert_at_head(1);
l.insert_at_head(2);
l.insert_at_head(3);
l.insert_at_head(3);
l.insert_at_head(2);
l.insert_at_head(1);
l.traverse();
cout<<"\n";
node *mid=l.get_middle(l.head);
node* temp=mid->next;
node* last=l.reverse_list(temp);

bool ans=l.check_palindrom(l.head,last);
cout<<ans;

cout<<"\n";

}
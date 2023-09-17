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

int get_last_node(node* head)
{
    node *a=head;
    int cur=0;
    while(a)
    {
        if(cur==size-1)
        return a->data;
        else
        {a=a->next;
        cur++;
        }
    }

}
double get_avg(node* head)
{
    node *a=head;
    int sum=0;
    while(a)
    {
        sum+=a->data;
        a=a->next;

    }
    double ans=sum/size;
    return ans;
}



};



int main()
{
linked_list l;
l.insert_at_head(5);
l.insert_at_head(4);
l.insert_at_head(6);
l.insert_at_head(2);
l.insert_at_head(3);
l.traverse();
cout<<"\n";
cout<<"last node-"<<l.get_last_node(l.head);
cout<<"\n";

cout<<"average-"<<l.get_avg(l.head);

}
#include<bits/stdc++.h>
//deque using doubly linked list
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

};
class deque_list
{public:

node* head;
node* tail;
int sz;
int rev;
deque_list()
{
    head=NULL;
    tail=NULL;
    sz=0;
    rev=0;
}
private:
node* create_node(int value)
{
    node* newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
private:

void push_back(int value)
{   node* newnode=create_node(value);
    if(sz==0)
    {head=newnode;
    tail=newnode;
    sz++;
    return;

    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    sz++;
}
private:

void push_front(int value)
{
     node* newnode=create_node(value);
    if(sz==0)
    {head=newnode;
    tail=newnode;
    sz++;
    return;

}
newnode->next=head;
head->prev=newnode;
head=newnode;
sz++;
}
private:

void popfront()
{
    if(sz==0)
    {
        cout<<"deque is empty";
        return;
    }
    if(sz==1)
    {
        node* a=head;
        delete a;
        head=NULL;
        tail=NULL;
        sz--;
        return;

    }
    node *a=head;
    head=head->next;
    head->prev=NULL;
    delete a;
    sz--;


}
private:

void popback()
{  if(sz==0)
    {
        cout<<"deque is empty";
        return;
    }
    if(sz==1)
    {
        node* a=head;
        delete a;
        head=NULL;
        tail=NULL;
        sz--;
        return;

    }
    node* a= tail;
    tail=tail->prev;
    tail->next=NULL;
    delete a;
    sz--;

}
int getsize()
{
    return sz;
}private:

int front()
{
    return head->data;
}private:

int back()
{
    return tail->data;
}


public:

void reverse_list()
{
    if(rev==0)rev=1;
    else rev=0;
}

void push_at_front(int value)
{
    if(rev==1)
    {
        push_back(value);
        return;
    }
    else{
        push_front(value);
    }
}

void push_at_back(int value)
{
    if(rev==1)
    {
        push_front(value);
        return;
    }
    else{
        push_back(value);
    }
}

void pop_at_head()
{ if(rev==1)
    {
        popback();
        return;
    }
    else{
        popfront();
    }

}

void pop_at_back()
{ if(rev==1)
    {   popfront();
        return;
    }
    else{
        popback();
    }

}
int show_first()
{if(rev==1)
    {   
        return back();
    }
    else{
        return front();
    }

}
int show_last()
{if(rev==1)
    {   
        return front();
    }
    else{
        return back();
    }

}
void traverse()
{
node* a=head;
while(a)
{
    cout<<a->data<<" ";
    a=a->next;
}

}

};

int main()
{deque_list dl;
dl.push_at_front(2);
dl.push_at_front(3);
dl.push_at_front(4);
dl.push_at_back(1);
dl.push_at_back(0);
dl.push_at_back(0);


dl.traverse();
cout<<"\n";


    return 0;
}
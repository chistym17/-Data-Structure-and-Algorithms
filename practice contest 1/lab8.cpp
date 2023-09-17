#include<bits/stdc++.h>

using namespace std;



class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    int getSize()
    {
        return sz;
    }

void delete_nodes(node* head, int value)
{ 
node *curr=head;
while(curr)
{  
    
    
}

}
};
    


int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(0);
    dl.InsertAtHead(0);
    dl.InsertAtHead(0);
    dl.InsertAtHead(0);
    dl.InsertAtHead(0);
    dl.Traverse();
    cout<<dl.getSize();
    dl.delete_nodes(dl.head,0);
     cout<<dl.getSize();

    
    dl.Traverse();

    

    return 0;
}
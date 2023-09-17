#include<bits/stdc++.h>

using namespace std;
class node{
public:
    int value;
    node* Left;
    node* Right;
};


class BST{
public:
    node *root;
    BST()
    {
        root=NULL;
    }
    void Insert(int value)
    {
        node *newnode=createnode(value);
        if(root==NULL)
        {
            root=newnode;
            return;
        }
        node *prv=NULL;
        node *cur=root;
        while(cur)
        {
            if(newnode->value<cur->value)
            {
                prv=cur;
                cur=cur->Left;
            }
            else{
                prv=cur;
                cur=cur->Right;
            }
        }
        if(prv->value>newnode->value)
        {
            prv->Left=newnode;
        }
        else
        prv->Right=newnode;

    }
    bool Search(int value)
    {   if(root==NULL)return false;
        node* cur=root;
        while(cur)
        {
            if(value<cur->value)
            {
                cur=cur->Left;
            }
            else if(value>cur->value)
            {
                cur=cur->Right;
            }
            else
            return true;
            
        }
        return false;
        





    }
    node* createnode(int value)
    {
        node *newnode=new node;
        newnode->value=value;
        newnode->Left=NULL;
        newnode->Right=NULL;
        return newnode;
    }
};
int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //
return 0;
}
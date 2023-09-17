#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int id;
    node* left;
    node* right;
    node* parent;
    node()
    {
        id=0;
        left=NULL;
        right=NULL;
        parent=NULL;
    }
};

class binary_tree{
    public:
    node* root;
    binary_tree()
    {
        root=NULL;
    }
    node* create_node(int id)
    {
        node* newnode=new node;
        newnode->id=id;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->parent=NULL;
        return newnode;
    }
    void build_tree()
    {
       node* nodes[7];
       for(int i=0;i<7;i++)
       {
        nodes[i]=create_node(i);
       }
       root=nodes[0];
       nodes[0]->left=nodes[1];
       nodes[0]->right=nodes[2];
       nodes[1]->parent=nodes[0];
       nodes[2]->parent=nodes[0];

        nodes[1]->left=nodes[3];
       nodes[1]->right=nodes[4];
       nodes[3]->parent=nodes[1];
       nodes[4]->parent=nodes[1];

        nodes[2]->left=nodes[5];
       nodes[2]->right=nodes[6];
       nodes[5]->parent=nodes[2];
       nodes[6]->parent=nodes[2];
       


    }
   void bfs()
   { if(root==NULL)return;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* a=q.front();
        q.pop();
        if(a->left==NULL && a->right==NULL)break;

        int p=-1,l=-1,r=-1;
        if(a->left!=NULL)
        {
            l=a->left->id;
            q.push(a->left);
        }

         if(a->right!=NULL)
        {
            r=a->right->id;
            q.push(a->right);
        }

        if(a->parent!=NULL)
        {
            p=a->parent->id;
        }
        cout<<"node-"<<a->id<<" "<<"left child-"<<l<<" "<<"right child-"<<r<<"\n";
        cout<<"\n";


    }
   }
   void insertion(int id)
   {
    node* newnode=create_node(id);
    if(root==NULL)
    {
        root=newnode;
        return;
    }
     queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* a=q.front();
        q.pop();
        int p=-1,l=-1,r=-1;
        if(a->left!=NULL)
        {
            l=a->left->id;
            q.push(a->left);
        }
        else{
            a->left=newnode;
            newnode->parent=a;
            return;
        }

         if(a->right!=NULL)
        {
            r=a->right->id;
            q.push(a->right);
        }
         else{
            a->right=newnode;
            newnode->parent=a;
            return;
        }


    
    }






   }


   void dfs(node* a)
  {
    if(a==NULL)return;
    dfs(a->left);
    cout<<a->id<<" ";

    dfs(a->right);
  }

};


int main()
{
binary_tree b;
b.insertion(20);
b.insertion(10);
b.insertion(5);
b.insertion(22);
b.insertion(12);
b.insertion(3);
b.insertion(15);
b.insertion(21);
b.insertion(25);
b.dfs(b.root);


    return 0;
}
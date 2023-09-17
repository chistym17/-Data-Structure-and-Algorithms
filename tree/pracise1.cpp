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

    void bfs()
    {
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {     
            node *a=q.front();

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
            cout<<"NODE->"<<a->id<<" "<< "LEFT->"<<l<<" "<<"right->"<<r<<"\n";
            cout<<"\n";
        }
        
    }

    void insertion(int val)
    {
        node* newnode=create_node( val);
        if(root==NULL)
        {
            root=newnode;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node *a=q.front();
            q.pop();
            if(a->left!=NULL)
            {q.push(a->left);
            }
            else{
                a->left=newnode;
                 newnode->parent=a;
                return;
            }

             if(a->right!=NULL)
            {q.push(a->right);
            }
            else{
                a->right=newnode;
                newnode->parent=a;
                return;
            }

        }
    }


};















int main()
{binary_tree b;
for(int i=0;i<8;i++)
{
    b.insertion(i);
}
b.bfs();


    return 0;
}
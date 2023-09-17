#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int id;
    node* left;
    node* right;
    node()
    {
        id=0;
        left=NULL;
        right=NULL;
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

            int l=-1,r=-1;
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

            
            cout<<"NODE->"<<a->id<<" "<< "LEFT->"<<l<<" "<<"right->"<<r<<"\n";
            cout<<"\n";
        }
        return;
        
    }

    void insertion(int val)
    {
        node *newnode=create_node(val);
        node* prv=NULL;
        node* cur=root;
        if(root==NULL)
        {
            root=newnode;
            return;
        }
        while(cur)
        {
            if(newnode->id>cur->id)
            {
                prv=cur;
                cur=cur->right;
    
            }
            else{
                prv=cur;
                cur=cur->left;
            }
            
        }

        if(newnode->id>prv->id)
        {
            prv->right=newnode;
        }
        else{
            prv->left=newnode;
        }
    }
    bool search(int val)
    {
        node* cur=root;
        while(cur)
        {
            if(val>cur->id)cur=cur->right;
            else if(val<cur->id)cur=cur->left;
            else
            return true;
        }
        return false;


    }

    void deletion(int val)
    {
        node* prv=NULL;
        node* cur=root;
        while(cur)
        {
            if(val>cur->id)
            {
                prv=cur;
                cur=cur->right;
            }
             else if(val<cur->id)
            {
                prv=cur;
                cur=cur->left;
            }
            else
            break;

            }        

           if(cur==NULL)return;

           //case 1
           if(cur->left==NULL && cur->right==NULL)
           {
            if(prv->left==cur)
            {
                prv->left=NULL;
            }
            else
            prv->right=NULL;

            delete cur;
            return;

           }
           //case 2
           if(cur->left==NULL && cur->right!=NULL)
           {
            if(prv->right==cur)
            {
                prv->right=cur->right;
                delete cur;
                return;

            }
            else{
                prv->left=cur->right;
                delete cur;
                return;
            }
            

           }
             if(cur->left!=NULL && cur->right==NULL)
           {
            if(prv->right==cur)
            {
                prv->right=cur->left;
                delete cur;
                return;

            }
            else{
                prv->left=cur->left;
                delete cur;
                return;
            }
            

           }
           //case 3 node has two childs
           if(cur->left!=NULL && cur->right!=NULL)
           {
            node *tmp=cur->right;
            while(tmp->left!=NULL)
            {
                tmp=tmp->left;//find inorder succesor
            }
            int saved=tmp->id;
            deletion(saved);
            cur->id=saved;
           }

    }

};
int main(){

binary_tree b;
b.insertion(5);
b.insertion(3);
b.insertion(8);
b.insertion(9);
b.insertion(4);
b.insertion(2);

b.bfs();
cout<<"\n";
b.deletion(3);
b.bfs();

    return 0;
}
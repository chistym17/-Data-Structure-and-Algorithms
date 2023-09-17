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
    void build_tree(int id)
    {
       node* nodes[7];
       for(int i=0;i<7;i++)
       {
        nodes[i]=create_node(i);
       }
       root=nodes[0]->parent;
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
    void print_tree()
    {   
        for(int i=0;i<7;i++)
        {
            int id=-1;
            int left=-1;
            int right=-1;
            

            
        }
    }

};


int main()
{



    return 0;
}
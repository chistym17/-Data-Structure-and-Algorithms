#include<bits/stdc++.h>

using namespace std;

class node{
 public:
int data;
node* next;

};

class link_list{
 public:

node* head;//type node
link_list()
{
    head=NULL; 0;
    int count=0;

    while(a!=NULL)
    {
        a=a->next;
        count++;
    } 
    return count;
}

int get_value(int k)
{
    int n=get_size();
    if(k>=n)return -1;

    node *a;
    a=head;
    int i=0;
    int ans=0;

    while(a!=NULL)
    {
        if(i==k){
        ans=a->data;
        break;

        }
        a=a->next;
         i++;
    } 

    return ans;

}

void reverse_list(node* head)
{ 
if(head==NULL)return;
reverse_list(head->next);
cout<<head->data<<" ";

}

void swap_first_two(node* head)
{
/*int size=get_size();
if(size<2)return;*/

int val=head->data;
head->data=head->next->data;
head->next->data=val;

}

};





int main()
{
link_list l;

    cout<<l.get_size()<<"\n";
    l.insert_values_head(5);
    cout<<l.get_size()<<"\n";
    l.insert_values_head(6);
    l.insert_values_head(30);
    cout<<l.get_size()<<"\n";
    l.insert_values_head(20);
    l.insert_values_head(30);

    cout<<l.get_value(2)<<"\n";
    cout<<l.get_value(6)<<"\n";


    l.reverse_list(l.head);
        cout<<"\n";

    l.traverse();
        cout<<"\n";

    l.swap_first_two(l.head);
        cout<<"\n";

    l.traverse();
        cout<<"\n";

    l.reverse_list(l.head);





}
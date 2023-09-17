#include<bits/stdc++.h>
using namespace std;

class stack_array{
    public:

    int maxs=100;
    int arr[100];
    int sz;
    stack_array()
    {
        sz=0;
    }
void push(int value)
{   if(sz+1>maxs){
    cout<<"error";
    return;
}
    sz++;
    arr[sz-1]=value;
}

void pop()
{
    if(sz==0)
    {cout<<"stack is empty";
    return;
    }
    arr[sz-1]=0;
    sz--;

}
int top()
{   if(sz==0)
    {cout<<"stack is empty";
    return 0;
    }
    return arr[sz-1];


}
 




};

int main()
{
    stack_array sl;
    sl.push(1);
     cout<<sl.top()<<"\n";
    sl.push(1);
    cout<<sl.top()<<"\n";

    sl.push(3);
    cout<<sl.top()<<"\n";
    sl.push(4);
    cout<<sl.top()<<"\n";
    sl.pop();
    cout<<sl.top()<<"\n";







    return 0;
}
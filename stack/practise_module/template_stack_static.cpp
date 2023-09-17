
#include<bits/stdc++.h>
using namespace std;
template <class t>
class static_array_stack
{
public:
t arr[10];
int size;
static_array_stack()
{
    size=0;
}

void push(t value)
{   
    size++;
    if(size>10){
    cout<<"stack is full";
    return;
    }
    arr[size-1]=value;
}

t top()
{
    if(size==0)
    {
        cout<<"stack is empty";
        t a;
        return a;
    }
    return arr[size-1];
}
void pop()
{ if(size==0)
    {
        cout<<"stack is empty";
    
        return ;
    }
    size--;

}

};
int main()
{
static_array_stack<int> s;
s.push(1);
cout<<s.top();
cout<<"\n";
s.push(2);
cout<<s.top();
cout<<"\n";
s.push(3);
cout<<s.top();



    return 0;
}
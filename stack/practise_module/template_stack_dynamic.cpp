#include<bits/stdc++.h>

using namespace std;
template<class t>
class stack_
{public:
    t *arr;
    int size;
    int cap;
    dynamic_stack()
    {   arr=new t[1];
        size=0;
        cap=1;
        
    
    }
void increase_array()
{
    if(size>=cap)
    {
        t *temp=new t[cap*2];
        for(int i=0;i<size;i++)
        {temp[i]=arr[i];}
        swap(arr,temp);
        delete[]temp;
        cap=cap*2;

    }
}


void push(t value)
{   if(size>=cap)increase_array();
    size++;
    arr[size-1]=value;
    return;
}

t top()
{
    return arr[size-1];
}

void pop()
{   if(size==0)return;
    size--;

}


};
int main()
{

stack_<int>st1;
stack_<char>st2;
stack<double>st3;



    return 0;
}
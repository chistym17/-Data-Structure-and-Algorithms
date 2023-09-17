#include<bits/stdc++.h>
using namespace std;
class stck{
public:
    int maxs=100;
    int *a;
    int sz;
    int cap;
    stck()
    {   a=new int[1];
        sz=0;
        cap=1;

    }
    void push(int value)
    {  if(sz>=cap)
    {
        increase_array();
    }
        sz++;
        a[sz-1]=value;

    }
    void increase_array()
    {
        int *temp=new int[cap*2];
        for(int i=0;i<sz;i++)
        {
            temp[i]=a[i];
        }
        swap(temp,a);
        delete temp;
        cap=cap*2;
    }
 int top()
 {
    if(sz==0)return -1;
    return a[sz-1];

 }
 void pop()
 {
    a[sz-1]=0;
    sz--;
 }
};

using namespace std;
int main()
{
stck s;
s.push(1);
cout<< s.top();
cout<<"\n";
s.push(2);
cout<< s.top();




    return 0;
}
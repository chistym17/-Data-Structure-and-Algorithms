#include<bits/stdc++.h>
using namespace std;
template <class t>
class stck{
public:
    t *a;
    int sz;
    int cap;
    stck()
    {   a=new t[1];
        sz=0;
        cap=1;

    }
    void push(t value)
    {  if(sz>=cap)
    {
        increase_array();
    }
        sz++;
        a[sz-1]=value;

    }
    void increase_array()
    {
        t *temp=new t[cap*2];
        for(int i=0;i<sz;i++)
        {
            temp[i]=a[i];
        }
        swap(temp,a);
        delete []temp;
        cap=cap*2;
    }
 t top()
 {   t av;
    if(sz==0)return av;
    return a[sz-1];

 }
 void pop()
 {
    a[sz-1]=0;
    sz--;
 }
};

int main()
{
stck<int> s;
s.push(1);
cout<< s.top();
cout<<"\n";
s.push(2);
cout<< s.top();
cout<<"\n";
s.push(3);
cout<< s.top();
cout<<"\n";
stack<char>ch;
ch.push('a');
cout<< ch.top();
cout<<"\n";
ch.push('c');
cout<< ch.top();
cout<<"\n";
ch.push('v');
cout<< ch.top();
cout<<"\n";





    return 0;
}
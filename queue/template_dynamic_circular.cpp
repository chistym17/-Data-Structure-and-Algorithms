#include<bits/stdc++.h>

using namespace std;
template<class t>
class dynamic_queue{
 public:
t *arr;
int l;
int r;
int sz;
int cap;
dynamic_queue()
{
    arr=new t[1];
    l=0;
    r=-1;
    sz=0;
    cap=1;

}
void remove_circular()
{
    t *temp=new t[cap];
    int j=0;
     for(int i=l;i<cap;i++)
    {
        temp[j]=arr[i];
        j++;
    }
    for(int i=0;i<r;i++)
    {
        temp[j]=arr[i];
        j++;
    }
    swap(temp,arr);
    delete []temp;

}
void increase_array()
{
    t *temp=new t[cap*2];
    for(int i=0;i<cap;i++)
    {
        temp[i]=arr[i];
    }
    swap(temp,arr);
    delete[]temp;
    cap=cap*2;

}
void enqueue(int value)
{if(sz==cap)
{if(l>r)remove_circular();
increase_array();
};

r++;
if(r==cap)r=0;
arr[r]=value;
sz++;

}
void dequeue()
{
    if(sz==0)return;
    l++;
    if(l==cap)l=0;
    sz--;
}

t front()
{   t a;
    if(sz==0)return a;
    return arr[l];
}


};
int main()
{
    dynamic_queue<int>a;
     a.enqueue(1);
    cout<<a.front()<<"\n";
    a.dequeue();
    a.enqueue(4);
     cout<<a.front()<<"\n";
    a.dequeue();
     a.enqueue(5);

  cout<<a.front()<<"\n";

    dynamic_queue<char>c;
    c.enqueue('x');
    cout<<c.front();
    return 0;
}
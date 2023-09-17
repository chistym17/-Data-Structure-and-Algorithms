#include<bits/stdc++.h>

using namespace std;
class queue_{
public:
int *arr;
int sz;
int l;
int r;
int cap;
queue_()
{   arr=new int[1];
    l=0;
    r=-1;
    sz=0;
    cap=1;
}

void remove_circular()
{      

    if(l>r)
    {   int *tmp=new int[cap];
        int j=0;
        for(int i=l;i<cap;i++)
        {
            tmp[j]=arr[i];
            j++;
        }
        for(int i=0;i<r;i++){
        tmp[j]=arr[i];
        j++;
        };
     swap(tmp,arr);
    delete []tmp;

    }
}

void increase_size()
{

remove_circular();
int *tmp=new int[cap*2];
for(int i=0;i<cap;i++)
{
    tmp[i]=arr[i];
}
swap(tmp,arr);
delete[]tmp;
cap=cap*2;
}

void enqueue(int val)
{   sz++;
    if(sz==cap){
    increase_size();
    }
    r++;
    if(r==cap)r=0;
    arr[r]=val;

}
void dequeue()
{   sz--;
    if(sz==0)return;
    if(l==cap)l=0;
    l++;
}
int front()
{
        if(l>r)return -1;
        return arr[l];

}
int get_size()
{
    return sz;
}

};
int main()
{
    queue_ a;
    a.enqueue(1);
    cout<<a.front()<<"\n";
    a.enqueue(2);
    a.dequeue();
     cout<<a.front()<<"\n";
    a.enqueue(4);
    a.dequeue();
  cout<<a.front()<<"\n";




    return 0;
}
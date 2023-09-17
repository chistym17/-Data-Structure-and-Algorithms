#include<bits/stdc++.h>

using namespace std;
const int maxi=20;
class queue_{
public:
int arr[maxi];
int sz;
int l;
int r;
queue_()
{
    l=0;
    r=-1;
    sz=0;
}
void enqueue(int val)
{   sz++;
    if(sz==maxi){
        cout<<"queue is full";
        return;
    }
    r++;
    if(r==maxi)r=0;
    arr[r]=val;

}
void dequeue()
{   sz--;
    if(sz==0)return;
    if(l==maxi)l=0;
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
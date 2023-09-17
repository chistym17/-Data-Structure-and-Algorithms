#include<bits/stdc++.h>

using namespace std;
const int maxi=20;
class queue_{
public:
int arr[maxi];
int size;
int l;
int r;
queue_()
{
    l=0;
    r=-1;
}
void enqueue(int val)
{
    if(r+1>maxi){
        cout<<"queue is full";
        return;
    }
    r++;
    arr[r]=val;

}
void dequeue()
{
    if(l>r)return;
    l++;
}
int front()
{
        if(l>r)return -1;
        return arr[l];

}
int get_size()
{
    return r-l+1;
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
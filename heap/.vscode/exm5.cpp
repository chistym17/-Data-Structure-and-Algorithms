#include<bits/stdc++.h>

using namespace std;
const int maxi=100;
class queue_array
{public:
int arr[maxi];
int l;
int r;
int sz;
queue_array()
{
    l=0;
    r=-1;
    sz=0;
}
void enqueue(int value)
{
    if(sz==maxi)
    {
        cout<<"queue is full";
        return;
    }
    r++;

    if(r==maxi)r=0;

    arr[r]=value;
    sz++;

}
void dequeue()
{if(sz==0)return;
l++;
if(l==maxi)l=0;
sz--;

}
int front()
{
    if(sz==0)return -10;
    return arr[l];
}



};
int main()
{
queue_array q;
q.enqueue(1);
cout<<q.front();
q.dequeue();
cout<<"\n";

q.enqueue(2);
cout<<q.front();
q.dequeue();
cout<<"\n";

q.enqueue(4);
cout<<q.front();
q.dequeue();
cout<<"\n";

q.enqueue(5);
cout<<q.front();
q.dequeue();
cout<<"\n";

q.enqueue(7);
cout<<q.front();


    return 0;
}
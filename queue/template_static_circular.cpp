#include<bits/stdc++.h>

using namespace std;
const int maxi=10;
template<class t>
class static_queue
{public:
    t arr[maxi];
int l;
int r;
int sz;
static_queue()
{
    l=0;
    r=-1;
    sz=0;
}
void enqueue(t value)
{
if(sz==maxi)return;
r++;
if(r==maxi)r=0;
arr[r]=value;
sz++;

}
void dequeue()
{
    if(sz==0)return;
    if(l==maxi)l=0;
    l++;
    sz--;
}
t front()
{
    t a;
    if(sz==0)return a;
    return arr[l];
}


};
int main()
{
static_queue<int> q;
q.enqueue(2);
cout<<q.front()<<"\n";
q.dequeue();

q.enqueue(4);
cout<<q.front()<<"\n";
q.dequeue();

q.enqueue(5);
cout<<q.front()<<"\n";
q.dequeue();


    return 0;
}
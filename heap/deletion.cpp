#include<bits/stdc++.h>

using namespace std;


class MaxHeap{
public:
vector<int>a;
heap()
{

}
void up_heapify(int id)
{
    while(id>0 && a[id]>a[(id-1)/2])
    {
        swap(a[id],a[(id-1)/2]);
        id=(id-1)/2;
    }

}
void insert(int val)
{
    a.push_back(val);
    up_heapify(a.size()-1);

}
void traverse()
{
    for(auto v:a)
    {
        cout<<v<<" ";
    }
}
void down_heapify(int id)
{ 
  
    while(1){
    int largest=id;
    int l=2*id+1;
    int r=2*id+2;

    if(l<a.size() && a[l]>a[largest])
    largest=l;
    if(r<a.size() && a[r]>a[largest])
    largest=r;
    if(largest==id)break;
    swap(a[id],a[largest]);
    id=largest;

    }

}
void deletion(int id)
{   if(id>a.size())return;

    swap(a[id],a[a.size()-1]);
    a.pop_back();
    down_heapify(id);

}
int get_max()
{
    return a[0];
}
};

class MinHeap{
public:
    MaxHeap mx;
    void insert(int x)
    {
	mx.insert(-x);

    }
    void Delete(int idx)
    {
        mx.deletion(idx);

    }
    int getMin()
    {
        int min=-mx.get_max();
        return min;
    }
    void traverse()
{
    for(auto val:mx.a)
    {
        cout<<-val<<" ";
    }
}
};



int main()
{
    MinHeap h;
    h.insert(10);
        h.insert(7);
    h.insert(8);
    h.insert(6);
    h.insert(3);
    h.insert(1);
    h.insert(2);
    h.traverse();
    cout<<"\n";




    return 0;
}
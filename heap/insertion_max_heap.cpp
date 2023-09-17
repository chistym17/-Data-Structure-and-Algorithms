#include<bits/stdc++.h>
using namespace std;

class MinHeap{
public:
    MAXHEAP mx;
    void insert(int x)
    {
	
    }
    void Delete(int idx)
    {

    }
    int getMin()
    {

    }
};


class MAXHEAP{
    public:
vector<int>a;
node()
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
    for(auto val:a)
    {
        cout<<val<<" ";
    }
}

};
int main()
{
MAXHEAP a;
a.insert(5);
a.insert(4);
a.insert(8);
a.insert(6);
a.traverse();



    return 0;
}
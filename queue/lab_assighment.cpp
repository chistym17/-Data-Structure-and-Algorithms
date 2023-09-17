#include<bits/stdc++.h>
//1
using namespace std;
template<class t>
class queue_{
public:
t *array;
int sz;
int cap;
int left;
int right;
queue_()
{
    array=new t[1];
    sz=0;
    cap=1;
    left=0;
    right=-1;
}

void increase_array()
{
    t *temp=new t[cap*2];
    for(int i=0;i<cap;i++)
    {
        array[i]=temp[i];
    }
    swap(array,temp);
    delete[]temp;
    cap=cap*2;

}
void enqueue(t value)
{
    if(sz==cap)
    {
        increase_array();
    }
    right++;
    array[right]=value;
    sz++;

}
void dequeue()
{
    if(sz==0)
    {
        cout<<"queue is empty";
        return ;
    }
    left++;
    sz--;
}

t front()
{
    if(sz==0)
    { cout<<"queue is empty";
        t a;
        return a;

    }
    return array[left];
}


};

int main()
{
queue_<int> q;
q.enqueue(1);
cout<<q.front()<<"\n";
q.dequeue();
q.enqueue(2);
cout<<q.front()<<"\n";
q.dequeue();
q.enqueue(4);
cout<<q.front()<<"\n";
q.dequeue();
q.enqueue(2);
cout<<q.front()<<"\n";




    return 0;
}
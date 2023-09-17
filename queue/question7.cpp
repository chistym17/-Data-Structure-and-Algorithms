#include<bits/stdc++.h>

using namespace std;
void remove_value(list<int>l,int val)
{ int id;
int curr=0;
for(auto it1:l)
{
    if(it1==val)
    {id=curr;
    break;
    }
    curr++;
}
auto it2=l.begin();
advance(it2,id);
l.erase(it2);
for(auto val:l)
{
    cout<<val<<" ";
}
return;

}
int main()
{ int n;
cin>>n;
list<int>l;
for(int i=0;i<n;i++)
{   int x;
    cin>>x;
    l.push_back(x);
}

int val;
cin>>val;
remove_value(l,val);


    return 0;
}
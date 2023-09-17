#include<bits/stdc++.h>

using namespace std;
int main()
{

set<int>a;
set<int>b;
int n,m;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    a.insert(x);
}

cin>>m;
for(int i=0;i<m;i++)
{
    int x;
    cin>>x;
    b.insert(x);
}

for(auto val:b)
{
    a.insert(val);
}

for(auto val:a)
{
    cout<<val<<" ";
}



    return 0;
}
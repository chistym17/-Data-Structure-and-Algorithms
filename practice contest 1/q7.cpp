#include<bits/stdc++.h>

using namespace std;

void remove_elements(vector<int>a,int p,int q)
{

a.erase(a.begin()+p,a.begin()+(q+1));

for(auto val:a)
{
    cout<<val<<" ";
}

}


int main()
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    v.push_back(a);
}
int p,q;
cin>>p;
cin>>q;

remove_elements(v,p,q);



    return 0;
}
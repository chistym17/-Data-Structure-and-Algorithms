#include<bits/stdc++.h>

using namespace std;
int main()
{
vector<int>v{0,1};
int n=v.size();
vector<int>a(n+1,-1);

int ans=0;
for(int i=0;i<n;i++)
{
    a[v[i]]++;
}

for(int i=0;i<n+1;i++)
{
if(a[i]==-1)
{
ans=i;
}

}
cout<<ans;
    return 0;
}
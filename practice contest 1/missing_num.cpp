#include<bits/stdc++.h>

using namespace std;
  int missingNumber(vector<int>v,int n) {
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
return ans;
    }

int main()
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n-1;i++)
{
    int a;
    cin>>a;
    v.push_back(a);
}
 
 int missing_number=missingNumber(v,n);
 cout<<missing_number<<" ";



    return 0;
}
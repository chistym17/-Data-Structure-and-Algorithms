#include<bits/stdc++.h>

using namespace std;
void find_max(vector<int> v,int k,int m)
{   if(k==v.size()){
      cout<<m;
      return;
}
    m=max(v[k],m);
    find_max(v,k+1,m);

}
int main()
{int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
int m=-10;
find_max(v,0,m);



    return 0;
}
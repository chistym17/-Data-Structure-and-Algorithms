#include<bits/stdc++.h>

using namespace std;
void check(string s,int n,map<int,string>mp)
{

for(int i=0;i<n;i++)
{   
    if(mp.find(s)==mp.end())
    {
        cout<<"-1";
    }
    else{
        cout<<mp[s]<<" ";
    }
   

}

return -1;




}
int main()
{
int n;
cin>>n;
map<int,string>mp;
for(int i=0;i<n;i++)
{
string s;
cin>>s;
mp[i]=s;

}

for(auto v:mp)
{
   cout<<check(v.second,v.first,mp);
   cout<<"\n";

}

    return 0;
}
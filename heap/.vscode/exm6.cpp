#include<bits/stdc++.h>

using namespace std;
int main()
{

deque<int> v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    v.push_back(a);
}
vector<int>ans;
while(1)
{
    if(v.empty())break;
    int x=v.front();
    v.pop_front();
    int y=v.back();
    v.pop_back();
    
    if(x<y)
    {
        ans.push_back(x);
        ans.push_back(y);
    }
    else{
        
        ans.push_back(y);
        ans.push_back(x);

    }
    
}
for(auto val:ans)
{
    cout<<val<<" ";
}
    return 0;
}
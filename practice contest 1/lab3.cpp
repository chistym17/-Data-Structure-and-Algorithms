#include<bits/stdc++.h>

using namespace std;
vector<int>sort(vector<int>v)
{   if(v.size()<=1)return v;
    int pivot=rand()%(v.size());
    vector<int>left,right;
    for(int i=0;i<v.size();i++)
    {
        if(i==pivot)continue;
           else if(v[i]>=v[pivot])
            {
                left.push_back(v[i]);
            }
            else
            right.push_back(v[i]);
        
    }
    vector<int>sorted_left,sorted_right,ans;
    sorted_left=sort(left);
    sorted_right=sort(right);
    for(int i=0;i<sorted_left.size();i++)
    {
        ans.push_back(sorted_left[i]);

    }
    ans.push_back(v[pivot]);
    for(int i=0;i<sorted_right.size();i++)
    {
        ans.push_back(sorted_right[i]);
    }
   return ans;
    
}

int main()
{int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
vector<int>ans=sort(v);

for(auto val:ans)
{
    cout<<val<<" ";
}



    return 0;
}
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>nums{1,1,2};


int n=nums.size();

int mx=*max_element(nums.begin(),nums.end());
int far[mx+1];
for(int i=1;i<=mx;i++)
{
    far[i]=0;
}
for(int i=0;i<n;i++)
{
    far[nums[i]]++;
}
for(int i=1;i<=mx;i++)
{
    cout<<far[i]<<" ";
}

nums.clear();
for(int i=1;i<=mx;i++)
{if(far[i]>0)

nums.push_back(i);

}
cout<<"[";
for(auto val:nums)
{
    cout<<val<<",";
    
    
}
cout<<"]";

    return 0;
}
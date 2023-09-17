#include<bits/stdc++.h>

using namespace std;
int main()
{
vector<int>nums{4,2,0,3,2,5};

int n=nums.size();
int left[n]={0};
left[0]=nums[0];
int right[n];
right[n-1]=nums[n-1];
for(int i=1;i<n;i++)
{
    left[i]=max(left[i-1],nums[i]);
}

right[n]={0};
right[n-1]=nums[n-1];

for(int i=n-2;i>=0;i--)
{
right[i]=max(right[i+1],nums[i]);


}

int k=0;
int ans=0;
for(int i=0;i<n;i++)
{
k=min(left[i],right[i]);
ans+=(k-nums[i]);
}
cout<<ans;


    return 0;
}
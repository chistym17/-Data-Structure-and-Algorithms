#include<bits/stdc++.h>

using namespace std;
int main()
{

vector<int>nums{3,2,1,5,6,4};
int n=nums.size();
int maxi=*max_element(nums.begin(),nums.end());
vector<int>f(maxi+1);

for(int i=0;i<n;i++)
{
    f[nums[i]]++;

}
int k=2;

int count=0;
int ans;
for(int i=maxi;i>=0;i--)
{
    count+=f[i];
    if(count==k)
    {
        ans=i;
        break;
    }
}

cout<<ans;
    return 0;
}
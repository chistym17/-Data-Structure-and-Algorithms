#include<bits/stdc++.h>

using namespace std;
int main()
{vector<int>nums={3,3};




int n=nums.size();
for(int i=0;i<n;i++)
{
    abs(nums[i]);
}
int maxi=*max_element(nums.begin(),nums.end());
int farray[maxi+1];
for(int i=0;i<=maxi;i++)
{
    farray[i]=0;

}
for(int i=0;i<n;i++)
{
    farray[nums[i]]++;
}


int flag=0;
for(int i=0;i<=maxi;i++)
{
if(farray[i]!=0 && farray[i]!=1) flag=1;
}
if(flag==1) return 1;
else return 0;

    return 0;
}
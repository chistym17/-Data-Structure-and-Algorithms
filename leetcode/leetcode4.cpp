#include<bits/stdc++.h>

using namespace std;
int main()
{
vector<int>nums1{1,2,3,0,0,0};
int m=3;
vector<int>nums2{2,5,6};
int n=3;
auto j=nums1.begin();
for(int i=0;i<n;i++)
{
    nums1.erase(j+(m+i));


    nums1.insert(nums1.begin()+(m+i),nums2[i]);
}

sort(nums1.begin(),nums1.end());

for(int val:nums1)
{
    cout<<val;
}


    return 0;
}
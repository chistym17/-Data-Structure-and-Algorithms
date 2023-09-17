#include<bits/stdc++.h>

using namespace std;
int main()
{
vector<int>nums1{1,2};
vector <int>nums2{3,4};
int n=nums1.size();
int m=nums2.size();
nums1.resize(m+n);
for(int i=n;i<(m+n);i++)
{
    nums1[i]=nums2[i-n];
}

for(auto val:nums1)
cout<<val<<" ";

double mid=0;
if(nums1.size()%2!=0){
double ans=(nums1[0]+nums1[nums1.size()-1]);
mid=ans/2;
cout<<mid;
}

else
{
int k=nums1.size();
double ans=nums1[k/2]+nums1[k/2+1];
mid=ans/2;
return mid;

}




    return 0;
}
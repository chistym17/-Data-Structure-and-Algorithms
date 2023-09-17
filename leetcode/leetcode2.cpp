#include<bits/stdc++.h>

using namespace std;
int main()
{

vector<int>nums{1,1,2,3};
int n=nums.size()-1;
int count=0;
for(int i=1;i<n;i++)
{
if(nums[i]==nums[i-1])count++;
else nums[i-1]=nums[i];


}


    return n-count;
}
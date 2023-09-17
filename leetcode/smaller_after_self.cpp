#include<bits/stdc++.h>

using namespace std;
int main()
{
vector<int>nums{-1,-1};
vector<int>ans;
int count=0;
for(int i=0;i<nums.size();i++)
{
    for(int j=i+1;j<nums.size();j++)
    {
        if(nums[j]<nums[i])
        count++;
    }
    ans.push_back(count);
    count=0;

}

if(ans.size()==0)return 0;


    return 0;
}
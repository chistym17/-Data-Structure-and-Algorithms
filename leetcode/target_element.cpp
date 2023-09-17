#include<bits/stdc++.h>

using namespace std;
int main()
{       vector<int>nums{5,7,7,8,8,10};
        int target=8;
        int start=0,end=nums.size()-1,res=-1;
        vector<int>ans;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
                end=mid-1;
            else
                start=mid+1;   
        }
        ans.push_back(res);
        start=0,end=nums.size()-1,res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                start=mid+1;
            }
            else if(target<nums[mid])
                end=mid-1;
            else
                start=mid+1;   
        }

        ans.push_back(res);

for(auto val:ans)
cout <<  val <<" ";


    return 0;
}
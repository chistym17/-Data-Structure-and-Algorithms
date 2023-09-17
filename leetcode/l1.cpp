class Solution {
public:
    int maxSubArray(vector<int>& nums) {

int sum=0;
int max_sum=0;

if(nums.size()==1) return nums[0];
int flag=0;
for(int i=0;i<nums.size();i++)
{
    if(nums[i]>0)flag=1;
}
if(flag==0)
{
    return *max_element(nums.begin(),nums.end());
}



for(int i=0;i<nums.size();i++)
{
sum+=nums[i];
if(sum<0)
sum=0;
max_sum=max(max_sum,sum);

}


return max_sum;
        
    }
};
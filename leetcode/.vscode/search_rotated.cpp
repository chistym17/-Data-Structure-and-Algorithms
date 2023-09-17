#include<bits/stdc++.h>

using namespace std;
int main()
{

vector<int>v{4,5,6,7,0,1,2};
int n=v.size();
int target=0;
int low=0;
int high=n-1;
int ans=-1;
int mid=0;
while(low<=high)
{
mid=(low+high)/2;
if(v[mid]==target)
 ans= mid;
if(v[low]<v[mid])
{

if(v[low]<=target && v[mid]>target)
high=mid-1;
else
low=mid+1;
}
else{
if(v[mid]<target && target<=v[high])
low=mid+1;
else
high=mid-1;

}

}

cout<<ans;




    return 0;
}
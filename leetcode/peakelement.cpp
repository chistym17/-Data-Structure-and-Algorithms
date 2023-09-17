#include<bits/stdc++.h>

using namespace std;
int main()
{
vector<int>arr{1};
int n=arr.size();
int mid=-1;
int ans=-1;
int low=0;
int high=n-1;
while(low<=high)
{
 mid=low+(high-low)/2;
if( (mid==0 || arr[mid]>arr[mid-1] )&& (mid=n-1 ||arr[mid]>arr[mid+1]) )
{ans=mid;
;
break;
}
else if(arr[mid]<arr[mid-1])
high=mid-1;

else if(arr[mid]<arr[mid+1])
low=mid+1;
}

cout<<ans;

    return 0;
}
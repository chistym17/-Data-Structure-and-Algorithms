#include<bits/stdc++.h>

using namespace std;
int main()
{
int n;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int low=0;
int high=n-1;
while(low<=high)
{
    swap(arr[low],arr[high]);
    low++;
    high--;
}

for(auto val:arr)
{
    cout<<val<<" ";
}
    return 0;
}
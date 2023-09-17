#include<bits/stdc++.h>

using namespace std;
int main()
{
long long int n;
long long int moves=0;
cin>>n;
long long int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

for(long long int i=0;i<n-1;i++)
{
if(arr[i+1]<arr[i])
{
moves+=arr[i]-arr[i+1];
arr[i+1]=arr[i];
}
}

cout<<moves;


    return 0;
}
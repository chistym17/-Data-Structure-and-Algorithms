//brute force method;

#include<bits/stdc++.h>

using namespace std;
int main()
{

int n;
cin>>n;
int maxsum=0;
int currentsum=0;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {    currentsum=0;

     for(int k=i;k<=j;k++){

currentsum+=arr[k];}
    }
    
    maxsum=max(maxsum,currentsum);
}


cout<<maxsum;
    return 0;
}
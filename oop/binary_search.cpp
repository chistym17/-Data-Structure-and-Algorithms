#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int k;
cin>>k;
int low=0;
int high=n-1;
int flag=0;
while(low<=high)
{
int mid=(low+high)/2;
if(arr[mid]==k){
cout<<"yes";
flag=1;;
break;}

if(k>arr[mid])
{
    low=mid+1;

}
else{
    high=mid-1;
}

}

if(flag==0) cout<<"no";


    return 0;
}
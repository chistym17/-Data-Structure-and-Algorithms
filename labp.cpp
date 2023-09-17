#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int low=0;
    int high=n-1;
    int array[n];
    for(int i=0;i<n;i++)
{
    cin>>array[i];
}
sort(array,array+n);
 
int q;
cin>>q;
for(int i=0;i<q;i++)
{   
    int k;
    cin>>k;
int flag;
while(low<=high)
{
int mid=(low+high)/2;
if(array[mid]==k) {
flag==1;
cout<<"yes";
break;
}
else 
flag=0;

if(k>array[mid])
low=mid+1;
else if(k<array[mid])
high=mid-1;

}

if(flag==0) cout<<"No";
    

}
    return 0;
}
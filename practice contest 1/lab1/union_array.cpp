#include<bits/stdc++.h>

using namespace std;
void print_union(int n,int m,int arr[],int arr2[])
{
vector<int>a;
if(m>n)
{

for(int i=0;i<m;i++)
{
    a.push_back(arr2[i]);
}


for(int i=0;i<n;i++)
{
    if(arr[i]!=arr2[i])
    a.push_back(arr[i]);
}


}

else{

for(int i=0;i<n;i++)
{
    a.push_back(arr[i]);
}


for(int i=0;i<m;i++)
{
    if(arr2[i]!=arr[i])
    a.push_back(arr2[i]);
}
}

int x=a.size();
sort(a.begin(),a.end());

for(int i=0;i<x;i++)
{
    cout<<a[i]<<" ";
}

}



int main()
{
int n,m;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}
sort(arr,arr+n);

cin>>m;
int arr2[m];
for(int i=0;i<m;i++)
{
    cin>>arr2[i];
    
}
sort(arr2,arr2+m);

print_union(n,m,arr,arr2);






    return 0;
}
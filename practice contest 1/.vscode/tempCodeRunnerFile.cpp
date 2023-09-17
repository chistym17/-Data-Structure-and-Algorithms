#include<bits/stdc++.h>

using namespace std;
int main()
{

long int n;
int j;
cin>>n;
int array[n];

for(int i=1;i<=n;i++)
{
    array[i]=0;
}
for(int i=1;i<=n-1;i++)
{
cin>>j;
array[j]=1;
}

for(int i=1;i<=n;i++)
{
if(array[i]==0)
cout<<i;
}
    return 0;
}
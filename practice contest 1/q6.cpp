#include<bits/stdc++.h>

using namespace std;

void check_number(vector<int>v,int k)
{
int count=0;
int low=0;
int high=v.size()-1;
while(low<high)
{
int mid=(low+high)/2;
if(v[mid]==k)
{count++;

if(v[mid-1]==k || v[mid+1]==k)
count++;
if(count>1)
break;
}
else if(v[mid]<k)low=mid+1;
else
high=mid-1;

}
if(count>1)cout<<"yes";
else 
cout<<"no";

}


int main()
{

int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    v.push_back(a);
}
    
 int k;

 cin>>k;

check_number(v,k);

    return 0;
}
#include<bits/stdc++.h>

using namespace std;
int main()
{

vector<int>v{1,8,6,2,5,4,8,3,7};
int n=v.size();
int low=0;
int high=n-1;
int area=0;
int maxi=0;
while(low<high)
{

area=(high-low)*min(v[low],v[high]);
maxi=max(maxi,area);
if(v[low]<v[high])
low++;
else
high--;
}

cout<<maxi;

    return 0;
}
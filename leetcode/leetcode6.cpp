#include<bits/stdc++.h>

using namespace std;
int main()
{
vector<int>prices{7,1,5,3,6,4};

int n=prices.size();

int mini=*min_element(prices.begin(),prices.end());
int id=-1;
for(int i=0;i<n;i++)
{if(prices[i]==mini)
{
    id=i;
}

}
int maxi=*max_element(prices.begin()+id,prices.end());
int ans=maxi-mini;
cout<<ans;





    return 0;
}
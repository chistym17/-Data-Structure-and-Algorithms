#include<bits/stdc++.h>

using namespace std;
int main()
{
string s;
int k=0;
cin>>s;
int maxi=0;
int n=s.size();
for(int i=0;i<n;i++)
{
    if(s[i]!=s[i+1])
    k++;
    else {
     maxi=max(maxi,k);
    }

}
cout<<maxi;




    return 0;
}
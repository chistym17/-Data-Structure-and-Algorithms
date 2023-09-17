#include<bits/stdc++.h>
using namespace std;

int substring(string s)
{

int count=1;
int ans=1;
for(int i=1;i<s.size();i++)
{
if(s[i]==s[i-1])
{
    count++;

}
else{
ans=max(ans,count);
count=1;
}
}
ans=max(ans,count);
return ans;


}

int main()
{

string s;
cin>>s;

int n=substring(s);
cout<<n;

    return 0;
}
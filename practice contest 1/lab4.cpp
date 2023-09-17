#include<bits/stdc++.h>

using namespace std;
int check_palindrom(string word,int s,int e)
{if(s>=e)return 1;
if(word[s]!=word[e])return 0;

return check_palindrom(word,s+1,e-1);

}
int main()
{
string s;
cin>>s;
int n=s.size();
int ans=check_palindrom(s,0,n-1);
if(ans==1)cout<<"yes";
else cout<<"NO";

    return 0;
}
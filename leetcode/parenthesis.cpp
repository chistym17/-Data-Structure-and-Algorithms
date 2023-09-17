#include<bits/stdc++.h>

using namespace std;
int main()
{
string s;
cin>>s;
int n=s.size();
vector<char>v;
for(int i=0;i<n;i++)
{
    if(v.size()==0){
    v.push_back(s[i]);}

    else{
        char ch=v.back();

        if(ch=='(' && s[i]==')')
        v.pop_back();

        else if(ch=='{' && s[i]=='}')
        v.pop_back();

        else if(ch=='[' && s[i]==']')
        v.pop_back();

        else{
            v.push_back(s[i]);
        }

    }
}

    if(v.size()==0)return 1;
    else return 0;




    return 0;
}
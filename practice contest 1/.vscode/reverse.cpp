#include<bits/stdc++.h>

using namespace std;
int main()
{
int a,b;
cin>>a>>b;
string s;
cin>>s;

reverse(s.begin()+a-1,s.begin()+b);

cout<<s;


    return 0;
}
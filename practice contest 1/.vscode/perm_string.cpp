#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int arr[26];
for(int i=0;i<26;i++)
{
arr[i]=0;
}

for(int i=0;i<3;i++)
{
arr[s[i]-'a']++;
}

int n;

n=*max_element(arr,arr+25);
if(n==3)
cout<<"1";

else if(n==2){
cout<<"3";
}
else{
    cout<<"6";
}
    return 0;
}
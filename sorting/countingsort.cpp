#include<bits/stdc++.h>

using namespace std;
int main()
{

int n=5;
vector<int>a{4,2,3,3,0};
vector<int>v(n,0);

for(int i=0;i<n;i++)
{
    v[a[i]]++;


}

for(auto a:v)
cout<<a<<" ";
for(int i=0;i<=v[i];i++)
{
    if(i==n-1)break;
    else
    cout<<i<<" ";

}


    return 0;
}
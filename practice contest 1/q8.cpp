#include<bits/stdc++.h>

using namespace std;
vector<int> even_generator(vector<int>v)
{
for(int i=0;i<v.size();i++)
{
if(v[i]%2!=0)
{
    v.erase(v.begin()+i);
}

}
return v;

}


int main()
{
vector<int>v{5,6,7,8,9};

vector<int>ans=even_generator(v);
for(auto a:ans)
{
    cout<<a<<" ";
}
    return 0;
}
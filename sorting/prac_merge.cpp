#include<bits/stdc++.h>
using namespace std;//merge and sort

vector<int> merge_non_increasing(vector<int>a,vector<int>b)
{

int id1=0;
int id2=0;
int n=a.size()+b.size();
vector<int>sorted;

for(int i=0;i<n;i++)
{
if(id1==a.size())
{
 sorted.push_back(b[id2]);
    id2++;
}
else if(id2==b.size())
{
sorted.push_back(a[id1]);
id1++;
}

else if(a[id1]>b[id2]){
sorted.push_back(a[id1]);
id1++;
}
else{
    sorted.push_back(b[id2]);
    id2++;
}

}

return sorted;

}

int main()
{
int n;
int m;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

cin>>m;
vector<int>b(m);

for(int i=0;i<m;i++)
{
    cin>>b[i];
}

vector<int>ans=merge_non_increasing(a,b);


for(auto val:ans)
cout<<val<<" ";


    return 0;
}
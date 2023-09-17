#include<bits/stdc++.h>

using namespace std;
vector<int> merge_sort_algo(vector<int>a);
vector<int>merges(vector<int>b,vector<int>c,int n);



vector<int> merge_sort_algo(vector<int>a)
{
int n=a.size();

if(n<=1)return a;
else{

int mid=n/2;
vector<int>b;
vector<int>c;

for(int i=0;i<mid;i++)
{
    b.push_back(a[i]);

}

for(int i=mid;i<n;i++)
{
c.push_back(a[i]);
}

vector<int>sb= merge_sort_algo(b);
vector<int>sc= merge_sort_algo(c);
int id1=0;
int id2=0;

vector<int>merged;
for(int i=0;i<n;i++)
{

if(id1==sb.size())
{
  merged.push_back(sc[id2]);
        id2++;
}
else if(id2==sc.size())
{
    merged.push_back(sb[id1]);
        id1++;

}

else if(sb[id1]<sc[id2])
    {
        merged.push_back(sb[id1]);
        id1++;


    }
    else{
         merged.push_back(sc[id2]);
        id2++;

    }
}


return merged;

}



}



int main()
{

int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];

}
vector<int>ans=merge_sort_algo(a);
for(auto val:ans)
cout<<val<<" ";


    return 0;
}
#include<bits/stdc++.h>

using namespace std;
vector<int> merge_sort_algo(vector<int>a);

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

void count_pairs(vector<int>merged,int k)
{
int count=0;
int high=merged.size()-1;
int low=0;


while(low<high)
{  
    int ans=merged[low]+merged[high];
    if(ans==k){
    count++;
    low=low+1;
    }
    else if(ans>k)
    {
        high=high-1;
    }
    else if(ans<k)
    {
        low=low+1;
    }


}

cout<<count;






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
int k;
cin>>k;

vector<int>ans=merge_sort_algo(a);


count_pairs(ans,k);

    return 0;
}
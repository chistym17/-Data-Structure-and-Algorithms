#include<bits/stdc++.h>

using namespace std;

vector<int> quicksort(vector<int>v)

{
 vector<int>ans;

if(v.size()<=1)return v;
else{
int pivot=(v.size()+1)/2;
vector<int>a;
vector<int>b;

for(int i=0;i<v.size();i++)
{
   if(i==pivot)continue;/////

  else if(v[i]<=v[pivot])
    {
        a.push_back(v[i]);
    }
    else{
        b.push_back(v[i]);
    }
}

vector<int>sorted_a=quicksort(a);
vector<int>sorted_b=quicksort(b);

for(int i=0;i<sorted_a.size();i++)
{
    ans.push_back(sorted_a[i]);
}

ans.push_back(v[pivot]);
for(int i=0;i<sorted_b.size();i++)
{
    ans.push_back(sorted_b[i]);
}

}
return ans;

}


int main()
{
int n=5;
vector<int>v{6,2,3,3,5};
vector<int>ans=quicksort(v);
for(auto a:ans)
{
    cout<<a<<" ";
}




    return 0;
}
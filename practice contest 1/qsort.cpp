#include<bits/stdc++.h>

using namespace std;


vector<int> quick_sort(vector<int>v)
{vector<int>ans;

    if(v.size()<=1)return v;
    else{

        int pivot=(v.size()+1)/2;
        vector<int>a,b;

        for(int i=0;i<v.size();i++)
        {
            if(i==pivot)continue;

            else if(v[i]>=v[pivot])
            {
                a.push_back(v[i]);
            }
            else if(v[i]<v[pivot]){
                b.push_back(v[i]);
            }
             }

            vector<int>sorted_a,sorted_b;
            sorted_a=quick_sort(a);
            sorted_b=quick_sort(b);
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
int n;
cin>>n;
 vector<int>v;

for(int i=0;i<n;i++)
{
int k;
cin>>k;
v.push_back(k);

}

vector<int>ans=quick_sort(v);
for(auto val:ans)
{
cout<<val<<" ";
}




    return 0;
}
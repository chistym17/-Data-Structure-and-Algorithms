#include<bits/stdc++.h>

using namespace std;

int check_array(vector<int>b,int p)
{
int low=0;
int high=b.size()-1;
while(low<=high)
{
   int mid=(low+high)/2;
   if(b[mid]==p)
   {
    return 1;
   }
   else if(b[mid]<p)low=mid+1;
   else
   high=mid-1;


}
return 0;

}


int main()
{int p;
cin>>p;
 vector<int>a;

for(int i=0;i<p;i++)
{
int k;
cin>>k;
a.push_back(k);


}
int q;
cin>>q;
 vector<int>b;

for(int i=0;i<p;i++)
{
int k;
cin>>k;
b.push_back(k);

}


    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
int ans=0;
for(int i=0;i<a.size();i++)
{
   ans+=check_array(b,a[i]);

}
if(ans==a.size())cout<<"yes";
else
cout<<"no";

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

void count_pairs(vector<int>ans,int k);

int main()
{

vector<int>merged{1,2,3,4,6};
int k=5;
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






    return 0;
}
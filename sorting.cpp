#include<bits/stdc++.h>

using namespace std;
int main()
{


int a[6]={36,6,2,8,9,1};

sort(a,a+6,greater<int>());// in descending order;

for(int i=0;i<5;i++)
{
cout<<a[i];
cout<<" ";

}

    return 0;
}
#include<bits/stdc++.h>

using namespace std;
int main()
{

vector<int>a;//array r moto use kora jabe ja dynamically memory allocate korbe

for(int i=0;i<10;i++)
{
a.push_back(i);
}
a.insert(a.begin()+2,20);//jekono index e giye value insert kora jbe;

for(int i=0;i<10;i++)
{
    cout<<a[i];
    cout<<"\n";
}


    return 0;
}
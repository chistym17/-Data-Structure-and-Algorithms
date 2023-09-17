#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
int arr[3]={3,2,4};
int target=6;
for(int i=0;i<3;i++)
{
    for(int j=i+1;j<2;j++)
    {
        if(arr[j]==target-arr[i])
        {
            cout<<"["<< i<< ","<<j<<"]";
            break;
        }

    }

}



    return 0;
}
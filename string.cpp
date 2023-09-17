#include<iostream>

using namespace std;
int main()
{
string s="abcdef";
//s.pop_back();   // last character delete hobe

 //s.erase(s.begin()+2); // jekono index r value delete kora jabe
 s.erase(s.begin()+4);

cout<<s;



    return 0;
}
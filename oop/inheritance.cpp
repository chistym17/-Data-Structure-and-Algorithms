
#include<bits/stdc++.h>
using namespace std;

class user
{
protected:
string name;
int age;

};


class admin:user{ // user ke inherit korche,

private:
int password;

public:
void set_info(int pass, string s,int m)
{password=pass;
name=s;
age=m;

}

void print_info()
{cout<<password<<endl;
    cout<<name<<endl;
    cout<<age;
}




};
    
  

    

int main()
{
admin a;
a.set_info(1234,"chisty",15);
a.print_info();

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class student
{
public:

string name;
int age;
int subject;

student(string name,int age,int subject) // constructor
{
    this->name=name;
    this->age=age;
    this->subject=subject;
}

student()// no information constructor
{

}

student(string name) // shudu nam nibe constructor;
{
    this->name=name;
}
void print_info()

{
    cout<<name<<" "<<age<<" "<<subject;
}



};

int main()
{

student s={"moni",22,5};

s.print_info();
student a;

    return 0;
}
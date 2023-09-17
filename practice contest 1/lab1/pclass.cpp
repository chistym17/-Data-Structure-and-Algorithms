#include<bits/stdc++.h>

using namespace std;

class cuboid{
private:
int lenght;
int width;
int height;
public:

cuboid(int lenght,int width,int height)
{

    this->lenght=lenght;
    this->width=width;
    this->height=height;
}

cuboid(){

    this->lenght=0;
    this->width=0;
    this->height=0;


}
public:
void set_info(int lenght,int width,int height)
{
 this->lenght=lenght;
 this->width=width;
this->height=height;


}

void print_info()
{

cout<<"lenght-"<<lenght<<" "<<"width-"<<width<<" "<<"height-"<<height;
cout<<"\n";

}
public:
int find_volume()
{
 

return lenght*width*height;

}

public:
int find_area()
{
 


}

};

bool comp(cuboid a,cuboid b)
{

    return a.find_volume()<b.find_volume();
}





int main()
{

cuboid a[3];
for(int i=0;i<3;i++)

{
    int l,w,h;
    cin>>l>>w>>h;

a[i].set_info(l,w,h);


}

cout<<"\n";

for(int i=0;i<3;i++)
{
cout<< a[i].find_volume();
cout<<"\n";

}



sort(a,a+2,comp);//sort by volume;


for(int i=0;i<3;i++)
{
    a[i].print_info();
}


    return 0;
}
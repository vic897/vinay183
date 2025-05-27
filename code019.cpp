#include<iostream>
using namespace std;

class A
{
    public:
    A(){cout<<"1st create"<<endl;}
    ~A(){cout<<"1st destroyed"<<endl;}
};
class B: public A
{
    public:
    B(){cout<<"2nd create"<<endl;}
    ~B(){cout<<"2nd destroyed"<<endl;}
};

int main(){

    B obj;
    return 0;
}
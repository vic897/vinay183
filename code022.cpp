#include<iostream>
using namespace std;

class A
{
    public:
    void show(){cout<<"1st create"<<endl;}
};
class B: public A
{
    public:
    void show(){cout<<"2nd create"<<endl;}
    
};

int main(){

    B obj;
    obj.show();
    A obj1;
    obj1.show();
    return 0;
}
#include <iostream>
using namespace std;

class A{
    public:
     A(){cout<<"function1"<<endl;}
};
class B: public A
{
        public:
        B(){cout<<"function2"<<endl;}
    };

int main(){
B obt;
A obt1;
return 0;
}
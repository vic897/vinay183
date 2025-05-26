#include <iostream>
using namespace std;

class A {
public:
    void princi() {
        cout<<"I'm the Principal"<<endl;
        cout << "peak of hierarchey" << endl;
    }
    void chem(){
        cout<<"chemistry"<<endl;
        cout<<"im a part of this ladder"<<endl;
    }
    void phys(){
        cout<<"physics"<<endl;
        cout<<"im a part of this ladder"<<endl;
    }
};        
class B : public A {
public:
    void P_HOD(){
        phys();
    }
};
class C : public A {
public:
    void C_HOD(){
        chem();
    };
    
};


int main() {
    A obj;
    obj.princi();
    B obj1;
    obj1.P_HOD();
    C obj2;
    obj2.C_HOD();
    return 0;
}

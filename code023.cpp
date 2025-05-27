#include <iostream>
using namespace std;

class A {
public:
    void code(int a){
        cout<<"I'm the foundation"<<endl;
        cout << "peak of hierarchey" << endl;
    }
    void code(int a, int b){
        cout<<"i'm a programmer"<<endl;
        cout<<"im a part of this ladder"<<endl;
    }
    void code(int x, int n, int d){
        cout<<"i'm a hecker"<<endl;
        cout<<"i'm outta the matrix"<<endl;
    }
};        
class B : public A {
public:
    void P(int a, int b){
    code(a, b);
    }
};
class C : public A {
public:
    void H(int x, int n, int d){
    code(x, n, d);
    }
};
int main() {
    A obj;
    obj.code(1);
    B obj1;
    obj1.P(2, 3);
    C obj2;
    obj2.H(5, 8, 6);
    return 0;
}
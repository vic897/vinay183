#include <iostream>
using namespace std;

class A {
public:
    void ABC() {
        cout << "Displaying from A" << endl;
    }
};

class B : public A {
public:
    void BCA() {
        cout << "Displaying from B" << endl;
    }
};

class C : public B {
public:
    void CAB() {
        cout << "Displaying from C" << endl;
    }
};

int main() {
    C obj;
    obj.ABC();
    obj.BCA();
    obj.CAB();
    return 0;
}

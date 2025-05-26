#include <iostream>
using namespace std;

class A {
public:
    void princi() {
        cout << "peak of hierarchey" << endl;
        cout<<"im a part of this ladder"<<endl;
    }
};        
class B : public A {
public:
    void P_HOD(){
        cout<<"physics"<<endl;
        princi();
    }
};
class C : public A {
public:
    void C_HOD(){
        cout<<"chemistry"<<endl;
        princi();
    };
};


int main() {
    B obj1;
    obj1.P_HOD();
    C obj2;
    obj2.C_HOD();
    return 0;
}


/*#include <iostream>
using namespace std;

class A {
public:
    void princi() {
        cout << "peak of hierarchey" << endl;
    }
   };        
class B : public A {
public:
    void P_HOD() {
        cout << "physics" << endl;
    }
};

class C : public A {
public:
    void C_HOD() {
        cout << "chemistry" << endl;
    }
};

int main() {
    B obj1;
    obj1.P_HOD();
    C obj2;
    obj2.C_HOD();
    return 0;
}
*/
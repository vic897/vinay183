#include <iostream>
using namespace std;

class data {
public:
    void dislay();
};

class apple : public data {
public:
    void display() {
        cout << "apple uses mac and ios" << endl;
    }
};

class microsoft : public data {
public:
    void display() {
        cout << "microsoft uses windows";
    }
};

int main() {
    apple a;
    a.display(); 
    microsoft m;
    m.display();
    return 0;
}

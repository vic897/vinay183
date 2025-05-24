#include <iostream>
using namespace std;

class animal{
public:
   void anil();
   
};

class cat: public animal{
public:
    cat(){ cout << "meow meow" << endl;}
};

class dog: public animal{
public:
    dog(){ cout << "bark bark" << endl;}
};

int main() {
    dog obj;
    cat onj1;
    return 0;
}


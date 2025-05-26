 #include<iostream>
 using namespace std;
 class tyres{
    public:
    void wheels()
    {
        cout<<"tyres are accessed"<<endl;
    }};
    class engines{
    public:
    void start()
    {
        cout<<"Engin started"<<endl;
    }};
    class car: public tyres,public engines
    {
        public:
        void  buy()
        {
            cout<<"We are going to buy the car"<<endl;
        }

    };
    int main()
    {
        car obj;
        obj.buy();
        obj.start();
        obj.wheels();

    }
 

 /*#include <iostream>
using namespace std;

class Tyres {
public:
    void wheels() {
        cout << "Tyres are accessed" << endl;
    }
};

class Engines {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class car : public Tyres, public Engines {
public:
    void buy() {
        cout << "We are going to buy the car" << endl;
    }
};

int main() {
    car obj;
    obj.buy();
    obj.start();
    obj.wheels();

    return 0;
}
*/
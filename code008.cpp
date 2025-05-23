#include <iostream>
using namespace std;

class Day3 {
    int a, b;

public:
    Day3() {
        cout << "Default" << endl;
    }

    Day3(int x, int y) {
        a = x;
        b = y;
        cout << "Values are: " << a << " and " << b << endl;
    }

    Day3(int x) {
        cout << "Value of X: " << x << endl;
    }

    ~Day3() {
        cout << "Object deleted.....!!!!" << endl;
    }
};


int main() {
    Day3 obj1;
    Day3 obj2(16, 17);
    Day3 obj3(180);

    return 0;
}
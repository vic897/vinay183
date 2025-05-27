#include <iostream>
using namespace std;

class Day6 {
public:
    void display() {
        cout << "Nothing is displayed" << endl;
    }

    void display(int x) {
        cout << "Displaying X: " << x << endl;
    }

    void display(int a, int b) {
        cout << "Displaying 2 values: " << a << " and " << b << endl;
    }
};

int main() {
    Day6 obj;
    return 0;
}
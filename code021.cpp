#include <iostream>
using namespace std;

class Day6 {
public:
    void area(int s) {
        cout << "Square area: " << (s * s) << endl;
    }

    void area(int l, int b) {
        cout << "Rectangle area: " << (l * b) << endl;
    }

    void area(float b, float h) {
        cout << "Triangle area: " << (0.5f * b * h) << endl;
    }

    void area(double r) {
        cout << "Circle area: " << (3.14159 * r * r) << endl;
    }
};

int main() {
    Day6 obj;
    obj.area(5);
    obj.area(4, 6);
    obj.area(4.0f, 5.0f);
    obj.area(3.5);

    return 0;
}
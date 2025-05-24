/*nclude <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Setter functions
    void set(string n, int a){
        name = n;
        age = a;
    }

    // Getter functions
    string get() {
        return name;
        return age;
    }
};

int main() {
    Person p;
    p.setName("Alice");
    p.setAge(25);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}*/


#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Separate setter functions
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }

    // Getter functions
    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
    Person p;
    p.setName("Alice");
    p.setAge(25);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}

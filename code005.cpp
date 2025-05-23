#include <iostream>
using namespace std;

class batchD {
public:
    void sorter() {
        int n;
        cout << "Enter your roll number: ";
        cin >> n;

        if (n >= 0 && n <= 25) {
            cout << "Team Idiots" << endl;
        }
        else if (n >= 26 && n <= 50) {
            cout << "Team Retards" << endl;
        }
        else if (n >= 51 && n <= 100) {
            cout << "Team Perverts" << endl;
        }
        else {
            cout << "Invalid roll number" << endl;
        }
    };
    batchD()
        {
            cout<<"Thats some top level shit brother"<<endl;
        }
};


int main() {
    batchD obt1;
    obt1.sorter(); 
    return 0;
}

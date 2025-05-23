#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter any number";
    cin>>a;

    switch (a)
    {
    case 7:
        cout<<"your lucky";
        break;
    
    default:
        cout<<"bad luck";
        break;
    }
    return 0;

}
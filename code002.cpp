#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter your grade (1,2,3)";
    cin>>a;

    switch (a)2
    {
    case 3:
        cout<<"idiot work more";
        break;
    
    case 2:
        cout<<"your just lazy";
        break;
    
    case 1:
        cout<<"superb";
        break;

    default:
        cout<<"error";
        break;
    }
    return 0;
}
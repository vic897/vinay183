#include <iostream>
#include<string>
using namespace std;

class batchD {
public: 
        batchD(int height, int weight, string hair_color)
        {
            cout<< "height:  " << height << ",weight:  " <<weight<< ",hair color:  " <<hair_color<<endl;
        }
    };
    int main(){
        batchD a(5, 66, "black");
        return 0;
    }
    
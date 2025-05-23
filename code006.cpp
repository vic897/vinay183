#include <iostream>
#include<string>
using namespace std;

class batchD {
public: 
        void build(){
            int height;
            cout<<"height:"<<endl;
            cin>>height;
            int weight;
            cout<<"weight:"<<endl;
            cin>>weight;
            string hair_color;
            cout<<"hair colort:"<<endl;
            cin>>hair_color;

            cout<< "height:  " << height << ",weight:  " <<weight<< ",hair color:  " <<hair_color<<endl; 
        }
    };
int main(){
    batchD obt;
    obt.build();
    return 0;
}

/*#include <iostream>
#include<string>
using namespace std;

class batchD {
public: 
        batchD(int height, int weight, string hair_color)
        {
            cout<< "height:  " << height << ",weight:  " <<weight<< ",hair color:  " <<hair_color<<endl;
        }
    };
    void main(){
        batchD a(6, 66, black);
        return 0;
    }*/
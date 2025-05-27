/*write a program with string input consisting of alphabets and numbers and find the mx digit in the string*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    cout<<"enter string"<<endl;
    getline(cin, input);

int maxdigit = -1;

for(char ch : input){
    if(isdigit(ch)){
        int digit = ch -'0';
        if(digit > maxdigit){
            maxdigit = digit;
        }
    }
}

if(maxdigit != -1){
    cout<<"maximum digit:"<<maxdigit<<endl;
}
else{
    cout<<"no digit found"<<endl;
}
return 0;
}
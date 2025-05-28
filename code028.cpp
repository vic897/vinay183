/*write a program with string input consisting of alphabets and numbers and find the mx digit in the string*/


/*#include<iostream>
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
}*/



/*#include<iostream>
#include<string>
using namespace std;

int main(){
    st input;
    cout<<"enter string"<<endl;
    getline(cin, input);

int maxdigit = -1;

for(char ch : input){
    if(isdigit(ch)){
        for(int i = st.find(ch); i <=  )*/








/*#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    cout<<"enter string"<<endl;
    string digits = "";
    getline(cin, input);
        for (int i = 0; i < input.length(); ++i) {
        char ch = input[i];
        if (isdigit(ch)) {
            digits += ch;
        }
    }
    cout<<digits<<endl;
    return 0;
}*/






/*#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>  // for stoi
using namespace std;

int main() {
    string input = "abc123xyz42aabc761BC";
    string temp = "";
    vector<int> numbers;

    for (int i = 0; i < input.length(); ++i) {
        char ch = input[i];

        if (isdigit(ch)) {
            temp += ch;  // build the number
        } else {
            if (!temp.empty()) {
                numbers.push_back(stoi(temp));  // convert to int and store
                temp = "";
            }
        }
    }

    // Check last number if input ends with digits
    if (!temp.empty()) {
        numbers.push_back(stoi(temp));
    }

    // 🧠 Perform comparisons
    int maxNum = numbers[0], minNum = numbers[0];

    for (int num : numbers) {
        if (num > maxNum) maxNum = num;
        if (num < minNum) minNum = num;
    }

    cout << "Numbers found: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\nMaximum number: " << maxNum << endl;
    cout << "Minimum number: " << minNum << endl;

    return 0;
}*/



#include <iostream>
using namespace std;

int main() {
    string input = "Zoro123Sanji456Gojo7";
    int numbers[100]; // You can adjust the size as needed
    int numCount = 0;

    int currentNum = 0;
    bool buildingNumber = false;

    for (int i = 0; input[i] != '\0'; ++i) {
        char ch = input[i];

        // Check if character is a digit
        if (ch >= '0' && ch <= '9') {
            currentNum = currentNum * 10 + (ch - '0');
            buildingNumber = true;
        } else {
            if (buildingNumber) {
                numbers[numCount++] = currentNum;
                currentNum = 0;
                buildingNumber = false;
            }
        }
    }

    // If the string ends with digits
    if (buildingNumber) {
        numbers[numCount++] = currentNum;
    }

    // Find max and min
    int maxNum = numbers[0];
    int minNum = numbers[0];

    for (int i = 1; i < numCount; ++i) {
        if (numbers[i] > maxNum) maxNum = numbers[i];
        if (numbers[i] < minNum) minNum = numbers[i];
    }

    // Print results
    cout << "Numbers extracted: ";
    for (int i = 0; i < numCount; ++i) {
        cout << numbers[i] << " ";
    }
    cout << "\nMax: " << maxNum << ", Min: " << minNum << endl;

    return 0;
}

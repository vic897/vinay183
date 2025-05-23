/* write a program to display prime numbers*/
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number";
    cin>>n;

    for(int i = 2; i <= n; i++){
            if(n%i==0)
                cout<<"number is not prime";
            else
                cout<<"is prime";
        }
return 0;    
}*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number";
    cin>>n;

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {

            
            isPrime = false;
            break;
        }
    }

    if (isPrime && n > 1) {
        cout << "Number is prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }

    return 0;
}

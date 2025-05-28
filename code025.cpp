#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x = 69;
    int *p = &x;
    int **d = &p;

    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("p = %d\n", p);
    printf("&p = %d\n", &p);
    printf("*p = %d\n", *p);
    printf("d = %d\n", d);
    printf("&d = %d\n", &d);
    printf("*d = %d\n", *d);
    printf("**d = %d\n", **d);

    cout << x << endl;
    cout << &x << endl;

    return 0;
}
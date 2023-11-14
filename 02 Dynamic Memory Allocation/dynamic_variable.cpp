#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *p1 = new int;
    *p1 = 100;
    cout << "fun 1:"<< p1 << endl;            //value
    cout << "fun 2:"<< *p1 << endl;           //pointer 
    return p1;
}

int main()
{

    int *pointer = new int;

    *pointer = 20;

    cout << pointer << endl; // 0xf81750 which is the address
    cout << *pointer << endl;

    int *x = fun();
    cout << "main "<< x << endl;                //value
    cout << "main "<< *x << endl;               //pointer 

    return 0;
}
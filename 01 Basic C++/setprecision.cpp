#include <iostream>
// #include<stdio.h>
#include <iomanip>
using namespace std;
int main()
{

    double x;
    cin >> x; // 2.123456

    // // in C lang
    // printf("%0.2llf", x); // 2.12

    //  In CPP/C++ lang

    cout << fixed << setprecision(2) << x << endl; // 2.12
    return 0;
}
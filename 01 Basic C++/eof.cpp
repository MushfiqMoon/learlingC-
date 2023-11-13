#include <iostream>
// #include<stdio.h>
using namespace std;
int main()
{

    int x, y;

    // // in C lang
    // while (scanf("%d %d", &x, &y) != EOF)
    // {
    //     printf("%d %d\n", x, y);
    // }

    //  In CPP/C++ lang
    while (cin >> x >> y)
    {
        cout << x << " " << y << endl;
    }

    return 0;
}
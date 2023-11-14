#include <bits/stdc++.h>
using namespace std;

int *fun(int count)
{
    int *a = new int [count];

    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }

    return a;
}

int main()
{
    int count;
    cin >> count;

    int *pointer = fun(count);

    // for (int i = 0; i < count; i++)
    // {
    //     cin >>  pointer[i];
    // }

    for (int i = 0; i < count; i++)
    {
        cout << pointer[i] << " ";
    }

    return 0;
}
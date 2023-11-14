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
    int count;
    cin>> count;

    int *pointer = new int[count];

    for (int i = 0; i < count; i++)
    {
        cin >>  pointer[i];
    }

    for (int i = 0; i < count; i++)
    {
        cout <<  pointer[i] << " ";
    }
    

    return 0;
}
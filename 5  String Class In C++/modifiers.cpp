#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";
    // operator overloading
    // a += b;
    // OR
    // a.append(b);
    cout << a << endl;

    a.push_back('_');
    cout << a << endl;

    a.pop_back();
    cout << a << endl;

    string x = "Mushfeeq";
    
    x.erase(5, 1);
    cout << x << endl;

    x.replace(5, 1, "i");
    cout << x << endl;
    return 0;
}
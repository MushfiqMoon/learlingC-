// Greetings from the realm of Elon Mask's X-Masker!
// Where every input encounters an enchanting 'X'!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;   
    getline(cin, s);

    s.resize(s.length() + 1, 'X');
    cout << s<< endl;
    return 0;
}
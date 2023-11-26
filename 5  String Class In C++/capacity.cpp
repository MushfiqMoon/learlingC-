#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    cout << s.size() << endl;

    cout << s.capacity() << endl;

    s.clear();

    cout << "size after clear() - " << s.size() << ". " << endl;

    string newStr = "Mushfiq";

    cout << (newStr.empty() ? "Emply" : "Not Emply") << endl;

    return 0;
}
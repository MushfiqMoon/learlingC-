#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Mushfiq";

    string ::iterator it;

    cin >> s;

    // for (it = s.begin(); it < s.end(); it++)
    // for (string ::iterator it = s.begin(); it < s.end(); it++)
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
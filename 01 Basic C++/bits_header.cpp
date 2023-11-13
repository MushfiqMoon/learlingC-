#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // if we have to compare with two value we dont need to put the {}
    // ex: min(a, b);
    int minVal = min({a, b, c, d});
    int maxVal = max({a, b, c, d});

    cout << "min- " << minVal<< endl << "max- " << maxVal;

    return 0;
}
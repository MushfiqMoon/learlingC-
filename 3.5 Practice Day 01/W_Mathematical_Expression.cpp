/*
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples
input
5 + 10 = 15
output
Yes

input
3 - 1 = 2
output
Yes

input
2 * 10 = 19
output
20

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    char S, Q;

    // ex : 5 + 10 = 15
    cin >> A >> S >> B >> Q >> C;

    bool rightResult = false;
    int WrongResult;

    if (S == '+')
    {
        rightResult = (A + B == C);
        cout << (rightResult ? "Yes" : to_string(A + B)) << endl;
    }
    else if (S == '-')
    {
        rightResult = (A - B == C);
        cout << (rightResult ? "Yes" : to_string(A - B)) << endl;
    }
    else
    {
        rightResult = (A * B == C);
        cout << (rightResult ? "Yes" : to_string(A * B)) << endl;
    }

    return 0;
}
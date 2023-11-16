/*
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
input
5
1 8 5 7 5
output
8
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    int maxVal = INT_MIN;

    for (int i = 0; i < count; i++)
    {
        maxVal = max(arr[i], maxVal);
    }

    cout << maxVal;

    return 0;
}
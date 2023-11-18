/*
Question: Take an integer array A of size N as input. Then take an integer M as input. You need to take an array B of size M and copy all elements of array A to array B. Delete the array A and then take input of the rest of the elements of array B. After that print array B.

Sample Input
5
1 2 3 4 5
10
6 7 8 9 10

Sample Output
1 2 3 4 5 6 7 8 9 10


Sample Input
3
10 20 10
5
60 40


Sample Output
10 20 10 60 40
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int *arrA = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arrA[i];
    }

    int M;
    cin >> M;

    int *arrB = new int[M];

    for (int i = 0; i < N; i++)
    {
        arrB[i] = arrA[i];
    }

    delete[] arrA;


    for (int i = N; i < M; i++)
    {
        cin >> arrB[i];
    }

    for (int i = 0; i < M; i++)
    {
        cout << arrB[i] << " ";
    }

    return 0;
}
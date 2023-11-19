#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {40, 10, 20, 30, 50};

    sort(arr, arr + 5);

 cout << "Assending" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    sort(arr, arr + 5,greater<int>());

     cout << "Dessending" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
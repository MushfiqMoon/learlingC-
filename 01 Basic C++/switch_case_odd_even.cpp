#include <iostream>

using namespace std;
int main()
{

    int num;
    cin >> num; // 3;

    switch (num % 2)
    {
    case 1:
        cout << "Odd" << endl;
        break;

    default:
        cout << "Even" << endl;
        break;
    }

    return 0;
}
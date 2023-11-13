#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;
void my_swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{

    int a, b;
    cin >> a >> b;

    // my_swap(&a, &b);

    // build in fun 
    swap(a,b);
    cout << a << " " << b << endl;

    return 0;
}
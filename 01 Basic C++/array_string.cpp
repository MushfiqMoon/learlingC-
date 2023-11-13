#include <iostream>
#include <string.h>

using namespace std;
int main()
{

    char name[100];
    // fgets(name, 100, stdin);
    cin.getline(name, 100);

    // it will remove the enter value
    /*
    in the input is like
    30
    Hello world
    getline() will not take the entire
    */
    // getchar()

    cout
        << name;
    return 0;
}
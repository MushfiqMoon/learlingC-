#include <bits/stdc++.h>
using namespace std;

int main()
{

    char inputLetter;
    cin >> inputLetter;

    if (inputLetter >= 48 && inputLetter <= 57)
    {

        cout<< "IS DIGIT" << endl;
    }
    else if (inputLetter >= 'A' && inputLetter <= 'Z')
    {
        cout<< "ALPHA" << endl << "IS CAPITAL"<< endl;
    }
    else if (inputLetter >= 'a' && inputLetter <= 'z')
    {
        cout<< "ALPHA" << endl << "IS SMALL"<< endl;
    }

    return 0;
}

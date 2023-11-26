#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    stringstream ss(s);

    string word;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    int wordcount = 0;

    while (ss >> word)
    {
        cout << word << endl;
        wordcount++;
    }

    cout << "Total words = "<< wordcount << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student india, bangladesh;

    india.roll = 20;
    india.cgpa = 3.95;
    char tempName[100] = "Amol";
    // india.name = tempName; -----> X
    strcpy(india.name, tempName);

    cout << india.roll << " - " << india.name << " - " << india.cgpa << endl;

    cin >> bangladesh.roll >> bangladesh.name >> bangladesh.cgpa;

    cout << bangladesh.roll << " - " << bangladesh.name << " - " << bangladesh.cgpa << endl;

    return 0;
}
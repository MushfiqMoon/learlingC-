#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int className;
    int roll;
    double cgpa;

    // Student(int cls, int rl, double cg)
    // {
    //     className = cls;
    //     roll = rl;
    //     cgpa = cg;
    // }

    // OR

    // Student(int className, int roll, double cgpa)
    // {
    //     (*this).className = className;
    //     (*this).roll = roll;
    //     (*this).cgpa = cgpa;
    // }

    // OR

    // Student(int className, int roll, double cgpa)
    // {
    //     this->className = className;
    //     this->roll = roll;
    //     this->cgpa = cgpa;
    // }

    // OR

    Student(int _className, int _roll, double _cgpa)
    {
        className = _className;
        roll = _roll;
        cgpa = _cgpa;
    }
};

int main()
{
    Student india(3, 203, 3.35);
    cout << "Class Name: " << india.className << ", Roll: " << india.roll << ", CGPA: " << india.cgpa << endl;
    return 0;
}
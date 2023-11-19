#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int roll;
    int cls;
    double cgpa;
    Student(int _roll, int _cls, double _cgpa)
    {
        this->roll = _roll;
        this->cls = _cls;
        this->cgpa = _cgpa;
    }
};

Student *fun()
{
    Student *fromFN = new Student(21, 8, 525);
    return fromFN;
}

int main()
{
    Student *ans = fun();
    // Dynamic Object

    cout << "Class Name: " << ans->cls << ", Roll: " << ans->roll << ", CGPA: " << ans->cgpa << endl;
    // now deleting the dynamic function 
    delete ans;

    return 0;
}
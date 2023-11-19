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

// Student fun()
// {
//     Student amol(20, 3, 325);
//     return amol;
// }

int main()
{
    // Student ans = fun();
    // Dynamic Object 
    Student *ans = new Student(22, 7, 425);
    cout << "Class Name: " << ans->cls << ", Roll: " << ans->roll << ", CGPA: " << ans->cgpa << endl;

    return 0;
}
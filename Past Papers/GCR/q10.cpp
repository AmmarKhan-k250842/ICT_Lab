/*
A school wants to print report cards for different types of students.
Create a base class Student with a variable name and a virtual function showResult() that prints
"General student result".
Create a derived class ScienceStudent that overrides showResult() to print "Science student
result: Physics-90, Chemistry-85".
Create another derived class ArtsStudent that overrides showResult() to print "Arts student
result: History-88, Literature-92".
Task:
Create objects for ScienceStudent and ArtsStudent.
Use a Student* pointer array to call showResult() for each student.
*/

#include <iostream>
using namespace std;

class Student
{
    protected:
    string name;

    public:
    Student(string n)
    {
        name = n;
    }
    Student() = default;

    virtual void showResult()
    {
        cout << "====General Student Results====\n" << endl;
    }
};

class ScienceStudent : public Student
{
    public:
    void showResult() override
    {
        cout << "Science student result: Physics-90, Chemistry-85" << endl;
    }
};

class ArtsStudent : public Student
{
    public:
    void showResult() override
    {
        cout << "Arts student result: History-88, Literature-92" << endl;
    }
};

int main ()
{
    ScienceStudent s;
    ArtsStudent a;
    Student* ptr[2];

    ptr[0] = &s;
    ptr[1] = &a;

    for(int i = 0; i < 2; i++)
    {
        ptr[i]->showResult();
    }

    return 0;
}
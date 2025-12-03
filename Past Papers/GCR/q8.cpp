/*
- A company has employees. Create a base class Employee with name and salary.
Create a derived class Manager that adds department and a function displayManager() to
show all details.
Task: Create a Manager object and display all details using the functions.
*/

#include <iostream>
using namespace std;

class Employee
{
    protected:
    string name;
    int salary;

    public:
    Employee(string n, int s)
    {
        name = n;
        salary = s;
    }
    Employee() = default;
};

class Manager : public Employee
{
    protected:
    string department;

    public:
    Manager(string name, int salary, string d) : Employee(name, salary)
    {
        department = d;
    }
    Manager() = default;

    void displayManager()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl; 
    }
};

int main ()
{
    Employee e("Ammar Khan", 2000);
    Manager m("Ammar Khan", 2000, "Computer Science");

    m.displayManager();

    return 0;
}
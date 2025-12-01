/*
1. Create a class Person with variables name and age and a function display() to print them.
Create a derived class Student that adds a variable rollNumber and a function showRoll() to
print it.
Task: Create a Student object, set all values, and call both functions.
*/


class Person
{
    std::string name;
    int age;
    
    public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << " Salary:  " << age << endl;
    }
};

class Student : public Person 
{
    int rollNumber;

    public: 
    Student(string n, int a, int r) : Person(n, a)
    {
        rollNumber = r;
    }
    void showRoll()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main ()
{
    Person p("Ammar Khan", 19);
    Student s("Ammar Khan", 19, 842);

    p.display();
    s.showRoll();

    return 0;
}





/*
2. Create a class Employee with a function work() that prints Employee is working
Create a derived class Manager that overrides work() to print Manager is managing work
*/

#include <iostream>
using namespace std;

class Employee
{
    public:
    virtual void work()
    {
        cout << "Employee is working" << endl;
    }
};

class Manager : public Employee
{
    public:
    void work() override
    {
        cout << "Manager is managing work" << endl;
    }
};

int main ()
{
    Employee e;
    Manager m;

    m.work();
    e.work();
}





/*
3. Create a base class Employee with the following members:
- name (string)
- salary (int)
- A virtual function calculateBonus() that prints Base employee bonus is 1000 .
Create two derived classes:
1. Manager – overrides calculateBonus() to print Manager bonus is 5000 .
2. Developer – overrides calculateBonus() to print Developer bonus is 3000 .

Tasks:
- Create objects of Manager and Developer.
- Store their addresses in an array of Employee*.
- Loop through the array and call calculateBonus() for each object.
- Print each employee’s name, salary, and their bonus.
*/

#include <iostream>
#include <string>
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

    virtual void calculateBonus()
    {
        cout << "Base Employee Bonus: 1000" << endl;
    }
    virtual void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Salary:  " << salary << endl;
    }
};

class Manager : public Employee 
{
    public:
    Manager(string name, int salary) : Employee(name, salary) {}
    Manager() = default;

    void calculateBonus() override
    {
        cout << "Manager Bonus: 5000" << endl;
    }
    void printInfo() override
    {
        cout << "Name: " << name << endl;
        cout << "Salary:  " << salary << endl;
    }
};

class Developer : public Employee
{
    public:
    Developer(string name, int salary) : Employee(name, salary) {}
    Developer() = default;

    void calculateBonus() override
    {
        cout << "Developer Bonus: 3000" << endl;
    }
    void printInfo() override
    {
        cout << "Name: " << name << endl;
        cout << "Salary:  " << salary << endl;
    }
};

int main ()
{
    int i;
    Employee* arr[2];
    Manager m("Khizer Khan", 3000);
    Developer d("Ammar Khan", 5000);

    arr[0] = &m;
    arr[1] = &d;

    for(i = 0; i < 2; i++)
    {
        arr[i]->printInfo();
        arr[i]->calculateBonus(); 
    }

    return 0;
}
// Inheritance -- Creating derived classes which inherit properties from their derived classes

// Parent Class (Base class) -- Inherited FROM
// Child Class (Derived Class) -- One that inherits from the parent class

// Protected -- Allows us to access parent class' private attributes in child class but not the main code
// Override -- Allows us to have a function in the base class with the same name basically allowing us to use it in either context by first initializing it

#include <iostream>
#include <string>
using namespace std;

class Person
{
    protected:
    std::string fName;
    std::string lName;

    public:
    Person(std::string f, std::string l)
    {
        fName = f;
        lName = l;
    }
    Person() = default;

    void setfName (std::string x)
    {
        fName = x;
    }
    void setlName (std::string y)
    {
        lName = y;
    }
    virtual void getInfo()
    {
        std::cout << "Name: " << fName << " " << lName << std::endl;
    }
};

class Employee : public Person 
{
    std::string department;

    public:
    Employee(std::string firstName, std::string lastName, std::string d) : Person(firstName, lastName)
    {
        department = d;
    }
    Employee() = default;

    void setDepartment(std::string u)
    {
        department = u;
    }
    std::string getDepartment()
    {
        return department;
    }
    void getInfo() override
    {
        std::cout << "Name: " << fName << " " << lName << std::endl;
        std::cout << "Department: " << department << std::endl; 
    }
};

int main ()
{
    Employee e;
    Person p;

    e.setfName("Omar");
    e.setlName("Khan");
    e.setDepartment("Computer Science");
    p.setfName("Omar");
    p.setlName("Khan");

    p.getInfo();
    e.getInfo();

    return 0;
}
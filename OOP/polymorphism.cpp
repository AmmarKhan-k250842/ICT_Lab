// Polymorphism -- Treating multiple objects as thier base object type

#include <iostream>
#include <string>
#include <vector>
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
    std::vector <Person*> people;

    Employee e("Omar", "khan", "Computer Science");
    Person p("Ammar", "Khan");

    people.push_back(&e);
    people.push_back(&p);

    for (auto person: people)
    {
        person->getInfo();
    }

    return 0;
}
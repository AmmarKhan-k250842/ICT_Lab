#include <iostream>
#include <string>
using namespace std;

// Encapsulation -- Granting access to private variables only through controlled public functions

class Person
{
    private:
    std::string fName;
    std::string lName;

    public:

    // Constructor
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
    std::string getFullName()
    {
        return fName + " " + lName;
    }
};

int main ()
{
    std::string fullName, first, last;

    std::cout << "Enter your first name: ";
    std::cin >> first;
    std::cout << "Enter your last name: ";
    std::cin >> last;

    Person p(first, last);
    
    std::cout << p.getFullName() << std::endl;

    return 0;
}
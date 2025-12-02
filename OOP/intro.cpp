#include <iostream>
#include <string>
using namespace std;

class Person 
{
    public:
    std::string fName;
    std::string lName;

    void getName ()
    {
        std::cout << fName << " " << lName << std::endl;
    }
};

int main ()
{
    // Class -- Defines a structure
    // Object -- A specific example of that structure
    // Instance -- Another name for object
    // Methods -- Functions 

    // Abstraction -- A process where you make something easy by hiding the complications
    // Encapsulation -- Granting access to private variables only through controlled public functions
    // Inheritance -- Creating derived classes which inherit properties from their derived classes 
    // Polymorphism -- Treating multiple objects as thier base object type 

    Person p;
    p.fName = "Ammar";
    p.lName = "Khan";

    Person p2;
    p2.fName = "Khizer";
    p2.lName = "Khan";

    p2.getName();
    p.getName();

    return 0;
}
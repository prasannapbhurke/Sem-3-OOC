//13.2 Create a custom exception class InvalidAgeException and use it to validate the age input for a Person class.

#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public exception 
{
public:
    const char* what() const noexcept override 
    {
        return "Invalid Age! Age must be 18 or above.";
    }
};

class Person 
{
    string name;
    int age;
public:
    void getData() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;

        try {
            if (age < 18)
                throw InvalidAgeException();
            cout << "Person is eligible (Age valid).\n";
        }
        catch (InvalidAgeException &e) {
            cout << "Exception: " << e.what() << endl;
        }
    }
};

int main() 
{
    Person p;
    p.getData();
    return 0;
}

/*13. Implement a program that uses try, catch, and throw to handle division by zero exceptions. 
Create a custom exception class InvalidAgeException and use it to validate the age input for a Person class.*/

#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try 
    {
        if (b == 0)
            throw "Division by zero not allowed!";
        cout << "Result = " << a / b << endl;
    }
    catch (const char *msg) 
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}

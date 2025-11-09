//9. Implement a program to overload insertion and extraction operators.

#include <iostream>
using namespace std;

class Student 
{
    string name;
    int rollNo;
    float marks;

public:
    // Overload extraction operator (input)
    friend istream& operator>>(istream &in, Student &s) 
    {
        cout << "Enter Name: ";
        in >> s.name;
        cout << "Enter Roll No: ";
        in >> s.rollNo;
        cout << "Enter Marks: ";
        in >> s.marks;
        return in;
    }

    // Overload insertion operator (output)
    friend ostream& operator<<(ostream &out, const Student &s) 
    {
        out << "\n--- Student Details ---\n";
        out << "Name: " << s.name << endl;
        out << "Roll No: " << s.rollNo << endl;
        out << "Marks: " << s.marks << endl;
        return out;
    }
};

int main() 
{
    Student s;
    cin >> s;     // Calls overloaded >> operator
    cout << s;    // Calls overloaded << operator
    return 0;
}

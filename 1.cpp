//1.
//Implement a c++ program to define a Student class with attributes like name,
//roll number, and marks. Implement member functions to input and display student details

#include <iostream>
using namespace std;

class Student 
{
    string name;
    int rollNo;
    float marks;

public:
    void input() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() 
    {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() 
{
    Student s;
    s.input();
    s.display();
    return 0;
}

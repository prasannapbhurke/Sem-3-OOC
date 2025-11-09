//7_2 Implement a program to perform Hybrid Inheritance.

#include <iostream>
using namespace std;

class Person 
{
protected:
    string name;
public:
    void getName() 
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student : virtual public Person 
{
protected:
    int rollNo;
public:
    void getRollNo() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class Employee : virtual public Person 
{
protected:
    int empId;
public:
    void getEmpId() {
        cout << "Enter Employee ID: ";
        cin >> empId;
    }
};

class TeachingAssistant : public Student, public Employee 
{
public:
    void display() {
        cout << "\n--- Teaching Assistant Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Employee ID: " << empId << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.getName();
    ta.getRollNo();
    ta.getEmpId();
    ta.display();
    return 0;
}

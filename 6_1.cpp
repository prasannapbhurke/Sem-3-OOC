//6. Implement a program to create a Student class from which to derive Test class and from Test class derive Result class. 

#include <iostream>
using namespace std;

class Student 
{
protected:
    int rollNo;
    string name;
public:
    void getStudentData() 
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }
    void showStudentData() 
    {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

class Test : public Student
{
protected:
    float marks1, marks2;
public:
    void getMarks() 
    {
        cout << "Enter marks for two subjects: ";
        cin >> marks1 >> marks2;
    }
    void showMarks() 
    {
        cout << "Marks: " << marks1 << ", " << marks2 << endl;
    }
};

class Result : public Test 
{
    float total;
public:
    void calculate() 
    {
        total = marks1 + marks2;
    }
    void showResult() 
    {
        showStudentData();
        showMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() 
{
    Result r;
    r.getStudentData();
    r.getMarks();
    r.calculate();
    r.showResult();
    return 0;
}

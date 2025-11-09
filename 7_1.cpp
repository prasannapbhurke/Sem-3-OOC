//7.1 Implement a program to perform multiple inheritance for an Educational Institute database.

#include <iostream>
using namespace std;

class Student {
protected:

    string name;
    int rollNo;
public:
    void getStudentInfo() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class Course {
protected:
    string courseName;
public:
    void getCourseInfo() 
    {
        cout << "Enter Course Name: ";
        cin >> courseName;
    }
};

class Result : public Student, public Course 
{
    float marks;
public:
    void getResult() 
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() 
    {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Course: " << courseName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() 
{
    Result r;
    r.getStudentInfo();
    r.getCourseInfo();
    r.getResult();
    r.display();
    return 0;
}

/*11. Implement a program to create a base class Employee with a virtual function calculateSalary(). Derive two classes SalariedEmployee, HourlyEmployee, 
and CommissionedEmployee and implement the calculateSalary() function in each derived class.*/

#include <iostream>
using namespace std;

class Employee 
{
public:
    virtual void calculateSalary() 
    {   // Virtual function
        cout << "Calculating salary...\n";
    }
};

class SalariedEmployee : public Employee 
{

    float monthlySalary;
public:
    void getData() 
    {
        cout << "Enter Monthly Salary: ";
        cin >> monthlySalary;
    }
    void calculateSalary() override 
    {
        cout << "Salaried Employee Salary = " << monthlySalary << endl;
    }
};

class HourlyEmployee : public Employee 
{
    int hours;
    float rate;
public:
    void getData() 
    {
        cout << "Enter Hours Worked and Hourly Rate: ";
        cin >> hours >> rate;
    }
    void calculateSalary() override 
    {
        cout << "Hourly Employee Salary = " << hours * rate << endl;
    }
};

class CommissionedEmployee : public Employee 
{
    float sales, commissionRate;
public:
    void getData() 
    {
        cout << "Enter Total Sales and Commission Rate (%): ";
        cin >> sales >> commissionRate;
    }
    void calculateSalary() override 
    {
        cout << "Commissioned Employee Salary = " << (sales * commissionRate / 100) << endl;
    }
};

int main() {
    Employee *e;   // Base class pointer

    SalariedEmployee s;
    HourlyEmployee h;
    CommissionedEmployee c;

    cout << "--- Salaried Employee ---\n";
    s.getData();
    e = &s;
    e->calculateSalary();

    cout << "\n--- Hourly Employee ---\n";
    h.getData();
    e = &h;
    e->calculateSalary();

    cout << "\n--- Commissioned Employee ---\n";
    c.getData();
    e = &c;
    e->calculateSalary();

    return 0;
}

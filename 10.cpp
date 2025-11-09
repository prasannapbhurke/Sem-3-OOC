/*10. Implement a program to create a base class Shape with a virtual function area(). 
Derive two classes Circle and Rectangle from Shape and implement the area() function in each derived class.*/

#include <iostream>
using namespace std;

class Shape 
{
public:
    virtual void area() 
    {      // Virtual function
        cout << "Area of shape\n";
    }
};

class Circle : public Shape 
{
    float radius;
public:
    void getData() 
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void area() override 
    {     // Override virtual function
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape 
{
    float length, width;
public:
    void getData() 
    {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }

    void area() override 
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() 
{
    Shape *s;  // Base class pointer

    Circle c;
    Rectangle r;

    cout << "--- Circle ---\n";
    c.getData();
    s = &c;
    s->area();   // Calls Circle's area()

    cout << "\n--- Rectangle ---\n";
    r.getData();
    s = &r;
    s->area();   // Calls Rectangle's area()

    return 0;
}

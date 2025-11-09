/*4 Implement a Rectangle class with attributes for length and width. Include constructors, a destructor, 
and member functions to calculate the area and perimeter.*/

#include <iostream>
using namespace std;

class Rectangle 
{
    float length, width;

public:
    // Default constructor
    Rectangle() 
    {
        length = width = 0;
        cout << "Default constructor called\n";
    }

    // Parameterized constructor
    Rectangle(float l, float w) 
    {
        length = l;
        width = w;
        cout << "Parameterized constructor called\n";
    }

    // Member functions
    float area() 
    {
        return length * width;
    }

    float perimeter() 
    {
        return 2 * (length + width);
    }

    void display() 
    {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }

    // Destructor
    ~Rectangle() 
    {
        cout << "Destructor called for Rectangle\n";
    }
};

int main() {
    Rectangle r1;          // calls default constructor
    Rectangle r2(5, 3);    // calls parameterized constructor

    r2.display();

    return 0;
}

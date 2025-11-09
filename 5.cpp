//5 Implement a program to find out the area of different shapes using function overloading.

#include <iostream>
using namespace std;

class Shape 
{
public:
    // Area of circle
    float area(float radius) 
    {
        return 3.14 * radius * radius;
    }

    // Area of rectangle
    float area(float length, float width) 
    {
        return length * width;
    }

    // Area of triangle
    float area(float base, float height, int) 
    {
        return 0.5 * base * height;
    }
};

int main() 
{
    Shape s;

    cout << "Area of Circle: " << s.area(5) << endl;
    cout << "Area of Rectangle: " << s.area(4, 6) << endl;
    cout << "Area of Triangle: " << s.area(3, 7, 0) << endl;

    return 0;
}

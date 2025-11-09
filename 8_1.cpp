//8 Implement a program to overload all unary and binary operators. s
#include <iostream>
using namespace std;

class Complex 
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0) 
    {
        real = r;
        imag = i;
    }

    // Unary operator overloading
    Complex operator-() 
    {
        return Complex(-real, -imag);
    }

    // Binary operator overloading (addition)
    Complex operator+(Complex c) 
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Binary operator overloading (subtraction)
    Complex operator-(Complex c) 
    {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3), c2(2, 4);

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex neg = -c1;

    cout << "\nSum = "; sum.display();
    cout << "Difference = "; diff.display();
    cout << "Negation of c1 = "; neg.display();

    return 0;
}

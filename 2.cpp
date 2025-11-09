//2 
//Implement a program to create a Complex class to represent complex numbers. 
//Implement member functions for addition, subtraction, and display of complex numbers.


#include <iostream>
using namespace std;

class Complex 
{
    float real, imag;

public:
    void input() 
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display() 
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c) 
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex subtract(Complex c) 
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, sum, diff;

    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();

    sum = c1.add(c2);
    diff = c1.subtract(c2);

    cout << "\nSum = ";
    sum.display();
    cout << "Difference = ";
    diff.display();

    return 0;
}

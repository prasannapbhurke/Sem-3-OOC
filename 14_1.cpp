//Implement a program using a template function to find the maximum of two numbers.

#include <iostream>
using namespace std;

// Template function
template <class T>
T findMax(T a, T b) 
{
    return (a > b) ? a : b;
}

int main() 
{
    cout << "Max of 10 and 20 = " << findMax(10, 20) << endl;
    cout << "Max of 5.6 and 2.3 = " << findMax(5.6, 2.3) << endl;
    cout << "Max of 'A' and 'Z' = " << findMax('A', 'Z') << endl;
    return 0;
}
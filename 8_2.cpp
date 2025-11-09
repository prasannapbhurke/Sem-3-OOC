//8.2 Implement a program to overload relational operators.

#include <iostream>
using namespace std;

class Number 
{
    int value;

public:
    Number(int v = 0) 
    {
        value = v;
    }

    bool operator>(Number n) 
    {
        return value > n.value;
    }

    bool operator<(Number n)
    {
        return value < n.value;
    }

    bool operator==(Number n) 
    {
        return value == n.value;
    }
};

int main() 
{
    Number n1(10), n2(20);

    cout << "n1 = 10, n2 = 20\n";

    if (n1 > n2)
        cout << "n1 is greater than n2\n";
    else if (n1 < n2)
        cout << "n1 is less than n2\n";
    else if (n1 == n2)
        cout << "n1 is equal to n2\n";

    return 0;
}

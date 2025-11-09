//14.2 Create a program that demonstrates the use of STL containers (vector, list, map) for basic operations

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() 
{
    // Vector example
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // List example
    list<string> names = {"Alice", "Bob"};
    names.push_back("Charlie");
    cout << "List elements: ";
    for (string n : names) cout << n << " ";
    cout << endl;

    // Map example
    map<int, string> students;
    students[1] = "John";
    students[2] = "Emma";
    students[3] = "Ryan";

    cout << "Map elements:\n";
    for (auto pair : students)
        cout << "Roll " << pair.first << " -> " << pair.second << endl;

    return 0;
}
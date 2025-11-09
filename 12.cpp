//12. Implement a program to write user input data to a file and then read it back from the file.

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    string data;

    // Write data to file
    ofstream outFile("info.txt");
    cout << "Enter some text: ";
    getline(cin, data);
    outFile << data;
    outFile.close();
    cout << "Data written to file.\n";

    // Read data back from file
    ifstream inFile("info.txt");
    cout << "\nReading from file:\n";
    while (getline(inFile, data)) {
        cout << data << endl;
    }
    inFile.close();

    return 0;
}

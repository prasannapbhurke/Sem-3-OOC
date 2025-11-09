//6_2 Implement a class hierarchy for a simple library system with a base class LibraryItem and derived classes Book and Magazine

#include <iostream>
using namespace std;

class LibraryItem 
{
protected:
    string title;
    int itemID;
public:
    void getData() 
    {
        cout << "Enter Item Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Item ID: ";
        cin >> itemID;
    }
    void showData() 
    {
        cout << "Title: " << title << ", ID: " << itemID << endl;
    }
};

class Book : public LibraryItem 
{
    string author;
public:
    void getBookData() 
    {
        getData();
        cout << "Enter Author: ";
        cin.ignore();
        getline(cin, author);
    }
    void showBookData() 
    {
        showData();
        cout << "Author: " << author << endl;
    }
};

class Magazine : public LibraryItem 
{
    int issueNo;
public:
    void getMagazineData() 
    {
        getData();
        cout << "Enter Issue Number: ";
        cin >> issueNo;
    }
    void showMagazineData() 
    {
        showData();
        cout << "Issue No: " << issueNo << endl;
    }
};

int main() 
{
    Book b;
    Magazine m;

    cout << "\n--- Enter Book Details ---\n";
    b.getBookData();

    cout << "\n--- Enter Magazine Details ---\n";
    m.getMagazineData();

    cout << "\n--- Book Info ---\n";
    b.showBookData();

    cout << "\n--- Magazine Info ---\n";
    m.showMagazineData();

    return 0;
}

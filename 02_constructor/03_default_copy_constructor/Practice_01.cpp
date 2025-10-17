// Write a class Book tat has attributes for pages, price and title. It has two functions to input the values and displays the values. Create three objects of the class and input values.
#include<iostream>
using namespace std;
class Book{
    private:
    int pages;
    float price;
    string title;
    public:
    Book() // Default constructor
    {
        pages = 0;
        price = 0.0;
        title = "Unknown";
    }
    Book(int p, float pr, string t) // Parameterized constructor
    {
        pages = p;
        price = pr;
        title = t;
    }
    void input() // Function to input values
    {
        cout << "Enter pages: ";
        cin >> pages;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter title: ";
        cin.ignore(); // To ignore the newline character left in the buffer
        getline(cin, title);
    }
    void display() // Function to display values
    {
        cout << "Title: " << title << endl;
        cout << "Pages: " << pages << endl;
        cout << "Price: $" << price << endl;
    }
};
int main()
{
    Book book1; // Using default constructor
    Book book2(300, 19.99, "C++ Programming"); // Using parameterized constructor
    Book book3; // Using default constructor

    cout << "Enter values for book1:" << endl;
    book1.input();
    
    cout << "Enter values for book3:" << endl;
    book3.input();

    cout << "\nDetails of book1:" << endl;
    book1.display();
    
    cout << "\nDetails of book2:" << endl;
    book2.display();
    
    cout << "\nDetails of book3:" << endl;
    book3.display();

    return 0;
}
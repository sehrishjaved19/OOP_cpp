// Write a class Mobile with three data members: ModelNumber, Storage (in GB), and Price.
// It also contains the following member functions:
//  --> The input() function is used to take values from the user.
//  --> The display() function is used to show values.
//  --> The setValues() function is used to assign values using parameters.
//  --> The getPrice() function returns the price of the mobile.
// The program should create two objects of the class and display the details
// of the mobile with higher storage.

// NOTE:

// input()       To take input (assign values using cin)
// display()     To print all values of the object
// setValues()   To set data using function parameters (no cin)
// getPrice()    To return the price (used for comparison if needed)

#include<iostream>
using namespace std;

class Mobile {
private:
    int ModelNumber;
    int Storage;   // in GB
    float Price;

public:
    void input() {
        cout << "Enter Model Number: ";
        cin >> ModelNumber;
        cout << "Enter Storage (GB): ";
        cin >> Storage;
        cout << "Enter Price: ";
        cin >> Price;
    }

    void display() {
        cout << "Model Number: " << ModelNumber << endl;
        cout << "Storage: " << Storage << " GB" << endl;
        cout << "Price: $" << Price << endl;
    }

    void setValues(int m, int s, float p) {
        ModelNumber = m;
        Storage = s;
        Price = p;
    }

    int getStorage() {
        return Storage;
    }
};

int main() {
    Mobile m1, m2;

    m1.input();  // taking user input
    m2.setValues(102, 128, 699.99);  // setting fixed values

    cout << "\nThe details of the mobile with higher storage:\n";

    if (m1.getStorage() > m2.getStorage())
        m1.display();
    else
        m2.display();

    return 0;
}

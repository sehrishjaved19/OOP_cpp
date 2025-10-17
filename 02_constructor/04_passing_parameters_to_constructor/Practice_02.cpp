// Write a class TV that contains attributes of Brand Name, Model and Retail Price. Write a method to display all attributes and a method to change the attributes, Also write a constructor to initialize all the attributes.
#include<iostream>
using namespace std;

class TV {
    private:
    string Brand_Name; // Brand name of the TV
    string Model;      // Model of the TV
    float Price;       // Retail price of the TV
    public:
        // Constructor to initialize all attributes
        TV(string brand, string model, float price) {
            Brand_Name = brand;
            Model = model;
            Price = price;
        }

        // Method to display all attributes
        void display() {
            cout << "Brand Name: " << Brand_Name << endl;
            cout << "Model: " << Model << endl;
            cout << "Retail Price: " << Price << endl;
        }

        // Method to change all attributes
        void changeAttributes(string brand, string model, float price) {
            Brand_Name = brand;
            Model = model;
            Price = price;
        }
};

int main() {
    // Create a TV object and display its attributes
    TV tv1("Samsung", "QLED", 120000.0);
    tv1.display();

    // Change attributes and display again
    tv1.changeAttributes("LG", "OLED", 150000.0);
    cout << "\nAfter changing attributes:\n";
    tv1.display();

    return 0;
}
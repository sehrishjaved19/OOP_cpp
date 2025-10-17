// Write a program that declarea a class with one integer data member and two member functions in() and out() to input data in data member.
#include <iostream>
using namespace std;
class Test { // Define a class named Test
private:
    int n;// Data member: holds an integer value
public:
    void in() {
        cout << "Enter an integer: ";
        cin >> n;// Store input in data member 'n'
    }
    void out() { //Member function to display the stored integer
        cout << "The integer is: " << n << endl;
    }
};
int main() {
    Test obj;// Create an object of class Test
    obj.in();// Call the in() function to take input
    obj.out();// Call the out() function to display the value
    return 0;// Indicate successful program termination
}
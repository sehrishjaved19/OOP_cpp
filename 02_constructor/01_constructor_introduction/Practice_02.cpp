//Write a class that contains two integer data members which are initialized to 100 when an object of that class is created. It has a member function  avg that displays the average of data members.
#include<iostream>
using namespace std;
class Number
{
    private:
    int a, b;
    public:
    Number()
    {
        a = b = 100; // Initializing both data members to 100
    }
    void avg()
    {
        cout<<"a = "<<a<<"\nb = "<<b<<endl; // Displaying the values of a and b
        cout << "Average of a and b is: " << (a + b) / 2.0 << endl; // Calculating and displaying the average
    }
};
int main()
{
    Number num; // Creating an object of Number class
    num.avg(); // Calling the avg function to display the average
    return 0; // Returning 0 to indicate successful execution
}
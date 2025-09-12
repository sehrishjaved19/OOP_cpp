// Write a class with an integer data member, a function to input and a function to display it. Create an object of the class using pointer and class its member functions.
#include<iostream>
using namespace std;
class Test
{
    private:
    int n;
    public:
    void in()
    {
        cout<<"Enter number: ";
        cin>>n;
    }
    void out()
    {
        cout<<"The value of n = "<<n;
    }
};
int main()
{
    Test *ptr; // pointer to an object of class Test
    ptr = new Test; // dynamically create object using 'new'. new Test dynamically creates an object of type Test in heap memory (not stack).The address of that object is returned. ptr stores that address.Now ptr points to the new object.
    ptr ->in(); // * (Dereference Operator) Used to access the value stored at an address. call input function through pointer
    ptr ->out();  // call output function through pointer
    return 0;
}
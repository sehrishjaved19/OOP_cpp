// Write a class that displays a message on screen whenever an object of that class is created.
#include<iostream>
using namespace std;
class Hello
{
    private:
    int n;
    // In this program, the variable int n is declared as a private data member of the Hello class, but it is not used anywhere in the code. It is not assigned a value, nor is it accessed or manipulated. You can safely remove it without affecting the program’s functionality.
    public:
    Hello()
    {
        cout<<"Object Created ..."<<endl;

    }
};
int main()
{
    Hello a, b, c;
    return 0;
}
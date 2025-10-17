// Write a program that declares two classes. The parent class is called Simple that has two data members a and b to store two numbers. It also has four member functions:
// --> The add() function adds two numbers and displays the result.
// --> The sub() function subtracts two numbers and displays the result.
// --> The mul() function multiplies two numbers and displays the result.
// --> The div() function divides two numbers and displays the result.
// The child class is called Complex that overrides all four functions. Each function in the child class checks the values of data members. It calls the correspinding member function in the parent class if the values are greater than 0. Otherwise it Display error message.
#include<iostream>
using namespace std;
class Simple{
    protected:
    int a, b;
    public:
    Simple()
    {
        a=b=0;
    }
    void in()
    {
        cout<<"Enter a number: ";
        cin>>a;
        cout<<"Enter another number: ";
        cin>>b;
    }
    void add()
    {
        cout<<"a + b = "<<a+b<<endl;
    }
    void sub()
    {
        cout<<"a - b = "<<a-b<<endl;
    }
    void mul()
    {
        cout<<"a * b = "<<a*b<<endl;
    }
    void div()
    {
        cout<<"a / b = "<<a/b<<endl;
    }
};
class Complex : public Simple
{
    public:
    void add()
    {
        if(a<=0 || b<=0)
        cout<<"Invalid values!"<<endl;
        else
        Simple :: add();
    }
    void sub()
    {
        if(a<=0 || b<=0)
        cout<<"Invalid values!"<<endl;
        else
        Simple :: sub();
    }
    void mul()
    {
        if(a<=0 || b<=0)
        cout<<"Invalid values!"<<endl;
        else
        Simple :: mul();
    }
    void div()
    {
        if(a<=0 || b<=0)
        cout<<"Invalid values!"<<endl;
        else
        Simple :: div();
    }
};
int main()
{
    Complex obj;
    obj.add();// will retuen the statement , invalid values.
    obj.in();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}
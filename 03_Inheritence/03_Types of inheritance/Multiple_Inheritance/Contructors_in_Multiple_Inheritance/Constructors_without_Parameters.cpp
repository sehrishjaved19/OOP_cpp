// The constructors without parameters can be called from derived class by writing a colon after class constructor and the name of constructor in parent class.
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Constructor of class A..."<<endl;
    }
};
class B
{
    public:
    B()
    {
        cout<<"Constructor of class B..."<<endl;
    }
};
class C: public A, public B
{
    public:
    C() : B(), A()
    {
        cout<<"Constructor in class C..."<<endl;
    }
};
int main()
{
    C obj; // Remember: a constructor is called automatically when an object of that class is created.
    return 0;
}

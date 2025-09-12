// Write a program that declares two classes and defines a relationship, between them using pub;lic, inheritance.
#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    void in()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
    void out()
    {
        cout<<"The value of a is "<<a<<endl;
    }   
};
class B : public A{
    private:
    int b;
    public:
    void in()
    {
       A::in();
       cout<<"Enter b: ";
       cin>>b;
    }
    void out()
    {
        A::out();
        cout<<"The value of b is "<<b<<endl;
    }
};
class C : public B{
    private:
    int c;
    public:
    void in()
    {
       B::in(); // Following ststement decared in in() function of C moves control to Class B.
       cout<<"Enter c: ";
       cin>>c;
    }
    void out()
    {
        B::out();
        cout<<"The value of c is "<<c<<endl;
    }
};

int main()
{
    C obj;
    obj.in();
    obj.out();
    return 0;
}
// Write a program that declares two classes and defines a relationship, between them using pub;lic, inheritance.
#include<iostream>
using namespace std;
class Parent
{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
};
class Child : public Parent{
    public:
    void in()
    {
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
    }
    void out()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main()
{
    Child obj;
    obj.in();
    obj.out();
    return 0;
}
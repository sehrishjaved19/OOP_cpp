// The member Functions in multilevelinheritance can pass the value to the member functions of parent classes. When a function is overridden, the member function in child class calls the member function in the parent class. It can also send parameter values to the parent class functions.
#include<iostream>
using namespace std;
class  A
{
    private:
    int a;
    public: 
    void set(int x)
    {
        a = x;
    }
    void out()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};
class B : public A
{
    private:
    int b;
    public:
    void set(int m, int n)
    {
        A::set(m);
        b = n;
    }
    void out()
    {
        A::out();
        cout<<"The value of b is "<<b<<endl;
    }
};
class C : public B
{
    private:
    int c;
    public:
    void set(int g, int h, int k)
    {
        B::set(g, h);
        c = k;
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
    obj.set(1,2,3);
    obj.out();
    return 0;
}
#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    void in()
    {
        cout<<"Enetr a: ";
        cin>>a;
    }
    void out()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};
class B
{
    private:
    int b;
    public:
    void input()
    {
        cout<<"Enetr b: ";
        cin>>b;
    }
    void output()
    {
        cout<<"The value of b is "<<b<<endl;
    }
};
class C: public A,public B
{
    private:
    int c;
    public:
    void get()
    {
        A::in();
        B::input();
        cout<<"Enter c: ";
        cin>>c;
    }
    void show()
    {
        A::out();
        B::output();
        cout<<"The value of c is "<<c<<endl;
    }
};
int main()
{
    C obj;
    obj.get();
    obj.show();
    return 0;
}
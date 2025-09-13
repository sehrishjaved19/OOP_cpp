#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"Parent class A..."<<endl;
    }
};
class B : public A
{
    public:
    void show()
    {
        cout<<"Child class B..."<<endl;
    } 
};
class C : public A
{
    public:
    void show()
    {
        cout<<"Child class C..."<<endl;
    } 
};
int main()
{
    A obj1;
    B obj2;
    C obj3;
    A *ptr;
    ptr = &obj1;
    ptr -> show();
    ptr = &obj2;
    ptr -> show();
    ptr = &obj3;
    ptr -> show();
    return 0;
}
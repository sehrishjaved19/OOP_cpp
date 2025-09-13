#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Parent class A..."<<endl;
    }
};
class B : public A
{
    public:
    void show()
    {
        cout<<"Parent class B..."<<endl;
    }
};
class C : public B
{
    public:
    void show()
    {
        cout<<"Parent class C..."<<endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    C obj3;
    A *ptr;  // * (Dereference Operator) Used to access the value stored at an address. call input function through pointer
    ptr = &obj1; //&obj gives the address of that object
    ptr->show();
    ptr = &obj2;
    ptr->show();
    ptr = &obj3;
    ptr->show(); //-> (It is the member access Operator that is used to access a member of object.)
    return 0;
}

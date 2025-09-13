#include<iostream>
using namespace std;
class Parent 
{
    public:
    virtual void show()=0;
};
class Child1 : public Parent
{
    public:
    void show()
    {
        cout<<"Child1 class..."<<endl;
    }
};
class Child2 : public Parent
{
    public:
    void show()
    {
        cout<<"Child2 class..."<<endl;
    }
};
int main()
{
    Parent *ptr[2];
    ptr[0] = new Child1;
    ptr[1] = new Child2;
    ptr[0] -> show();
    ptr[1] -> show();
    return 0;
}


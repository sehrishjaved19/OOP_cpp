#include<iostream>
using namespace std;
class Parent
{
    public: 
    virtual void show()
    {
        cout<<"Parent class...\n";
    }
};
class Child1 : public Parent
{
    public:
    void show()
    {
        cout<<"Child1 class ...\n";
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
    Parent *ptr[5];
    int op, i;
    cout<<"Enter 1 for parent, 2 for Child1 and 3 for Child3."<<endl;
    for (i=0; i<3; i++)
    {
        cout<<"Which object to create?";
        cin>>op;
        if(op == 1)
        ptr[i] = new Parent;
        else if(op == 2)
        ptr[i] = new Child1;
        else
        ptr[i] = new Child2;
    }
    for(i = 0; i<3; i++)
    ptr[i]-> show();

    return 0;
}
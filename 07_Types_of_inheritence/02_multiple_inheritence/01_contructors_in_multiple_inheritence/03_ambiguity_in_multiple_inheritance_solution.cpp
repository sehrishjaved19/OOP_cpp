// An important issue in multiple inheritance is the issue of Ambiguity.The ambguity is created in multiple inheritance if the names of functions are similar in two or more parent classes. The compiler cannot determine which function to exceute when the object of derived class attempt to execute such function.
// --> Ambguity means lack of clarity because of multiple possible meanings.

// The ambiguity can be removed from the program using scope resolution operator. 
// e.g 
// obj.A::show();  A--> is the name of class
// obj.B::show();
// Another way to remove ambguity in multiple inheritance is to overload both functions in the derived class as follow:
#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Class A"<<endl;
    }
};
class B
{
    public:
    void show()
    {
        cout<<"Class B"<<endl;
    }
};
class C : public A, public B
{
    public:
    void show()
    {
        A::show();
        B::show();
        cout<<"Class C"<<endl;
    }
};
int main()
{
    C obj;
    obj.show();
    return 0;
}

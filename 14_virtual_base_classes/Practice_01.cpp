#include<iostream>
using namespace std;
class Parent{
    protected:
    int n;

};
class Child1 : virtual public Parent// this use of virtual keyword, allow these classes inherit only one copy of the data member n to remove ambiguity.
{};
class Child2 : virtual public Parent
{};
class Baby : public Child1, public Child2
{
    public:
    void set()
    {
        n = 10;
        cout<<"n = "<<n<<endl;
    }
};
int main()
{
    Baby obj;
    obj.set();
    return 0;
}

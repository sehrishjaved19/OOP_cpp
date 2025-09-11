// Write a program that overloads binary addition operator + .
#include<iostream>
using namespace std;
class Add
{
    private:
    int a, b;
    public:
    Add()
    {
        a = b = 0;
    }
    void in()
    {
        cout<<"Enter an integer(a): ";
        cin>>a;
        cout<<"Enter another integer(b): ";
        cin>>b;
    }
    void show ()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    Add operator +(Add p) 
     {
        Add temp;
        temp.a = p.a + a;
        temp.b = p.b + b;
        return temp;
    }
};
//Parameter → (Add p)
// This is the right-hand operand of the + operation.
// Example:
// z = x + y;
// Here, x is the object that calls the operator function.
// y is passed as the argument p.
// So inside the function:
// a and b refer to x.a and x.b.
// p.a and p.b refer to y.a and y.b.
int main()
{
    Add x,y,z;
    x.in();
    y.in();
    z = x + y;
    //x is the calling object (left operand).
    // y is passed as parameter p (right operand).
    x.show();
    y.show();
    z.show();
    return 0;
}
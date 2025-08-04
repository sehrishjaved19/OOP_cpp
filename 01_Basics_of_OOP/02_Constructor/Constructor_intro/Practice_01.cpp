// Write a class that displays a message on screen whenever an object of that class is created.
#include<iostream>
using namespace std;
class Hello
{
    private:
    int n;
    public:
    Hello()
    {
        cout<<"Object Created ..."<<endl;

    }
};
int main()
{
    Hello a, b, c;
    return 0;
}
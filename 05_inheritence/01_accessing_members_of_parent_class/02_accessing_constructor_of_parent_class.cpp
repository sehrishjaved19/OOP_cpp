#include<iostream>
using namespace std;
class Parent
{
    protected:
    int n;
    public:
    Parent()
    {
        n = 0;
    }
    Parent(int p)
    {
        n = p;
    }
    void show()
    {
        cout<<"n = "<<n<<endl;
    }
};
class Child : public Parent
{
    private:
    char ch;
    public:
    Child() : Parent()
    {
        ch = 'x';
    }
    Child(char c, int m) : Parent(m)
    {
        ch = c;
    }
    void display()
    {
        cout<<"ch = "<<ch<<endl;
    }
};
int main()
{
    Child obj1, obj2('@', 100);
    cout<<"Obj 1 is as follows: \n";
    obj1.show();
    obj1.display();
    cout<<"\nObj2 is as follows: \n";
    obj2.show();
    obj2.display();
    return 0;
}
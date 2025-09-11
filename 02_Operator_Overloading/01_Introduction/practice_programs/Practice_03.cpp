// Write a program that overloads postfix increment operator to work with user-defined objects.
#include<iostream>
using namespace std;
class Count{
    private:
    int n;
    public:
    Count()
    {
        n = 0;
    }
    void show()
    {
        cout<<"n = "<<n<<endl;
    }
    Count operator ++()
    {
        Count temp;
        n = n+1;
        temp.n = n;
        return temp;
    }
    Count operator ++(int) //The keyword int in the following statement indicates that operator is overloaded for postfix. The use of int in Parenthesis is not an integer parameter. It is simple a flog to compiler that indicates that the operator is overloaded for postfix notation.
    {
        Count temp;
        n = n+1;
        temp.n = n;
        return temp;
    }
};
int main()
{
    Count x;
    x.show();
    ++x;
    x++;
    x. show();
    return 0;

}
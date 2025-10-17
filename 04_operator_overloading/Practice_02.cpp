// Write a program that overloads increment operator to work with user-defined objects. The overloaded function should return an object after incrementing the data member.
#include<iostream>
using namespace std;
class Count
{
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
    Count operator ++(){
        Count temp; //Temperory object
        n = n+1;
        temp.n = n;
        return temp;
    }
};
int main()
{
    Count x, y;
    x.show();
    y.show();
    y = ++x;
    x.show();
    y.show();
    return 0;

}
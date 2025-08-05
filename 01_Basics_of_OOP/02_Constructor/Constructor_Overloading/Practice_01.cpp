// Write a class that has num and ch as data members. A constructor with no parameters initializes num to 0 and ch to 'x', A constructor with two parameters initializes data members with the given values and member funtion show displays the values of data members.
#include<iostream>
using namespace std;
class Over{
    private:
    int num;
    char ch;
    public:
    Over()
    {
        num = 0;
        ch = 'x';
    }
    Over(int n, char c)
    {
        num = n;
        ch = c;
    }
    void show()
    {
        cout<<"num = "<<num<<endl;
        cout<<"ch = "<<ch<<endl;
    }
    
};
int main()
{
    Over first;
    Over second(100,'s');
    cout<<"The content of constructoir with no parametrs are: "<<endl;
    first.show();
    cout<<"The content of constructor with parameters are: "<<endl;
    second.show();
    return 0;
}
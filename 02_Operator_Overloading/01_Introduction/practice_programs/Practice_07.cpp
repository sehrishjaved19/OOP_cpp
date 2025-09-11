// Write a program that overloads arithmetic assignment operator to work with user defined objects.
#include<iostream>
using namespace std;
class Read
{
    private:
    int days, pages;
    public:
    Read()
    {
        days = pages = 0;
    }
    void in()
    {
        cout<<"How many days have you read? ";
        cin>>days;
        cout<<"How many pages have yoy read?";
        cin>>pages;
    }
    void show()
    {
        cout<<"You have read "<<pages<<" pages in "<<days<<" days"<<endl;
    }
    void operator += (Read r)
    {
        days = days + r.days;
        pages = pages + r.pages;
    }
};
int main()
{
    Read r1, r2;
    r1.in();
    r2.in();
    cout<<"\nReading number 1..."<<endl;
    r1.show();
    cout<<"\nReading number 2..."<<endl;
    r2.show();
    cout<<"\nAdding r1 to r2 using += operator..."<<endl;
    r2 += r1;
    cout<<"\nTotal reading is as follows: "<<endl;
    r2.show();
    return 0;
}
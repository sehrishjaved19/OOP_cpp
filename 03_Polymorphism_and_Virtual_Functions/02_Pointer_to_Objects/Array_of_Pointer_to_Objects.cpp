// Write a class thatc ontains an attribute name, a function to input and a function to display name. Create array of pointers in which each element refers to an object of the class.
#include<iostream>
using namespace std;
class Person
{
    private:
    char name[50];
    public:
    void get()
    {
        cout<<"Enter your name: ";
        cin>>name;
    }
    void show()
    {
        cout<<"Your name = "<<name<<endl;
    }
};
int main()
{
    Person *ptr[5];
    int i;
    for(i =0 ; i<5 ; i++)
    {
        ptr[i] = new Person;
        ptr[i]-> get();

    }
    for(i =0 ; i<5 ; i++)
    {
        ptr[i]-> show();  
    }
    return 0;
}
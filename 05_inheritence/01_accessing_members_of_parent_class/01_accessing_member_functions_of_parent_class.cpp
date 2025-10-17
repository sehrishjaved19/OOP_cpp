// Write a class Person that has the attributes of id, name and address. It has a constructor to initializa, a member function to input and a member function to display data members. Create another class Student that inherits Person class. It has additional attributes of roll number and marks. It also has member function to input and display its data members.
#include<iostream>
#include<string>
using namespace std;
class Person
{
    protected:
    int id;
    string name, address;
    public:
    Person()
    {
        id = 0;
        name = "";
        address = '\0';
    }
    void getInfo()
    {
        cout<<"Enter your id: ";
        cin>>id;
        cin.ignore();//clear leftover newline in buffer
        cout<<"Enter your Full Name: ";
        getline(cin, name);
        cout<<"Enter your address: ";
        getline(cin, address);
    }
    void showInfo()
    {
        cout<<"\n Your Personal Information is as follows: \n";
        cout<<"ID = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Address = "<<address<<endl;
    }
};
class Student : public Person
{
    private:
    int rno, marks;
    public:
    Student()
    {
        Student :: Person();
        rno = marks = 0;
    }
    void getEdu()
    {
        cout<<"Enter your roll no. : ";
        cin>>rno;
        cout<<"Enter your marks: ";
        cin>>marks;
    }
    void showEdu()
    {
        cout<<"\n Your Eductaional Information is as follows: \n";
        cout<<"Roll no. = "<<rno<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
};
int main()
{
    Student s;
    s.getInfo();
    s.getEdu();
    s.showInfo();
    s.showEdu();
    return 0;
}
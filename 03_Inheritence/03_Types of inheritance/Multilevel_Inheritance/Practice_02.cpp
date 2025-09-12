// Write a class Person that has attributes id, name, and address. It has a constructor to initialize, a member function to input and a member function to display data members. Create 2nd class Student that inherits Person class. It has additional attributes of roll number and marks. It also has member functions to input and display its data members. Create 3rd class Scholarship that inherits Student class. It has additional attributes of scholarship nmae and amount. It also has member functions to input and display its data members.
#include<iostream>
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
        address = "";
    }
    void input()
    {
        cout<<"Enter your id: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter your name: ";
        getline(cin, name);
        cout<<"Enter your address:";
        getline(cin, address);
    }
    void output(){
        cout<<"\nPersonal Information: \n";
        cout<<"id = "<<id<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"address = "<<address<<endl;
    }
};
class Student : public Person{
    private:
    int rno, marks;
    public:
    Student()
    {
        Student :: Person();
        rno = marks = 0;
    }
    void input()
    {
        Person :: input();
        cout<<"Enter your roll no. : ";
        cin>>rno;
        cout<<"Enter your marks: ";
        cin>>marks;
        cin.ignore();
    }
    void output()
    {
        Person :: output();
        cout<<"\nEducational Information: \n";
        cout<<"Roll no. = "<<rno<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
};
class Scholarship : public Student
{
    private:
    string sname;
    long amount;
    public:
    void input()
    {
        Student :: input();
        cout<<"Enter Scholarship name: ";
        getline(cin, sname);
        cout<<"Enter Scholarship Amount: ";
        cin>>amount;
    }
    void output()
    {
        Student :: output();
        cout<<"\nScholarship Information: \n";
        cout<<"Scholarship name = "<<sname<<endl;
        cout<<"Scholarship Amount = Rs. "<<amount<<endl;
    }
};
int main()
{
    Scholarship obj;
    obj.input();
    obj.output();
    return 0;
}
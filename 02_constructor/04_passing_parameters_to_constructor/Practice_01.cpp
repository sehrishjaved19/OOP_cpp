// Write a class that has marks and grade as data members. A constructor with two parameters initializes data members with the given values and mamber function show displays the valye of data members, Create two objects and display the values.
#include<iostream>
using namespace std;
class Student
{
    private:
    int marks;
    char grade;
    public:
    Student( int m, char g)
    {
        marks = m;
        grade = g;
    }
    void show()
    {
        cout<<"Marks = "<<marks<<endl;
        cout<<"Grade = "<<grade<<endl;
    }

};
int main()
{
    Student s1(947,'B'), s2(1025,'A');
    cout<<"Record of Student 1: "<<endl;
    s1.show();
    cout<<"Record of Student 2: "<<endl;
    s2.show();
    return 0; // Returning 0 to indicate successful execution
}
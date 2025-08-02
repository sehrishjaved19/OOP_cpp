// class identifier_class(here the name of identifier is actually a user defined data type, which stores all the value type(datatype) of data members )
#include<iostream>
using namespace std;
class student{// (class is a key word to create class and student is a user defined datatype)
    public://access specider which give access of this class members to the whole program
    string name;
    int roll_no;
    float gpa;
    int age;


};
int main(){
    student s;// s is the object created and here, student is the datatype of s.
    s.name = "Aiman Javed";
    s.roll_no = 39;// dot operator is useds to access the data member and data function
    // s.gpa = 3.76;
    s.age = 20;
    cout<<"Name of student: "<<s.name<<endl;
    cout<<"Roll no. "<<s.name<<" is: "<<s.roll_no<<endl;//well formatted
    cout<<"Enter Your Gpa: ";
    cin>>s.gpa;
    cout<<"Gpa of student: "<<s.gpa<<endl;
    cout<<"Age of student: "<<s.age<<endl;
    return 0;
}

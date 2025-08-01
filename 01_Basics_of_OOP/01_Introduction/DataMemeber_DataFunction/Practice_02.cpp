// Write a class Marks with three data members to store three marks.Write three member functions in() to input marks, sum() to calculate and return the sum and avg() to calculate and return the average of the marks. 
#include <iostream>
using namespace std;
class Marks {
    private:
    int a, b, c;
    public:
    void in(){
        cout<<"Enter Your Marks of sub1: ";
        cin>>a;
        cout<<"Enter Your Marks of sub2: ";
        cin>>b;
        cout<<"Enter Your Marks of sub3: ";
        cin>>c;
    
    }
    int sum(){
        return a+b+c;
    }
    float avg(){
        return (a+b+c)/3.0;
    }

};
int main()
{
    Marks m;
    int s;
    float a;
    m.in();
    s = m.sum();
    cout<<"Sum = "<<s<<endl;
    a = m.avg();

    cout<<"Average = "<<a<<endl;
    return 0;

}
// Write s class circle with one data member radius. Write three member functions get radius() to set radius value with parameter value, area() to display area and circum() to calculate and display circumference of circle.
#include<iostream>
using namespace std;
class circle{
    private:
    int radius;
    public:
    void get_radius(float r)// here get_radius is a user defined function, which is define to get input from user, using parameter
    {
        radius = r;
    }
    void area()
    {
        cout<<"\n Area of Circle: "<<3.14*radius*radius;
    }
    void circum()
    {
        cout<<"\n Circumference of circle is given as: "<<2*3.14*radius;
    }

};
int main()
{
    circle cir;
    float rad;
    cout<<"\n Enter Radius: ";
    cin>>rad;
    cir.get_radius(rad);
    cir.area();
    cir.circum();
    return 0;
}
// Write a program that overloads arithmetic addition operator + for concatenating two string values.
#include<iostream>
#include<string>
using namespace std;
class String
{
    private:
    string cat;
    public:
    String()
    {
     cat = "";
    }
    void in()
    {
        cout<<"Enter String: ";
        getline(cin, cat);
    }
    void show()
    {
        cout<<cat<<endl;
    }
    String operator +(String s)
    {
       String temp;
        temp.cat = cat + s.cat;   // use std::string concatenation
        return temp;
    }
};
int main()
{
    String s1, s2, s3;
    s1.in();
    s2.in();
    cout<<"s1 = ";
    s1.show();
    cout<<"s2 = ";
    s2.show();
    cout<<"Concatenating s1 and s2 in s3..."<<endl;
    s3 = s1 + s2;
    cout<<"s3 = ";
    s3.show();
    return 0;
}
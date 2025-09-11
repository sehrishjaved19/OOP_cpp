// Write a program that overloads the comparison operators == to work with String class. The result of comparison must be 1 if two strings are of same length and 0 otherwise.
#include<iostream>
#include<string>
using namespace std;
class String
{
    private:
    string str;
    public:
    String()
    {
        str = "";
    }
    void in()
    {
        cout<<"Enter String: ";
        getline(cin, str);
    }
    void show()
    {
        cout<<str<<endl;
    }
    int operator ==(String s)
    {
        if(str == s.str){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
    String s1, s2;
    s1.in();
    s2.in();
    cout<<"s1 = ";
    s1.show();
    cout<<"s2 = ";
    s2.show();
    if (s1 == s2)
       cout<<"Both strings are of equal length!";
    else
        cout<<"Both strings are of different length!";
    return 0;

}

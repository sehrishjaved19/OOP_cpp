// Write a class Book with three data members BookID, Pages and Price. It also contains the following member functions:
//  --> The get() function is used to input values.
//  --> The show() function is used to display values.
//  --> The set() function is used to set the values of data members using parameters
//  --> The getPrice() function is used to  return the value of Price.
// The program should create two objects of the class and input values for these objects.The program displays the details to the most-costly Book.

// NOTE:

// get()	To take input (i.e., set or assign values to data members)
// show()	To display output (i.e., print the values stored in data members)
#include<iostream>
using namespace std;
class Book{
    private:
    int BookID, Pages;
    float Price;
    public:
    void get(){
        cout<<"Enter Book ID: ";
        cin>>BookID;
        cout<<"Enter Pages: ";
        cin>>Pages;
        cout<<"Enter price: ";
        cin>>Price;
    }
    void show(){
        cout<<"BookID= "<<BookID<<endl;
        cout<<"Pages= "<<Pages<<endl;
        cout<<"price= "<<Price<<endl;
    }
    void set(int id, int pg, float pr)
    {
       BookID = id;
       Pages = pg;
       Price = pr;

    }
    float getPrice(){
        return Price;
    }
    
};
int main()
{
    Book obj1, obj2;
    obj1.get();
    obj2.set(2,320,150.89);
    cout<<"\n The details of most costly book is as follows: "<<endl;
    if(obj1.getPrice() > obj2.getPrice())
       obj1.show();
    else
    obj2.show();
return 0;

}
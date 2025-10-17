// Write a class Array that contains an array of integers to store five values. It also contains the following member function:
// The fill() function is used to fill the array with values from the user.
// The display() function is used to display the values of array.
// The max() function shows the maximun value od the array. 
// The min() function shows the minimun value od the array.

// All member function shows the minimum value in the array.
#include<iostream>
using namespace std;
class Array
{
    private:
    int integer[5];
    public:
    void fill();
void display();
int max();
int min();
};


void Array::fill(){   //Array:: is used before function to define outside a class.
    for(int i = 0; i<5; i++){
        cout<< "Enter integer[" <<i<<  "]: ";
        cin>>integer[i];
    }
}
void Array::display(){
    for(int i = 0; i<5; i++){
        cout<<"integer[" <<i<< "]: "<<integer[i]<<endl;
    }
}
int Array::max()
{
        int m = integer[0];
        for(int i=0; i<5; i++){
            if(m<integer[i]){
                m = integer[i];}
        }
        return m;
    }
int Array::min()
{
        int m = integer[0];
        for(int i=0; i<5; i++){
            if(m>integer[i]){
                m = integer[i];}
        }
        return m;
    }



    
int main()//main function
{
    Array arr;
    arr.fill();
    cout<<"You entered the following values: "<<endl;
    arr.display();
    cout<<"Maximum value = "<<arr.max()<<endl;
    cout<<"Minimum value = "<<arr.min()<<endl;
    return 0;

}
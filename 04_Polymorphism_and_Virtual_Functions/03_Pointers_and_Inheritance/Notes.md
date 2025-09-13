# Pointers and Inheritance

* Pointers have very important capability of storing the addresses of different objects.
* _**A pointer can store the address of object whoes type is same as the type of the pointer. It can also store the address of any object that belongs to any child class of the class of pointer.**_

* Suppose there are three classes A, B, C. The class A is a parent class, whereas, B and C are child classes. A pointer ptr of class A can store the addresses of all the objects of A as well as B and C.

## Example:
``` cpp
class A
{
};
class B: public A
{
};
class C: public A
{
};
int main(){
    A ptr;
    ptr = new A; //valid statement
    ptr = new B; //valid statement
    ptr = new C; //valid statement
}
```

---
### Note:
* The type of pointer does not change when a pointer of parent class refers to an object of child class. That is why, The pointer always executes the member function of parent class even if refers to a child object in the memory.


# Pointer to objects
### Pointer:
* A pointer is a variable that stores the address of another variable/object.

* _**A Pointer can also refers to an object of a class. The member of an object can be accessed through pointers by using the symbol ->. The symbol is known as member access operator.**_

 ## Syntax:
 ```cpp
 ptr -> member
```
### Explanation: 
* ptr (It is the name of the pointer that references an object)
* -> (It is the **member access Operator** that is used to access a member of object.)
* member (It is the name of the class member to be accessed.)

---
# Arrays of Pointers to Objects

* An Array can store same type of data.
* _**An array of pointer can store memory addresses of the object of same class.**_
* It allows te user to create a large number of objects in memory using **new** operator and process then easily using loops.
* Each element of array will refer to a different object in the memory.

### new Operator:

* Allocates memory dynamically on the heap.
* Returns the address of the allocated object.
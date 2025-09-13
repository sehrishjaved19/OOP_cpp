# Pure Virtual Functions
### Definition:
_** A type of virtual function that has no body is known as Pure Virtual Function**_

### Declaration:
A function can be declared as pure virtual function by adding two things:
* The keyword **virtual** at the start of the function declaration.
* The **= 0** at the end of the function declaration.

## Use:
* The pure virtual Function are used in the classes which are not used directly.
* The user can inherit the class and then override the pure virtual function in the child class.

---

# Abstract Classes:
### Definition:
_**A type of class that contains any pure virtual function is called Abstract class.**_

* An abstract class cannot be used direclty.
* It means that no object of an abstract class can be created.
* However, a child class can inherit an abstract class and use it by overriding its pure virtual function.

## Use:
* The abstract classes are used to create a model class. Any user who creates a new class becomes an abstract class if any of the pure virtual functions is not overridden in child class.

### Syntax:
``` cpp
virtual return_type function_name() = 0;
```
### Explanation:
* **virtual** (It is the keyword used to declare a virtual function.)
* **Return_type** (It indicates the type of value returned by the function.)
* **f-name** (It indicates the name of function.)
* **= 0** ( It indicates that the function is a pure virtual function.)

---
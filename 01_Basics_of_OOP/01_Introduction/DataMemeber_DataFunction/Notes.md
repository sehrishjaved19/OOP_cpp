# Object-Oriented Programming (OOP)

## Object-Oriented Programming (OOP)
### **Definition:** 
**_"A programming technique/paradim in which programs are written on basis of objects."_**
* Objects are a collection of data and functions that represent a person, thing, or place in the real world.

### **Key Features**: 
* Objects
* Classes
* Real-world Modeling/Abstraction
* Reusability/Inheritence
* Information Hiding/Encapsulation
* Polymorphism.
<hr>

## **Object:**
### **Definition:**
**_"An entity in the real world (or a concept) identified by a name."_**

### **An object contains two things:**
   * **Properties(or state):** The characteristics of an object.
   * **Functions (or methods):** The actions that can be performed by an object.
 ### * Notes:
   * The values of the object's properties (data members) are assigned after the object is created.
   * An object is also known as an "instance" of a class.
## Class:
 ### Definition:
_**"A blueprint or model for creating objects."**_ 
It contains both data members (variables) and member functions.

**Syntax for declaration:**
```cpp
class class_identifier
{
  body of the class;
};
```

### * Notes:
   * A class is a way to define the characteristics and functions of a person or a thing.
   * The class declaration always ends with a semicolon.
### Instance:
 * Definition: An object created from a class.
### Instantiation:
 * Definition: The process of creating an object (an instance) of a class.
### * Notes:
   * we can create multiple classes within one program.
   * we can create multiple onject on the basis of one class, and each object created will have its own copy of values.
### Access Specifiers:
 ### Definition:
_**"Commands/Keywords used to specify the access level of class members."**_
 Two common access specifiers are private and public.
##  Private Access Specifier:
 ### Definition:
 *  _**"Restricts the use of class members"**_.
 *   Data members declared with private can only be accessed within the class itself.
### Notes:
   * Private data members are typically declared as private to protect the data from being manipulated directly from outside the class.
   * They can only be accessed by the member functions declared within the same class.
## Public Access Specifier:
 ### Definition:
 *  _**Allows a class member to be accessed from anywhere in the program, both within and outside the class.**_
 * Notes:
   * Member functions are typically declared as public so that they can be used to manipulate the private data members from outside the class.
## Member Function:
 ### Definition:
 _**"A function that is part of a class. Member functions are used to manipulate the data members of an object".**_
### Executing Member Functions:
 ## Syntax:
 ```cpp
 * object_name.function_name();
```
   
 ## Notes:
   * The object name and member function name are separated by the . (dot) operator.
   * Any required parameters are passed to the member function within the parentheses.

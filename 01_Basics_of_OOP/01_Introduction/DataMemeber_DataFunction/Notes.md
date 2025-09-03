# Object-Oriented Programming (OOP)

## Object-Oriented Programming (OOP)
### **Definition:** 
**_"A programming technique/paradigm in which programs are written on basis of objects."_**
* Objects are a collection of data and functions that represent a person, thing, or place in the real world.
###uses: This technique is
* use to develop software
* used to analyze and design the applications in terms of objects.
_**It deals with data and the procedures that process the data as a single object.**_

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
**_"An entity in the real world (or a concept) identified by a name, that consists of data and functions."_**

### **An object contains two things:**
   * **Properties(or state) refers to data:** The characteristics/attributes of an object.
   * **Functions (or methods):** The actions that can be performed by an object.
 ### * Notes:
   * The values of the object's properties (data members) are assigned after the object is created.
   * An object is also known as an "instance" of a class.
### **Creating  objects:**
* An object is created in the same way as other variables are created. 
* When an object of a class is created, the space for all data members defined in the class is allocated in the memory according to their data types.
## Class:
 ### Definition:
_**"A blueprint or model for creating objects."**_ 
* It contains both data members (variables) and member functions.
* A class is like a **new datatype** that contains both data and functions.
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
   * we can create multiple object on the basis of one class, and each object created will have its own copy of values.

## Encapsulation (Information Hiding)  
### **Definition:**  
_**"The process of binding data (variables) and functions (methods) together into a single unit (class), and restricting direct access to some components."**_  

### Notes:  
* It helps to **hide implementation details** and only expose necessary parts.  
* Access specifiers (private, protected, public) are used to achieve encapsulation.  
* Example: Bank account balance is hidden (private) and can only be modified through deposit/withdraw functions (public).  

## Inheritance (Reusability)  
### **Definition:**  
_**"The process by which one class (child/derived class) can acquire the properties and behaviors (data members and member functions) of another class (parent/base class)."**_ 
In other words,_**"Inheritance is a technique that allows a programmer to use the code of existing program to create a new program."**_


### Types of Inheritance:  
* **Single Inheritance:** One base class → one derived class.  
* **Multiple Inheritance:** One derived class → inherits from multiple base classes.  
* **Multilevel Inheritance:** A class derived from another derived class.  
* **Hierarchical Inheritance:** Multiple derived classes → inherit from the same base class.  
* **Hybrid Inheritance:** Combination of two or more types of inheritance.  
### Class Hierarchy:
The inheritence relationship between the classes of a program refers to the class hierarchy.

### Notes:  
* Promotes **code reusability**.  
* Reduces redundancy by reusing existing code.  
* Access specifiers (public, private, protected) affect how base members are inherited.  

## Polymorphism  
### **Definition:**  
_**"The ability of an object, function, or operator to take many forms and behave differently based on the context."**_  
In other words:_"Polymorphism is the ability of objects of different types to respond to functions of same name."_
* The user does not have to know the exact type of object in advance. The behaviour of the object can be implemented at the run time.Its is called **late binding or dynamic binding**.
* Polymorphism is implemented by using **virtual functions**.

### Types:  
1. **Compile-time (Static Polymorphism):**  
   * Achieved by **function overloading** and **operator overloading**.  
   * Example: Same function name but different parameter lists.  
   * **What is Compile-time?**  
     → Compile-time means the behavior of the program is decided **before execution**, i.e., during the compilation phase.  
     → Errors are also caught before the program runs.  

2. **Run-time (Dynamic Polymorphism):**  
   * Achieved using **virtual functions** and **function overriding** in inheritance.  
   * Example: A `speak()` function behaves differently for `Dog` and `Cat` classes.  
   * **What is Run-time?**  
     → Run-time means the behavior of the program is decided **while the program is running (executing)**.  
     → Allows more flexibility but errors may only appear when the program executes.  

### Notes:  
* Makes programs more **flexible and extensible**.  
* Supports real-world modeling (same action performed differently depending on the object). 

## Abstraction (Real-world Modeling)  
### **Definition:**  
_**"The process of hiding unnecessary implementation details and showing only the essential features of an object."**_  

### Notes:  
* Focuses on **what an object does**, not **how it does it**.  
* Achieved using:  
  * **Abstract classes** (classes that cannot be instantiated directly, but define a structure).  
  * **Pure virtual functions** in C++.  
* Example: A “Car” class shows `drive()` and `brake()` functions, but hides the internal engine details.  

## Summary:  
OOP is built on these **four main pillars**:  
1. **Encapsulation** → Information hiding.  
2. **Inheritance** → Code reusability.  
3. **Polymorphism** → One name, many forms.  
4. **Abstraction** → Hiding implementation details.  

Together, they make programming more **organized, reusable, secure, and closer to real-world problem solving**.  

### Access Specifiers:
 ### Definition:
_**"Commands/Keywords used to specify the access level of class members."**_
* If you do not declare an access specification, the default for members of class is "private".
There are three types of access specifiers: **private, public & protected.**
##  Private Access Specifier:
 ### Definition:
 *  _**"Restricts the use of class members"**_.
 *   Data members declared with private can only be accessed within the class itself.
 **Attributes of a class**
* Attributes of class means, referring to its data members (also called fields or properties).
### Notes:
   * Private data members are typically declared as private to protect the data from being manipulated directly from outside the class.
   * They can only be accessed by the member functions declared within the same class.
## Public Access Specifier:
 ### Definition:
 *  _**Allows a class member to be accessed from anywhere in the program, both within and outside the class.**_
 * Notes:
   * Member functions are typically declared as public so that they can be used to manipulate the private data members from outside the class.
## Protected Access Specifier:  
### Definition:  
* _**"Allows a class member to be accessed within the class itself and by its derived (child) classes, but not from outside the class directly."**_  

### Notes:  
* Protected members act like private members but with one exception:  
  → They are **inheritable**, meaning they can be accessed in derived classes.  
* Useful in **inheritance** when you want child classes to access certain data members without exposing them publicly.  
* Cannot be accessed by objects of the class directly.  
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

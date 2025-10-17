# Introduction to Inheritance  

## **Inheritance**  
### **Definition:**  
_**"A programming technique that is used to reuse an existing class to build a new class is known as inheritance."**_  

* The new class inherits all the behaviours of the original class.  

### **Parent Class:**  
The existing class that is reused to create a new class is known as **super class, base class, or parent class**.  

### **Child Class:**  
The new class that inherits the properties and functions of an existing class is known as **subclass, derived class, or child class**.  

### **Class Hierarchy:**  
The inheritance relationship between the classes of a program is called a **class hierarchy**.  

### **Advantages of Inheritance:**  
* Reusability  
* Saves time & efforts  
* Increases program structure and reliability  

---

## **Protected Access Specifier:**  
### **Definition:**  
_**"The protected access specifier allows data members to be accessed from all derived classes but not anywhere else in the program."**_  

### Notes:  
* Child classes can access all the protected data members of their parent class.  
* Cannot be accessed directly by objects.  

---

## **Specifying a Derived Class:**  
The process of specifying a derived class is the same as specifying a simple class.  
Additionally, the reference of the parent is specified along with the derived class name to inherit the capabilities of the parent class.  

### Explanation:
* **class**--> Keyword used to declare a class.
* **sub_class**--> The name of the derived class.
* **:**-->Creates a relationship between the derived class and the super class.
* **specifier**--> Indicates the type of inheritance. It can be private, public, or protected.
* **parent_class**--> The name of the parent class that is being inherited.

### **Syntax:**  
```cpp
class sub_class : specifier parent_class
{
    // body of the class
};
```
---

# Accessing Members of Parent Class  

* An important issue in inheritance is the accessibility of base class members by the objects of derived class. It is known as **accessibility**.  

---

## **Accessing Member Functions of Parent Class:**  

* The object of derived class can access all member functions of parent class that are declared as **protected** or **public**.  

---

## **Accessing Constructors of Parent Class:**  

* If a derived class has no constructor, it automatically uses the parent’s default constructor (if available).  
* A derived class can also access parameterized constructors of the parent class by passing values to them.  

### **Explanation:**  
* **child_con** --> The name of constructor of derived class.  
* **parent_con** --> The name of constructor of parent class.  
* **parameters** --> The list of parameters passed to the constructor of parent class.  

### **Syntax:**  
```cpp
child_con : parent_con(parameters)
{
    // body of constructor
}



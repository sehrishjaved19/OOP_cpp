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

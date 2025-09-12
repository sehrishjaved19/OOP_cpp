# Types of Inheritance  

1. **Single Inheritance**  
2. **Public Inheritance**  
3. **Protected Inheritance**  
4. **Private Inheritance**  
5. **Multilevel Inheritance**  
6. **Multiple Inheritance**  

---

## **Single Inheritance**  
### **Definition:**  
_**"A type of inheritance in which a child class is derived from a single parent class is known as single inheritance."**_  

### Notes:  
* The child class inherits all data members and member functions of the parent class.  
* It can also add further capabilities of its own.  

---

## **Public Inheritance**  
### **Definition:**  
_**In public inheritance, the access status of parent class members in the derived class remains the same.**_  

### Notes:  
* Public members of parent class → **public** in derived class.  
* Protected members of parent class → **protected** in derived class.  
* Private members of parent class → **private** in derived class.  
* **Objects of child class cannot access private and protected members of parent class, but can access public members.**  

---

## **Protected Inheritance**  
### **Definition:**  
_**In protected inheritance, the access status of parent class members in the derived class is restricted.**_  

### Notes:  
* Public members of parent class → **protected** in derived class.  
* Protected members of parent class → **protected** in derived class.  
* Private members of parent class → **private** in derived class.  
* **Objects of child class cannot access public, private, or protected members of parent class directly.**  

---

## **Private Inheritance**  
### **Definition:**  
_**In private inheritance, the access status of parent class members in the derived class is restricted further.**_  

### Notes:  
* Public, protected, and private members of parent class → **private** in derived class.  
* Derived class cannot access private members of parent class.  
* **Objects of child class cannot access public, private, or protected members of parent class directly.**  

---

## **Multilevel Inheritance**  
### **Definition:**  
_**A type of inheritance in which a class is derived from another derived class is called multilevel inheritance.**_  

### Notes:  
* Members of parent class are inherited into the child class.  
* Members of child class are further inherited into the grandchild class.  
* Final (grandchild) class combines members of both parent and child classes.  

### **Example:**  
class A
{
    // body of the class
};
class B : public A
{
    // body of the class
};
class C : public B
{
    // body of the class
};

---

## Multiple Inheritance  

**Definition:**  
_**A type of inheritance in which a derived class inherits from multiple parent classes.**_  

* The derived class combines members from all parent classes.  

### **Example:**  
class A
{
    // body of the class
};
class B
{
    // body of the class
};
class C : public A, public B
{
    // body of the class
};


**Syntax:**  
```cpp
class child_class : specifier parent_1, specifier parent_2 {
    // body 
};


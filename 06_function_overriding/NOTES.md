# Function Overriding  

## **Definition:**  
_**"The process of declaring a member function in the derived class with the same name and same signature as in the parent class is known as function overriding."**_  

---

## **Notes:**  
* Function overriding allows the use of the same function name in both parent and derived classes.  
* When a member function is overridden in the derived class, the object of the derived class cannot access the parent class function directly.  
* The function of the parent class can still be accessed using the **scope resolution operator (::)**. 
--- 

## Difference:
| **Overloading** | **Overriding**|
|-----------------|---------------|
|_Function Overloading is a process of writing multiple functions with same name but different signature._ | _Function Overriding is a process of writing a member function in child class with same anme as written in the base class_|

---
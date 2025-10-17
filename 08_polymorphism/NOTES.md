## Polymorphism  
* The word **Polymorphism** is a combination of two words **Poly** and **morphism**.
* **Poly** means **many** 
* **morphism** means **forms**

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

# Virtual Functions

_**Virtual** means existing in effect but not in reality._

---

## 📖 Definition
_**A type of function that appears to exist in some part of a program but does not exist really is called virtual function.**_

---

## 🎯 Use
* Virtual Functions are used to implement **polymorphism**.
* They allow execution of completely different functions through the **same function call**.

---

## 🏷️ Virtual Keyword
* A **virtual function** is defined in the **parent class** and can be **overridden** in child classes.  
* Declared using the keyword **`virtual`**.

---

## ⚡ Note
* When a member function is declared as **virtual** in the parent class and is called through a pointer:
  - The compiler checks the **type of the object** the pointer refers to.
  - It executes the function according to the **object type**, not the pointer type.
* This enables **runtime polymorphism (dynamic binding)**.

---

### 🔑 Additional Notes:
* Declared in **base class**, overridden in **derived class**.
* If a derived class does not override a virtual function, the **base class version** is executed.
* Virtual functions **cannot be static**.
* A class with at least one virtual function has a hidden **Virtual Table (vtable)** created by the compiler.
* Virtual functions support **late binding** (decision made at runtime).
* Destructors in base classes should usually be declared **virtual** to ensure proper cleanup of derived objects.
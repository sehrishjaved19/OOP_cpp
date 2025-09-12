
## Static Object Creation:

When you write:

```cpp
Test t;   // object created normally
```

* `t` is created in **stack memory** (temporary memory).
* It is automatically **destroyed** when the function (`main()` here) ends.
* This is called **static allocation**.

---

## Dynamically Creating an Object

When you write:

```cpp
Test *ptr;
ptr = new Test;
```

* `new Test` creates an object in the **heap memory** (a large pool of memory managed at runtime).
* It returns the **address** of that object.
* That address is stored in the pointer `ptr`.
* Unlike stack objects, heap objects are **not automatically destroyed** when the function ends.

  * You have to delete them yourself:
```cpp
    delete ptr;   // frees memory
```

---

### 🔑 Key Differences

| **Static Object (normal)**                    | **Dynamic Object (new)**                     |
| --------------------------------------------- | -------------------------------------------- |
| Created on **stack**                          | Created on **heap**                          |
| Lifetime: auto (destroyed when function ends) | Lifetime: manual (until `delete`)            |
| Accessed directly (e.g., `t.in()`)            | Accessed through pointer (e.g., `ptr->in()`) |
| Size fixed at compile time                    | Size decided at **runtime**                  |

---

### ✅ Example

```cpp
Test t;          // static → stack memory
Test *p = new Test; // dynamic → heap memory
```

* `t` exists only while `main()` runs.
* `p`’s object exists on heap until you explicitly free it with `delete p;`.

---

So, **dynamically creating an object** means:
*Making an object at runtime in the heap using `new`, instead of automatically on the stack.*

---
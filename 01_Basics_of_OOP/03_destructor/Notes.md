# Destructor in C++

## Definition
A **destructor** is a special member function of a class that is executed automatically when an object goes out of scope or is explicitly deleted. Its main purpose is to release resources allocated to the object, such as memory or file handles.

## Syntax
```cpp
class ClassName {
public:
    ~ClassName(); // Destructor declaration
};

ClassName::~ClassName() {
    // Cleanup code
}
```

## Key Points
- The destructor has the same name as the class, preceded by a tilde `~`.
- It does **not** take any parameters and does **not** return any value.
- Only one destructor is allowed per class (no overloading).
- Called automatically when an object is destroyed (end of scope or `delete`).
- Used to free resources, close files, or perform cleanup tasks.
- If not defined, the compiler provides a default destructor.
- Destructor is called in reverse order of object creation for local objects.

## Example
```cpp
class Demo {
public:
    Demo() {
        cout << "Object created!" << endl;
    }
    ~Demo() {
        cout << "Object destroyed!" << endl;
    }
};

int main() {
    Demo d1, d2;
    // Destructor will be called for d2, then d1 when main ends
    return 0;
}
```

## Best Practices
- Use destructors to release resources acquired by the object.
- Avoid throwing exceptions from destructors.
- For classes with dynamic memory allocation, always define a destructor to prevent memory leaks.

## Notes
- Destructors are especially important in C++ for managing memory and resource cleanup.
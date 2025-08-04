# Constructors in C++

## Definition
A **constructor** is a special member function of a class that is automatically called when an object is created. It initializes the object’s data members.

* An object data member refers to a variable that is declared inside a class and belongs to each object created from that class. Each object has its own copy of these data members, which store the state or properties of that specific object.

## Syntax
```cpp
class ClassName {
public:
    ClassName(); // Constructor declaration
};
ClassName::ClassName() {
    // Initialization code
}
```

## Key Points
- Constructors have the same name as the class.
- They do not have a return type (not even void).
- Can be overloaded (multiple constructors with different parameters).
- If no constructor is defined, the compiler provides a default constructor.
- Used to set initial values for data members or allocate resources.

## Types of Constructors
- **Default Constructor:** No parameters.
- **Parameterized Constructor:** Takes arguments to initialize members.
- **Copy Constructor:** Initializes an object using another object of the same class.

## Example
```cpp
class Student {
    int id;
public:
    Student() { id = 0; } // Default constructor
    Student(int i) { id = i; } // Parameterized constructor
};
```

## Best Practices
- Always initialize all data members.
- Use initializer lists for efficiency.
- Avoid complex logic in constructors.

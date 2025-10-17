# Operator Overloading in C++ [Compile time(static polymorphism)]

## Definition

**Operator overloading** is a feature that allows you to redefine the behavior of C++ operators for user-defined data types (objects). This enables operators like `+`, `-`, and `*` to work with user-defined objects in the same way they work with built-in data types like `int` or `float`.

## Key Points

  - Overloading is achieved by creating a special **member function** within a class.
  - This function's name is the keyword `operator` followed by the operator symbol (e.g., `operator+`).
  - Overloaded operators do not change their fundamental meaning, precedence, or arity (the number of operands they take).
  - Not all operators can be overloaded (e.g., `::`, `.`, `.*`, `?:`, `sizeof` cannot be overloaded).
  - Operator overloading improves code readability and allows intuitive use of custom types.

-----

## Types of Operator Overloading

### Unary Operator Overloading

A **unary operator** acts on a single operand (e.g., `++`, `--`, `!`). Overloading these operators allows you to modify a single object.

  - **Example**: Overloading the `++` increment operator lets you increase a value within an object.
  - **Prefix vs. Postfix**: The prefix (`++a`) and postfix (`a++`) forms of an operator must be overloaded separately.

### Binary Operator Overloading

A **binary operator** acts on two operands (e.g., `+`, `-`, `==`). Overloading these allows you to define how two objects interact.

  - **Arithmetic Operators**: Operators like `+` and `-` can be overloaded to perform calculations between objects.
  - **Comparison Operators**: Operators such as `==` or `<` can be overloaded to compare two objects.
  - **Arithmetic Assignment Operators**: Operators like `+=` can be overloaded to perform an operation and then assign the result.

-----

## Syntax

```cpp
// Syntax for overloading a unary operator
return_type operator op () {
    // function body
}

// Example for a binary operator
return_type operator op (const ClassName& other_object) {
    // function body
}
```

-----
**Note:**  
Operator overloading should be used to make code more intuitive and maintainable. Avoid overloading operators in ways that are confusing or unexpected for users of your class.

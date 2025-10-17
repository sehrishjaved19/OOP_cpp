## 📘 CONTRIBUTING.md

# Contributing to OOP_cpp

Thank you for your interest in contributing to the **OOP_cpp** repository!
Whether you’re a beginner learning C++ or an experienced developer, your contributions are welcome. This guide will help you get started and ensure your contributions are consistent, clear, and easy to review.

---

## 🌟 How to Contribute

### 1. **Fork the Repository**

* Click the **Fork** button on the top-right of the repo to create your own copy.

### 2. **Clone Your Fork**

```bash
git clone https://github.com/your-username/OOP_cpp.git
cd OOP_cpp
```

### 3. **Create a Branch**

* Always create a new branch for your work:

```bash
git checkout -b feature/your-feature-name
```

* Use **descriptive branch names**, e.g., `feature/inheritance-example` or `fix/operator-overload-bug`.

### 4. **Make Your Changes**

* Add new C++ exercises, examples, or improvements to existing files.
* Organize files **inside the correct topic folder**, e.g., `04_Inheritance/`, `05_Polymorphism/`.
* Add or update **README.md** in the folder if needed to explain your code.

### 5. **Follow Code Style**

* Use **consistent indentation** (4 spaces is recommended).
* Prefer **modern C++ practices**:

  * Use `const` correctness
  * Use STL containers (`std::vector`, `std::map`) over raw arrays
  * Use RAII / smart pointers when handling resources
* Comment your code clearly and explain complex logic.
* Use descriptive names for classes, variables, and functions.

### 6. **Test Your Code**

* Ensure your code **compiles successfully** and works as intended.
* Avoid leaving broken or incomplete code in pull requests.

### 7. **Commit Changes**

* Write clear, concise commit messages:

```text
Add example for single inheritance with constructors
Fix bug in operator overloading demo
```

* Follow this pattern: `<Action> <what you did>`

### 8. **Push and Open a Pull Request**

```bash
git push origin feature/your-feature-name
```

* Go to your fork on GitHub and open a **Pull Request (PR)**.
* Provide a **clear description** of what you added or fixed.
* Reference any related issues, if applicable.

---

## 🗂 Folder Structure Guidelines

```
OOP_cpp/
├───01_introduction
│   ├───01_data_memeber_and_data_function
│   ├───02_defining_member_function_outside_class
│   └───03_user_defined_data_type
├───02_constructor
│   ├───01_constructor_introduction
│   ├───02_constructor_overloading
│   ├───03_default_copy_constructor
│   └───04_passing_parameters_to_constructor
├───03_destructor
├───04_operator_overloading
├───05_inheritence
│   ├───01_accessing_members_of_parent_class
│   └───02_specifying_a_dervied_class
├───06_function_overriding
├───07_Types_of_inheritence
│   ├───01_multilevel_inheritence
│   └───02_multiple_inheritence
│       └───01_contructors_in_multiple_inheritence
├───08_polymorphism
├───09_pointer_to_objects
├───10_pointers_and_inheritance
├───11_virtual_functions
├───12_early_and_late_binding
├───13_pure_virtual_function
└───14_virtual_base_classes
```

* Place new files in the appropriate folder.
* Use **lowercase or CamelCase file names** consistently.
* Each folder should contain a `README.md` explaining what the examples demonstrate.

---

## 📏 Code of Conduct

By contributing, you agree to respect the [Code of Conduct](CODE_OF_CONDUCT.md).
Harassment, disrespect, or offensive content will **not be tolerated**.

---

## ✅ Additional Guidelines

* Keep pull requests **small and focused**.
* Include sample input/output or test cases where appropriate.
* Avoid committing compiled binaries or temporary files (`.o`, `.exe`, etc.).
* Ask questions and collaborate — contributions are not only code!

---

## 💡 Resources

* [C++ Reference](https://en.cppreference.com/w/)
* [Modern C++ Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
* [Contributor Covenant Code of Conduct](https://www.contributor-covenant.org/)


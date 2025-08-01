# Defining Member Functions Outside a Class
 ### Definition:
 _**"The declaration of a member function is specified within the class, but the function definition is specified outside the class".**_
 ### Syntax:
```cpp
return_type class_name::function_name(parameters)
{
  function body
}
```

 * Notes:
   * The :: is the scope resolution operator, which is used to define member functions outside the class.
   * return_type indicates the type of value to be returned by the function.
   * class_name is the name of the class to which the function belongs.
   * function_name is the name of the member function being defined.


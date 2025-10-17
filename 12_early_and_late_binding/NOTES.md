# Early Binding:

* Early binding is also called static binding.

### Definition:
_**The assignment of types to variables and expressions at compilation time is known as early binding.**_

## Notes:
* _The early Binding occurs when everything required to call a function is known at complile time._
* Early Binding enables the compiler to know exactly which function will be called when a certain statement is executed.

# Late Binding:

* Late Binding is also called dynamic binding.

### Definition:
_**The assignment of type to variables and expression at execution time is known as late binding**_

## Notes:
* _The late binding occurs when some information to call a function is decided at execution time._
* The compiler does not know at compile timw which function will be executed. It provides more flexibility.

### Eaxample:
 The use of virtual function to implement polymorphism is an example of late binding.

### key point:
* In virtual function, the compiler does not know at compile time which object is referred by the pointer.
* The compiler executes the function depending on the contents of the pointer rather than the type of compiler.
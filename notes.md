fun1 
fun2 

will be common for all the objects.
ob1, obj2, obj3
a    a     a
b    b     b

#### Inline function
- whenever a function is called, it takes a lot of extra time in executing a series of instructions for tasks such as -
    - jumping to the function
    - saving registers,
    - pushing arguments in to the stack and
    - returning to the calling function
- Above task will execute always, either the function is small or big.
- When a function is small, these task become overhead.
- One solution to this problem is to use macro definition (macro like function).
- C++ has a different solution to this problem that is called Inline funtion.
- An Inline function is a function that is expanded in line when it is invoked. That is, the compiler replaces the function call with the corresponding function code.
- To make a function inline to the function definition.
Ex. = ```c++ Inline double cube (double a) {
    return(a*a*a);
    }
    c = cube(3.0);
    d = cube(2.5 + 1.5);
    ```
- Usually the functions are made inline when they are small enough to be defined in one or two lines.
- Remember that the inline keyword sends a request, not a command, to the compiler. The compiler may ignore this request if the function definition is too long & too complicated. Compiler will treat inline function as a normal function.
- Some of the situations above inline expansion may not work.
    - if it has a loop, a switch, a goto.
    - if function contain static variables.
    - if function is recursive.

```c++
// A PROGRAM OF INLINE FUNCTION
#include<iostream.h>
inline float mul(float x, float y) {
    return(x*y);
}

void main() {
    float a = 12.345f;
    float b = 9.82f;
    cout<<mul(a,b);
}
```
#inlcude<iostream.h>
class abc {
int x;
static int count;
public:
static void show() {cout <<cout;}
void show2(){cout <,x;}
};
int abc::cout

- C++ Introduces a new kind of variable known as the reference variable
- A reference variable provides an alias (nick name) for a.

- A reference variables an alternative name for a previously defined variable, Both the variable refer to the same data object in the memory. Hence, chance in the value of one will also be reflected in the value of the other variable.



What will be the accessibilty modes after inheritence of the members of the super class?
Ans. it depends on the access specifiers.

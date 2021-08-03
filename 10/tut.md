# Tutorial 10 Notes

1. What is an abstract data type?

<details>
    <summary>Answer</summary>

An abstract data type is abstract and a data type! We've seen an abstract data type
before and it's what we've been working with recently - linked lists!

The main idea behind an abstract data type is we don't have an explicit thing we can
type in the code to get that type like how we can for `int`s and `double`s.

</details>

<br>

2. What is a header file? What is an implementation file? What's the difference?
How do we use them in C?

<details>
    <summary>Answer</summary>

A header file serves two purposes. It declares everything and it hides everything else. 

The header file contains `typedef`s, function declarations and `#defines`. It declares
these so we can freely use these when we `#include` the `.h` file and implement them
in our implementation file.

By hiding everything else, that means the header file hides the function implementation
and how the code actually works from anything that `#include`s it which isn't implementing
it. Any code that uses the functions in the header file can only see the header file.
Think of it like we're `#include`ing the `.h` file not the `.c` file.

We need to `#include` the `.h` file in any `.c` file which implements it or uses it.
Consider these files to be like our `stdio.h` and `stdlib.h`.

To compile them, we just need to put all our `.c` files together like:

```
dcc list.c main.c -o main
```

</details>

<br>

3. What is a stack? 

<details>
    <summary>Answer</summary>

A stack is an abstract data type which is commonly described as last in first out.

If you're like me and struggle a little with what that means. Think of a stack as a literal 
stack. You stack things on top of each other and when it comes to take items off the stack
they come off the top.

</details>

<br>

4. What is recursion?

<details>
    <summary>Answer</summary>

Recursion is when a function calls itself. The idea is to shrink the problem down to
a base case that is easy to solve.

</details>
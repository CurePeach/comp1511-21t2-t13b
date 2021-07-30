# Tutorial 9 Notes

1. Assignment 2 is now underway. The due date is the 6th of August which is Week 10 Friday at 8PM. That means this is the second last lab you can ask questions in about the assignment.

2. What does `malloc()` do? How do we use it?

<details>
    <summary>Answer</summary>

Regular variables are allocated on the section of memory called the stack which means they disappear after the end of the curly brackets. When we use `malloc`, our variables do not go on the stack but on the heap, so they don't disappear after the end of the curly brackets.

To use `malloc`, we pass in a `sizeof(something)` and it will return us a pointer to `something`.

</details>

<br>

3. What does `free()` do? How do we use it?

<details>
    <summary>Answer</summary>

`free` basically undos `malloc`. To use `free`, we pass it a pointer to what has been `malloc`'d.

</details>

<br>

4. What is a use after free error?

<details>
    <summary>Answer</summary>

A use after free error is when a `malloc`'d variable is accessed after it is `free`'d.

This is really dangerous and a reason why is the following scenario. Let's say you `malloc`'d struct 1 and then `free`'d it. Now you `malloc` struct 2. Since struct 1 has been `free`'d, that memory is not allocated to it so it's free real estate for struct 2. If struct 2 was put in that space, we now have two variables that are meant to be different but are actually the same.

</details>

<br>

5. What is a memory leak?

<details>
    <summary>Answer</summary>

A memory leak is when there has been `malloc`'d memory which hasn't been `free`'d and can't be `free`'d because we don't have a pointer to that memory anymore.

</details>

<br>

6. You can code along the tutorial with the code provided in the tutorial `list.c` and `list.h`.
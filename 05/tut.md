# Tutorial 5 Notes

1. Kahoot for some revision!

<details>
    <summary>Link</summary>

    https://play.kahoot.it/v2/?quizId=fb3afe15-ee8d-4d6a-9fd4-5ecbdde9c85b
</details>

<br>

2. What is a pointer?

<details>
    <summary>Answer</summary>

    A pointer is a type of variable. It "points" to a different variable and the variable it points to determines what type of pointer it is. For example, if we are pointing at an integer, we have an integer pointer, if we are pointing at a double, we have a double pointer.

    Here are some analogies that may help you understand. Let's say we have an integer pointer and the value is 4.

    - A pointer is like the address if the 4 is a house.

    - Imagine you're pointing at an object. That object you're pointing at is the 4 and you're the pointer.
</details>

<br>

3. How can we declare and initialise a pointer?

<details>
    <summary>Answer</summary>

    We use a * to declare that type to be a pointer. For example, int *pointer. 

    To initialise a pointer, we need an address. The & takes the address of a variable and so, we use the & to initialise the pointer.
    
    For example:
    int a = 4;
    int *ptr_a = &a;
</details>

<br>

4. Why does `scanf` need an & in front of the variable name?

<details>
    <summary>Answer</summary>

    This is because scanf() wants to change the variable. As seen in last week's examples, we can't change a variable from inside a function. To change the variable inside a function, we have to pass it by reference and we do that by passing the address of it.
</details>

<br>

**Let's do some pointers exercises!**

<br>
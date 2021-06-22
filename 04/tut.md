# Tutorial 4 Notes

1. What is a code review? What is the point of it?

<details>
    <summary>Answer</summary>

    A code review is where we review code. We talk about what we think the code did well and we ask questions about what the code does if we don't understand. We don't want to be rude but we want to be constructive.

    Examples of something that might be good to say during a code review:

    - What is the goal of this program? Maybe include that in the header comment?

    - I think your indentation on this line is incorrect. Whenever I want to check my indentation, I use 1511 style.

</details>

<br>

2. Let's go through these two pieces of code and everyone asks a question about either.

3. Let's go through the assignment, how to navigate the page and how we can get a start on it.

<details>
    <summary>Answer</summary>

    - Read everything!!

    - Use the starting code!!

    - If you're unsure of something, use the reference!!

    - If you're ever stuck, email us, ask questions in the lab, ask questions on the forum or attend help sessions.

</details>

<br>

4. What are some common style mistakes in the assignment?

<details>
    <summary>Answer</summary>

    - Write a description of the code in the header comment.

    - Remove placeholder comments like TODO or put #defines here.

    - Use #defines to give random numbers meaning.

    - Use functions! Use functions from the beginning and use them to plan your code! They help reuse code and label blocks of code similar to how variables label data.
    
</details>

<br>

5. What is a function? Where have we already seen functions?

<details>
    <summary>Answer</summary>

    A function is a separate section of code that we can write that can be "called" by its name. When it's called, control of the program jumps to the function before returning to wherever it was called from.
    
    Functions usually have inputs and outputs, meaning, information that needs to be passed into the function and then information that is returned when the function finishes.
    
    Example functions we've seen are: printf(), scanf(), main().

</details>

<br>

6. Why should we use functions?

<details>
    <summary>Answer</summary>
    
    - Help plan your code with real words. Breaks down one large problem into smaller problems.

    - Easy to reuse code because all we need to do is call a function. Imagine if every time we wanted to print something to the terminal, we had to write out the entire code of printf().
    
    - Easy to read and understand your code if you have good function names because you're labelling code similar to how you label variables with good variable names.

</details>

<br>

**Time to write code with some functions!**

<br>

8. What is an array?

<details>
    <summary>Answer</summary>
    
    An array is a collection of elements with the same data type. Each element is accessed providing the name of the array and an index. The index range is from 0 through to N-1, where N is the number of elements in the array. This is also known as zero-based indexing.
    
</details>

<br>

**Time to write code with some arrays!**

<br>

9. What does `scanf()` return? Let's fill out the table on the tutorial questions.

<details>
    <summary>Answer</summary>
    
    To learn more about scanf(), type man scanf into the terminal and you will learn a lot about it. The only part that is relevant to us today is the return value section. Man pages are rather confusing so instead of focusing on the entire text, focus on the subheadings for what you want.
    
    What scanf() returns is the amount of successfully scanned variables in that statement. The table will help us look at it with some real practical examples!

</details>

<br>

**Time to write code with a `scanf()` in a loop!**

<br>

10. Feedback form!

<details>
    <summary>Link</summary>
    
    https://forms.gle/x8Qfo5V3t2fwpDvP8
</details>
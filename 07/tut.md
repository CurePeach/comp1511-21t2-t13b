# Tutorial 7 Notes

1. The first assignment is done and dusted. How was it?

<br>

2. We have seen ints, we have seen doubles and now we are talking about characters. What's the difference? What does this mean?

<details>
    <summary>Answer</summary>

The main difference between them are the sizes of the variable types. An int is four bytes, a double is eight bytes and a character is one byte.

Since a character is one byte, it can only hold 2^8 values (one byte = eight bits). This means the range is either -128 to 127 or 0 to 255.

Typically, if we want a single character, we just use an int because ints guarantee we have negative values such as -1. Think of characters as baby ints.

</details>

<br>

3. What is a string? There are two things that define a string.

<details>
    <summary>Answer</summary>

- It is an array of characters.
- And it ends with the null terminator.

</details>

<br>

4. Let's check out this program. 
- How does the while loop stop? 
- What is the '\0'? 
- Why are we passing in a pointer? 
- Does it have anything to do with an array?
- Hence or otherwise, what does the function do?

```c
int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}
```

<details>
    <summary>Answer</summary>

The while loop stops because every string must end with the null terminator.

We are passing in a pointer because char *word is actually similar enough to char word[]! They both point to something, and they both happen to be pointing to the start of a string (a char array)!

The main differences between char* and char[] is that:
- We can directly assign a pointer to char* but not char[].
- You can only directly assign the variables to a char[].
- The sizeof() operator on char* returns the size of the pointer while char[] returns the size of the array.

What the function does is that it counts how many lowercase letters there are in the string.

</details>

<br>

5. What do the functions `getchar()` and `putchar()` do?

<details>
    <summary>Answer</summary>

`getchar()` is similar to `scanf()` except it only scans in one char.

`putchar()` is similar to `printf()` except it only prints one char.

To learn more about these functions, use the `man` command. For example, `man getchar` or `man putchar`.

</details>

<br>

6. What does the function `fgets()` do?

<details>
    <summary>Answer</summary>

`fgets()` is similar to `scanf()` and `getchar()` except it scans in a line of text.

To learn more, use the `man` command!

</details>

<br>

7. What are command line arguments?

<details>
    <summary>Answer</summary>

Command line arguments are what we type in the command line. It's the extra text after we type the name of the program.

</details>

<br>

8. Let's look at a couple examples. What would the values of argc and argv be in each scenario?

```
./test hello world
```

```
./important "start your assignment early"
```

```
./program
```

<details>
    <summary>Answer</summary>

`./test hello world` has an `argc` of 3 and `argv` of `{"./test", "hello", "world}`.

`./important "start your assignment early"` has an `argc` of 2 and `argv` of `{"./important", "start your assignment early"}`.

`./program` has an `argc` of 1 and `argv` of `{"./program"}`.

</details>

<br>

9. Let's talk about testing. Why is it important? How can we test it?

<details>
    <summary>Answer</summary>

If we never tested our code... things would go horribly wrong. Not only just failing autotests but think about how we use software in the real world. We use code in airplanes where many lives could be lost if our code doesn't work right. A rocket exploded this one time because we didn't test it (and also horrible miscommunication - poor style).

In this course, we've explored a few ways to test our code:
- Running our program with different inputs
- Working together with others
- Using the autotest

In this week's tutorial and lab, we will be going through how we can write our own tests!

</details>
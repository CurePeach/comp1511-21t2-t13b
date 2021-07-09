# Tutorial 1 Notes

1. Who is your tutor?

<details> 
  <summary>Answer</summary>
  
My name is Clarissa Tatang and am currently a 3rd year Software Engineering student. Feel free to email me at clarissa.tatang@unsw.edu.au if you have any questions!
</details>

<br>

2. Who is your lab assistant?

<details> 
  <summary>Answer</summary>
  
My name is Patrick Chambers and I'm a 2nd year Computer Science / Mechanical Engineering student. In my free time I can be found playing piano or climbing large rocks. I'm looking forward to working with everyone this term!
</details>

<br>

3. Who are you? Let's do some icebreakers! 

<br>

4. Let's talk about the course, the forum and where's where!

<br>

5. Let's talk about Blackboard Collaborate!

<br>

6. Let's talk about TigerVNC/VLab!

<br>

7. What is an operating system?

<details>
  <summary>Answer</summary>
  
A software that communicates with the hardware and allows other programs to run.

**Eg**. Windows, iOS, Linux!
</details>

<br>

8. What are some important commands for the terminal?

<details>
  <summary>Answer</summary>

```
cd - changes to root directory
cd .. - changes to parent directory
cd dir - changes to directory with the name dir
cd ../dir - changes to parent directory, then to directory with the name dir
```

```
ls - lists the files in the current directory
```

```
mkdir dir - makes a directory with the name dir
```

```
cp src dst - copies the file src to dst
```

```
mv src dst - cuts the file src to dst (can also be used to rename files!)
```

</details>

<br>

9. Let's talk about this sample program!

```
// Basic Hello World program
// Marc Chee, September 2020

#include <stdio.h>

int main (void) {
    printf("Hello World\n");
    
    return 0;
}
```

  a. What is the '\n' for?

<details>
  <summary>Answer</summary>
  
The '\n' represents a new line - a press of the enter button. It tells the program to go to the next line.
</details>

<br>

  b. Are there any comments? What do they do?

<details>
  <summary>Answer</summary>
  
The first two lines of the sample program are comments. A comment's purpose include:
- Describing what is happening in the code - why did we choose to write this code?
- Providing important information about the code such as the author or its purpose.
</details>

<br>

  c. What is indented and why?

<details>
  <summary>Answer</summary>
  
The code inside the main function is indented. It is indented because there are curly brackets around it. The rule for indentation is

```
(pairs of curly brackets around the code) x 4 spaces = indentation amount
```

</details>

<br>  

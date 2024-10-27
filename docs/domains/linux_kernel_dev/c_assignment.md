# Collection of exercises

Reading an entire textbook or going through a course can be time-consuming and may not be the most effective learning method for everyone. This collection of exercises is designed to help you learn through practice rather than theory. These exercises assume that you have some programming experience and the ability to research and find necessary information online to solve problems. If you lack this experience, it’s recommended to follow a textbook first for a more structured learning approach.

You can find solutions for some of these questions in the `c_assignment_solutions` directory.

--- 

## Beginner

1. Print 'hello, world'.
2. Find commonly used escape sequences.
3. Learn how to write single-line, inline and multi-line comments.
4. Learn the difference between variable initialization and declaration.
5. Learn the difference between variables, constants, enumeration constants and constant variables.
6. Write a program to print the maximum and minimum values as well as the size occupied in memory of the four data types: `int`, `char`, `float`, and `double`.
7. Learn the precedence of arithmetic, relational, and logical operators.
8. Write an input-output loop that displays the total characters received before exiting and use the increment and decrement operators.
9. Write a program that counts the number of words, lines, and characters in text given through input.
10. Write a program that prints the maximum and minimum values of all data types in C, including modifiers like `unsigned` and `short`.

---

## Intermediate

1. Learn implicit and explicit type conversion.
2. Write a program to print the longest line given through its input using character arrays to store and retrieve the lines.
3. Write a program to opy its input to its output, replacing each tab by `\t`, each space by `\s`, each newline by `\n` and each backslash by `\\`. This makes tabs and backspaces visible in an unambiguous way. Use the `switch` statement.
4. Write a function that takes two strings and appends the former onto the latter.
5. Write a program to print a vertical histogram of the frequencies of different characters in its input, using arrays to store the frequencies.

---

### Bit Manipulation

6. Write a function `setbits(x,p,n,y)` that returns `x` with the `n` bits that begin at position `p` set to the rightmost `n` bits of `y`, leaving the other bits unchanged.
7. Write a function `invert(x,p,n)` that returns `x` with the `n` bits that begin at position `p` inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
8. Use bitwise operators to write a function that returns the n-bit field of a binary string `s` that begins at position `p`.
9. In a two's complement number system, `x &= (x-1)` deletes the rightmost 1-bit in `x`. Explain why.

---

10. Write a function that accepts a variable length argument list.
11. Create a simple version of `cp` command in UNIX.
12. Write a C program that simulates a counter and performs multiple operations on it across different functions. The counter must retain its value between function calls, and some functions must only be accessible within certain files. Additionally, manage the state of the counter across multiple file. If necessary, use header files to modularize the code better. Ensure you use conditional inclusion to avoid including header files more than necessary.
13. Write a program to check a C program for rudimentary syntax errors like unmatched parentheses, brackets, and braces. Don't forget about quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.)
14. Write a recursive `itoa` function.
15. Write a macro that returns the higher number of two numbers.
16. Use pointers to reimplement the fourth question in the [intermediate](##intermediate).
17. Write versions of the library functions `strncpy`, `strncat`, and `strncmp`, which operate on at most the first n characters of their argument strings. For example, `strncpy(s,t,n)` copies at most `n` characters of `t` to `s`. 
18. Make a program that takes command line arguments and stores the options (the `-h` or `--help` in commands) and commands in two different arrays. Optionally, recreate parts of the API of a real command such as `grep`.
19. Make a function that lets users give an array of any type that can be sorted (char, int), and the function to compare two elements of that same type (use function pointers) like a plug-and-play sort function.
20. Create the following data structures:
* Linked Lists
* Finite State Machines
* Binary Trees
* Hashmaps

---

## Expert

1. Write a program that converts a valid C declaration (such as `int num` or `char **argv`) to word descriptions ("num: an integer." or "argv: pointer to char arrays")
2. Build a tokenizer for a C program.
3. Implement a simple version of the #define processor (i.e., no arguments) suitable for use with C program using hash-search with blocks implemented with structures.
4. Implement `fopen` and `fsize`.
5. Implement a storage allocator like `malloc`.

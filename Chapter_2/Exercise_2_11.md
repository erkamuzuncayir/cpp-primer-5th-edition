# Chapter 2 - Exercise 11

## Exercise 2.11: Explain whether each of the following is a declaration or a definition:

## Solution

Note: The extern keyword tells the compiler that a variable is defined in another source module (outside of the current scope). The linker then finds this actual declaration and sets up the extern variable to point to the correct location.


(a) extern int ix = 1024;
    - Definition

(b) int iy;
    - Definition
(c) extern int iz;
    - Declaration
# Chapter 2 - Exercise 21

## Exercise 2.21: Explain each of the following definitions. Indicate whether any are illegal and, if so, why.


## Solution

int i = 0;

(a) double* dp = &i;
    - illegal, type of pointer variable and variable doesn't match.

(b) int *ip = i;
    - illegal, it doesn't use *&* address operator to take address of *i* variable.

(c) int *p = &i;
    - legal, type of pointer variable and variable matches and it use *&* address operator.
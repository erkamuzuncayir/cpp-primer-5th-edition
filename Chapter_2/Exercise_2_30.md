# Chapter 2 - Exercise 

## Exercise 2.30: For each of the following declarations indicate whether the object being declared has top-level or low-level const.

## Solution

- const int v2 = 0; int v1 = v2;
    - v2 has a top level const.

- int *p1 = &v1, &r1 = v1;
    - neither has a const.

- const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    - p2 has a low level const, p3 has both level const, r2 has a low level const.
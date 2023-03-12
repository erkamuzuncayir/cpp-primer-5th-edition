# Chapter 2 - Exercise 28

## Exercise 2.28: Explain the following definitions. Identify any that are illegal.

## Solution

(a) int i, *const cp;
    - illegal, const pointer must be initialized

(b) int *p1, *const p2;
    - illegal, const pointer must be initialized

(c) const int ic, &r = ic;
    - illegal, const variable must be initialized

(d) const int *const p3;
    - illegal, const pointer must be initialized

(e) const int *p;
    - legal, define a const int pointer  

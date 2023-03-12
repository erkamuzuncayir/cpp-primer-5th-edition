# Chapter 2 - Exercise 29

## Exercise 2.29: Uing the variables in the previous exercise, which of the following assignments are legal? Explain why.

## Solution

(a) i = ic;
    - legal, we can assign const int variable to nonconst int variable

(b) p1 = p3;
    - illegal, p1 must be const int pointer.

(c) p1 = &ic;
    - illegal, p1 must be const int pointer.

(d) p3 = &ic;
    - illegal, we can't reassign const pointer 

(e) p2 = p1;
    - illegal, we can't assign const pointers

(f) ic = *p3;
    - illegal, we can't assign const variable
# Chapter 2 - Exercise 31

## Exercise 2.31: Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.

## Solution

- r1 = v2;
    - illegal, r1 is a reference it can't be reassigned after initialization.

- p1 = p2; p2 = p1;
    - first illegal, low level const i can't be ignored.
    - second legal, top level const is ignored.

- p1 = p3; p2 = p3;
    - first illegal, low level const i can't be ignored.
    - second legal, both hast the same low level const. 
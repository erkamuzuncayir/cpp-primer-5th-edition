# Chapter 2 - Exercise 16

## Exercise 2.16: Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

## Solution

int i = 0, &r1 = i; double d = 0, &r2 = d;

(a) r2 = 3.14159;
    - valid

(b) r2 = r1;
    - valid, int value will be converted to double.

(c) i = r2;
    - valid, but double value will be truncated.

(d) r1 = d;
    - valid, but double value will be truncated.
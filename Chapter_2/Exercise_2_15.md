# Chapter 2 - Exercise 15

## Exercise 2.15: Which of the following definitions, if any, are invalid? Why?


## Solution

(a) int ival = 1.01;
    - valid, but value will be truncated.

(b) int &rval1 = 1.01;
    - invalid, a reference can't asign a literal.

(c) int &rval2 = ival;
    - valid.

(d) int &rval3;
    - invalid, a reference must be initalized.
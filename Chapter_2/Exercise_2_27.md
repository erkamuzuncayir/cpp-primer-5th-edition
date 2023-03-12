# Chapter 2 - Exercise 27

## Exercise 2.27: Which of the following initializations are legal? Explain why.

## Solution

(a) int i = -1, &r = 0;
    - illegal, we can't initalize plain reference *&r* with a literal. 

(b) int *const p2 = &i2;
    - legal, const pointer can point both const and nonconst variables.

(c) const int i = -1, &r = 0;
    - legal, we can initalize constant reference *&r* with a literal.

(d) const int *const p3 = &i2;
    - legal, const pointer points a const int variable.

(e) const int *p1 = &i2;
    - legal, plain pointer can point const variables.

(f) const int &const r2;
    - illegal, syntax error.

(g) const int i2 = i, &r = i;
    - legal, plain pointer, can point const variable.
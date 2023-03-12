# Chapter 2 - Exercise 33

## Exercise 2.33: Using the variable definitions from this section, determine what happens in each of these assignments:

### Definitions:

1. int i = 0, &r = i;
2. auto a = r; // a is an int (r is an alias for i, which has type int)
3. const int ci = i, &cr = ci;
4. auto b = ci; // b is an int (top-level const in ci is dropped)
5. auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
6. auto d = &i; // d is an int* (& of an int object is int*)
7. auto e = &ci; // e is const int* (& of a const object is low-level const)
8. auto &g = ci; // g is a const int& that is bound to ci

## Solution

1. a = 42; 
    - 42 will be assigned a.

2. b = 42;
    - 42 will be assigned b.

3. c = 42;
    - 42 will be assigned c.

4. d = 42; 
    - illegal, d is a int pointer. we must dereference it first.

5. e = 42;
    - illegal, e is a pointer to const int.

6. g = 42;
    illegal, we can't reassign a reference.
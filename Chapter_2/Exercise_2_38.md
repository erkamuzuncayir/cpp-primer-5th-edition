# Chapter 2 - Exercise 38

## Exercise 2.38: Describe the differences in type deduction between decltype and auto . Give an example of an expression where auto and decltype will deduce the same type and an example where they will deduce differing types.

## Solution

### Difference:

- auto would ignore top-level const, decltype won't:

const int a = 3;
auto b = a; // b is an int.
decltype( a ) c = a; // c is an const int.

- auto regards references as the types they refer to, decltype regards reference as reference:

int a = 2; int &b = a;
auto c = b; // c is an int.
decltype( b ) d = a; // d is a reference to int.

- auto doesn't differentiate rvalue from lvalue, decltype does:

int a = 2;
auto b = (a); // b is an int.
decltype((a)) c = a; // c is a reference to int.
# Chapter 2 - Exercise 24

## Exercise 2.24: Why is the initialization of p legal but that of lp illegal?

```cpp
int i = 42; void *p = &i; long *lp = &i;
```

## Solution

Because void pointers can hold all type of variables' address but other pointers can hold only same type of varibles' address.
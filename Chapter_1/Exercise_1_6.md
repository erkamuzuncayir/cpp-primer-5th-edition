# Chapter 1 - Exercise 6

## Exercise 1.6: Explain whether the following program fragment is legal.

```cpp
	std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```

*If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?*

## Solution

The program is illegal. "<<" cannot be used without std::cout. Thus, removing unnecessary semicolons will be fix the issue.

```cpp
	std::cout << "The sum of " << v1
          << " and " << v2
          << " is " << v1 + v2 << std::endl;
```

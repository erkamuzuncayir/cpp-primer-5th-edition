# Chapter 2 - Exercise 26

## Exercise 2.26: Which of the following are legal? For those that are illegal, explain why.

## Solution

(a) const int buf;
    - illegal, we have to initialize constant variable.

(b) int cnt = 0;
    -legal, regular int variable initialization.

(c) const int sz = cnt;
    - legal

(d) ++cnt; ++sz;
    - illegal, we can't modify const value after initalized it.
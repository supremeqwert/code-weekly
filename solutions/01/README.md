# [Week 01](./01) - Computing n<sup>n</sup> quickly

### Problem

We can compute n<sup>n</sup> trivially with O(n) (linear) time complexity in the
following way:

```ruby
exp = 1
n.times do { # multiply n, n times
  exp = exp * n;
}
```

But we can do better. In fact, it's fairly easy to compute n<sup>n</sup> in
O(log<sub>2</sub>(n)) time. Your task is to create a routine that can do so.
In particular, write a function `n_exp_n(n)` that takes one parameter `n` and
computes n<sup>n</sup>. Note that this is equivalent to writing a function
`exp(n, k)` where n = k.

Many discussions about this problem can be found online. The goal is for you to
not use them.

### Writing and Testing Your Solution

You are encouraged to write your solution in whatever language you wish to. All
that is required is that when your program runs, it takes in one argument (`n`)
and writes the result of n<sup>n</sup> to the standard output. To test your
program, write the command that executes your program in `SOLUTION_COMMAND` and
run `test.py`.

The output of `test.py` will notify you either of _failed tests_ or a _passing
program_.

If you wish to write your solution in C++, a template has been provided in
`src/TEMPLATE.cpp`, for which you will only have to fill in the body of
the `n_exp_n` function, compile the program, and write the command to execute
the solution in `SOLUTION_COMMAND`.

##### Example

_An example of the workflow can be found in [Week 00](../00-EXAMPLE)._

Say you write a solution in C++:

```cpp
// src/solution.cpp
uint32_t n_exp_n(uint32_t n) { /* solution */ }

int main(int argc, char* argv[]) {
  uint32_t n = argv[1]; // read in argument for n
  std::cout << n_exp_n(n); // compute n^n and write to stdout
}
```

Compile it: `g++ src/solution.cpp -o solution`

Put the command in `SOLUTION_COMMAND`: `./solution`

And run `python test.py` to test.

### Notes

Use at least 32-bit sized integers for this problem. You can assume all tests
will be with unsigned (positive) integers, which, when exponentiated in the form
n<sup>n</sup>, will not exceed the int32 limit.

### Hints

Don't use hints until you need them, but do use them if you need them.
[Decode](https://www.base64decode.org) a hint with base64.

Hint 1:

```
T2JzZXJ2ZSB0aGF0IDJeOCA9IDJeKDJeMyksIGFuZCBpbiBwYXJ0aWN1bGFyIHRoYXQgMl4zID0gOCBpbXBsaWVzIGxvZ18yKDgpID0gMy4=
```

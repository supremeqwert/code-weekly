# [Week 02](./02) - Addition of arbitrarily-long integers

_Released 02/13/2019_

### Problem

Machine number types allow us to derive most useful calculations quickly and
painlessly. But what if you want to find the precise count of the number of
atoms in two humans' bodies? That number won't fit in 64-bit, or even 128-bit
integers; to represent it, we need to create a `BigAssNumber`.

Your task is to write a procedure, via a class or otherwise, that takes two
unsigned integers in string form, adds them, and outputs the result of the
addition as a string. Two possible methods for this are:

- `add(big_1 : String, big_2 : String) -> result : String`
- `BigAssNumber(big_1) + BigAssNumber(big_2)`

There are efficient and inefficient ways to solve this problem. Shoot for the
former; in particular, do not use linked lists.

Many discussions about this problem can be found online. The goal is for you to
not use them.

### Writing and Testing Your Solution

You are encouraged to write your solution in whatever language you wish to. All
that is required is that when your program runs, it takes in two arguments
(`big_1` and `big_2`) and writes the result of `big_1 + big_2` to the standard
output. To test your program, write the command that executes your program in
`SOLUTION_COMMAND` and run the test suite with `python test.py`.

The output of `test.py` will notify you either of _failed tests_ or a _passing
program_.

If you wish to write your solution in C++, a template has been provided in
`src/TEMPLATE.cpp`, for which you will only have to fill in the body of
the `add` function and/or the `BigNum` class, compile the program, and write the
command to execute the solution (`./solution`) in `SOLUTION_COMMAND`.

##### Example

_An example of the workflow can be found in [Week 00](../00-EXAMPLE)._

Say you write a solution in C++:

```cpp
// src/solution.cpp
std::string add(std::string big1, std::string big2) { /* solution */ }

int main(int argc, char* argv[]) {
    const std::string& big1 = argv[1];
    const std::string& big2 = argv[2];
    std::cout << add(big1, big2);
}
```

Compile it: `g++ src/solution.cpp -o solution`

Put the command in `SOLUTION_COMMAND`: `./solution`

And run `python test.py` to test.

### Notes

You can assume that all integers in the test suite will be unsigned
(non-negative). Do not use predefined integer types; the goal is for you to
roll your own addition procedure.

### Hints

Don't use hints until you need them, but do use them if you need them.
[Decode](https://www.base64decode.org) a hint with base64.

Hint 1:

```
Q29uc2lkZXIgaG93IHlvdXIgcGVyZm9ybSBhZGRpdGlvbiBtYW51YWxseS4gSW4gcGFydGljdWxhciwgbm90aWNlIHRoYXQgeW91IGFkZCBvbmUgZGlnaXQgYXQgYSB0aW1lLCBhbmQgcGFzcyBjYXJyeSBiaXRzIGFzIGFwcHJvcHJpYXRlLg==
```

Hint 2:

```
VG8gbWFrZSB5b3VyIHNvbHV0aW9uIG1vcmUgZWZmaWNpZW50LCBjb25zaWRlciBhZGRpbmcgbGFyZ2VyLXNpemVkIGNodW5rcyBvZiBudW1iZXJzIGF0IG9uY2UgaW5zdGVhZCBvZiBhIGRpZ2l0IGF0IGEgdGltZS4=
```

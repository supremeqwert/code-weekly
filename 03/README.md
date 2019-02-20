# [Week 03](./03) - Approximating factorials quickly

_Released 02/20/2019_

### Problem

_This is an application of the code you wrote in [Week 01](../01)_.

In grade school, we studied the factorial as a computation derived in O(n) time;
in particular, we say that <a href="https://www.codecogs.com/eqnedit.php?latex=n!&space;=&space;\prod_{i=1}^ni" target="_blank"><img src="https://latex.codecogs.com/png.latex?n!&space;=&space;\prod_{i=1}^ni" title="n! = \prod_{i=1}^ni" /></a>, or code

```ruby
fact = 1
for i in 1 to N {
  fact = fact * i;
}
```

But just as with [n<sup>n</sup>](../01), we can do better. This week, we'll use
[Stirling's formula](https://en.wikipedia.org/wiki/Stirling%27s_approximation)
to **approximate** `n!`:

<a href="https://www.codecogs.com/eqnedit.php?latex=n!&space;\approx&space;\sqrt{2\pi&space;n}{(\frac{n}{e})}^n" target="_blank"><img src="https://latex.codecogs.com/png.latex?n!&space;\approx&space;\sqrt{2\pi&space;n}{(\frac{n}{e})}^n" title="n! \approx \sqrt{2\pi n}{(\frac{n}{e})}^n" /></a>

Of course, this formula won't give you `n!` exactly, but will get you pretty
close, and will likely be faster than a linear computation for large values of
`n`.

Your task is to write a procedure that approximates `n!` with the Stirling
formula, running in O(log(n)) time. The recommended way to do this is:

1. Copy your O(log(n)) time-complex exponential function `exp(n, k)` from
   [Week 01](../01) into this week's solution.
2. Create a new function `stirling(n)` that approximates `n!` with the Stirling
   formula defined above, running in O(log(n)) time by calling your `exp(n, k)`
   procedure.

All computations excluding function calls in your `stirling(n)` procedure
should be of constant time and space complexity.

Use at least 64-bit unsigned integers for the parameter `n`
of `stirling(n)`. Update your `exp(n, k)` function to use at least 64-bit
floating point values for the base `n`. From `stirling(n)`, return at least a
64s-bit unsigned integer, rounded up.

### Writing and Testing Your Solution

You are encouraged to write your solution in whatever language you wish to. All
that is required is that when your program runs, it takes in one argument
(`n`) and writes the result of `stirling(n)` to the standard output. To test
your program, write the command that executes your program in `SOLUTION_COMMAND`
and run the test suite with `python test.py`.

The output of `test.py` will notify you either of _failed tests_ or a _passing
program_.

If you wish to write your solution in C++, a template has been provided in
`src/TEMPLATE.cpp`, for which you will only have to paste your `exp(n, k)`
function and fill in the solution for `stirling(n)`, compile the program, and
write the command to execute the solution (`./solution`) in `SOLUTION_COMMAND`.

##### Example

_An example of the workflow can be found in [Week 00](../00-EXAMPLE)._

Say you write a solution in C++:

```cpp
// src/solution.cpp
uint32_t exp(uint32_t n, uint32_t k) { /* from Week 01 */ }
uint32_t stirling(uint32_t n) { /* solution */ }

int main(int argc, char* argv[]) {
    uint32_t n = std::stoul(argv[1]); // read in argument for n
    std::cout << stirling(n); // approximate n! and write to stdout
}
```

Compile it: `g++ src/solution.cpp -o solution`

Put the command in `SOLUTION_COMMAND`: `./solution`

And run `python test.py` to test.

### Notes

Use at least 64-bit unsigned integers for your parameters and return values.
Within your `stirling` procedure, use at least 64-bit floating point values, and
round your result up to the nearest 64-bit unsigned integer before returning.

Update your `exp` procedure to use at least 64-bit floating point values for the
base `n`.

### Hints

There are no hints for this exercise.

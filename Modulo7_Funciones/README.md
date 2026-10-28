# Module 7 — Functions

This module introduces functions as a way to divide programs into smaller, reusable pieces of logic.

The exercises progress from basic `void` functions to parameters, return values, references, mathematical algorithms, boolean functions, and combining multiple functions to solve larger problems.

## Exercises

### Exercise 1 — Basic Function

Defines and calls a simple `void` function that prints a greeting.

**Concepts practiced:**
- Function declaration and definition
- Calling a function
- `void`
- Separating logic from `main()`

---

### Exercise 2 — Function with Parameters

Creates a greeting function that receives a name as a parameter.

**Concepts practiced:**
- Function parameters
- Passing values to functions
- Using parameters inside function logic

---

### Exercise 3 — Function with Return Value

Creates a function that receives two integers and returns their sum.

**Concepts practiced:**
- Return types
- `return`
- Function arguments
- Storing a returned value

---

### Exercise 4 — Input Function

Moves user input into a reusable function that returns the number entered.

**Concepts practiced:**
- Encapsulating input logic
- Returning user-provided values
- Reusing function results

---

### Exercise 5 — Calculator with Functions

Combines separate functions for reading numbers and calculating their sum.

**Concepts practiced:**
- Function composition
- Reusing functions
- Passing returned values into other functions
- Separating responsibilities

---

### Exercise 6 — Return the Larger Number

Creates a function that compares two numbers and returns the larger value.

**Concepts practiced:**
- Conditional logic inside functions
- Returning one of multiple possible results
- Reusable comparison logic

---

### Exercise 7 — Calculate Average

Creates a function that receives three integers and returns their average as a `double`.

**Concepts practiced:**
- Multiple parameters
- Floating-point return values
- Avoiding integer division with `3.0`
- Reusable calculations

---

### Exercise 8 — Improved Calculator

Builds a calculator using separate functions for:

- Addition
- Subtraction
- Multiplication
- Division

A `switch` statement selects which function to execute.

**Concepts practiced:**
- Modular program design
- Multiple reusable functions
- `switch`
- Returning different numeric types
- Type casting for decimal division

---

### Exercise 9 — Count Positive Numbers

Uses one function to ask how many numbers will be entered and another to count how many of those values are positive.

**Concepts practiced:**
- Functions containing loops
- Returning calculated results
- Separating input and processing logic
- Counting algorithms inside functions

---

### Exercise 10 — Swap Values with References

Creates a function that swaps two variables using reference parameters.

**Concepts practiced:**
- References with `&`
- Passing arguments by reference
- Modifying variables from another function
- Swapping values with a temporary variable

Because the parameters are references:

```cpp
void intercambiarNumeros(int& a, int& b)
```

changes made inside the function affect the original variables.

---

### Exercise 11 — Multiple Results with References

Analyzes several numbers and modifies three external counters:

- Positive values
- Negative values
- Zeros

**Concepts practiced:**
- Multiple reference parameters
- Returning multiple results indirectly
- Classification
- Functions containing loops and conditions

---

### Exercise 12 — Factorial

Creates an iterative function that calculates the factorial of a number.

**Concepts practiced:**
- Mathematical functions
- Accumulators
- `for` loops inside functions
- Repeated multiplication

The implemented algorithm starts with `1` and multiplies every value from `2` through the requested number.

---

### Exercise 13 — Power

Creates a function that calculates a number raised to an exponent through repeated multiplication.

**Concepts practiced:**
- Repeated multiplication
- Function parameters
- Accumulators
- Implementing mathematical operations manually

---

### Exercise 14 — Prime Number

Creates a boolean function that determines whether a number is prime.

**Concepts practiced:**
- Functions returning `bool`
- Divisibility
- Modulo operator `%`
- Early loop termination with `break`
- Mathematical validation

Numbers smaller than `2` are correctly treated as non-prime.

---

### Exercise 15 — Fibonacci

Creates an iterative function that returns the Fibonacci value at a requested position.

**Concepts practiced:**
- Iterative sequence generation
- Tracking previous values
- Base cases
- Updating multiple variables during a loop

The implementation handles positions `0` and `1` separately before calculating later values.

## Challenges

### Challenge 1 — Absolute Value

Creates a function that converts a negative integer into its positive equivalent while leaving positive values unchanged.

**Concepts practiced:**
- Simple mathematical transformation
- Conditional logic inside functions
- Returning processed values

---

### Challenge 2 — Even Number

Creates a boolean function that determines whether a number is even.

The result is returned directly from:

```cpp
dato % 2 == 0
```

**Concepts practiced:**
- Boolean expressions
- Direct boolean returns
- Modulo operator
- `boolalpha` for displaying `true` and `false`

---

### Challenge 3 — Count Digits

Counts the number of digits in an integer by repeatedly dividing it by `10`.

The value `0` is handled as a special case and correctly returns one digit.

**Concepts practiced:**
- Integer division
- `while`
- Digit-processing algorithms
- Handling edge cases

---

### Challenge 4 — Reverse a Number

Reverses the digits of an integer.

The algorithm repeatedly:

1. Extracts the final digit using `% 10`
2. Adds it to the reversed number
3. Removes the final digit using `/ 10`

**Concepts practiced:**
- Digit extraction
- Modulo
- Integer division
- Building a result incrementally

---

### Challenge 5 — Palindrome Number

Determines whether a number reads the same forward and backward.

The solution reuses the number-reversal function and compares the reversed value with the original.

Negative numbers are considered non-palindromes.

**Concepts practiced:**
- Reusing functions
- Boolean functions
- Function composition
- Palindrome detection
- Edge-case handling

---

### Challenge 6 — Maximum of Three Numbers

Creates a function that receives three integers and returns the greatest one.

**Concepts practiced:**
- Multiple parameters
- Tracking a current maximum
- Sequential comparisons
- Reusable maximum-value logic

## Concepts Covered

By completing this module, I practiced:

- Function declaration and definition
- Calling functions
- `void` functions
- Parameters and arguments
- Return values
- Different return types
- Function composition
- Reusable program logic
- Separation of responsibilities
- Pass by reference
- Modifying external values through references
- Returning multiple results through references
- Boolean functions
- Mathematical functions
- Functions containing loops and conditionals
- Iterative algorithms
- Digit-processing algorithms
- Reusing helper functions
- Breaking larger problems into smaller functions

## Technologies

- C++
- Visual Studio
- Console applications
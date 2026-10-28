# Module 6 — Basic Algorithms

This module applies loops and conditionals to common algorithmic patterns such as counting, searching, finding maximum and minimum values, and analyzing groups of numbers.

The focus shifts from learning syntax to solving small problems through reusable problem-solving patterns.

## Exercises

### Exercise 1 — Counting Pattern

Receives a collection of numbers and counts how many of them are positive.

**Concepts practiced:**
- Counting pattern
- Processing multiple inputs
- Conditional counting
- Incrementing a counter only when a condition is satisfied

The counter changes only when:

```cpp
numero > 0
```

---

### Exercise 2 — Finding the Maximum

Reads several numbers and determines which one is the largest.

The first number entered is used to initialize the current maximum.

**Concepts practiced:**
- Maximum-value algorithm
- Initializing from real input
- Comparing each new value
- Updating the current best result

Instead of using an arbitrary starting value, the program begins with:

```cpp
mayor = numero;
```

using the first number entered.

---

### Exercise 3 — Searching for Negative Numbers

Reads several numbers and determines whether at least one negative value was entered.

**Concepts practiced:**
- Search pattern
- Boolean flags
- Detecting whether a condition occurred
- Using `bool` to store program state

The variable:

```cpp
bool hayNegativos = false;
```

acts as a flag that changes when a negative number is found.

---

### Exercise 4 — Number Analysis

Analyzes a collection of numbers and reports:

- Number of positive values
- Number of negative values
- Number of zeros
- Maximum value
- Minimum value

**Concepts practiced:**
- Multiple counters
- Maximum and minimum algorithms
- Classification of input values
- Combining several algorithms in one loop
- Initializing maximum and minimum with the first input

This exercise combines several previously learned patterns into one program.

---

### Exercise 5 — Average, Maximum, and Minimum

Receives a collection of grades and calculates:

- Average
- Highest grade
- Lowest grade

**Concepts practiced:**
- Accumulation
- Maximum search
- Minimum search
- Average calculation
- Processing multiple values in a single pass

A single loop performs all three tasks while each grade is being entered.

## Concepts Covered

By completing this module, I practiced:

- Counting patterns
- Search patterns
- Boolean flags
- Maximum-value algorithms
- Minimum-value algorithms
- Accumulators
- Classification
- Processing collections of user input
- Combining multiple algorithms in one traversal
- Initializing algorithms using the first real value
- Average calculations

## Technologies

- C++
- Visual Studio
- Console applications
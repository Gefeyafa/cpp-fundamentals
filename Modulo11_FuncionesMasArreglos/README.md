# Module 11 — Functions and Arrays

This module combines functions with fixed-size arrays.

The exercises focus on moving common array algorithms into reusable functions, including input, output, searching, counting, copying, comparing, reversing, and sorting.

## Exercises

### Exercise 1 — Print an Array with a Function

Passes an array and its size to a function that displays every element.

**Concepts practiced:**
- Passing arrays to functions
- Passing array size separately
- Array traversal inside functions

---

### Exercise 2 — Fill an Array with a Function

Moves both array input and output into separate functions.

**Concepts practiced:**
- Functions that modify arrays
- Reusable input/output logic
- Separating responsibilities

---

### Exercise 3 — Sum an Array

Creates a function that traverses an array and returns the sum of its elements.

**Concepts practiced:**
- Functions returning calculated values
- Accumulators
- Array traversal

---

### Exercise 4 — Find the Maximum

Returns the largest element of an array.

**Concepts practiced:**
- Maximum-value algorithm
- Initializing from the first element
- Returning results from array-processing functions

---

### Exercise 5 — Check Whether a Number Exists

Creates a boolean search function.

The function returns immediately when the requested number is found.

**Concepts practiced:**
- Linear search
- Functions returning `bool`
- Early `return`
- Search algorithms as reusable functions

---

### Exercise 6 — Find a Position

Searches for a number and returns its index.

If the number does not exist, the function returns:

```cpp
-1
```

**Concepts practiced:**
- Search-result indices
- Sentinel values
- Linear search

---

### Exercise 7 — Count Occurrences

Counts how many times a requested value appears in an array.

**Concepts practiced:**
- Frequency counting
- Search without early termination
- Returning counters from functions

---

### Exercise 8 — Find the Minimum

Creates a reusable function that returns the smallest array element.

**Concepts practiced:**
- Minimum-value algorithm
- Sequential comparisons
- Array processing

---

### Exercise 9 — Copy an Array

Copies every value from one array into another using a function.

**Concepts practiced:**
- Multiple array parameters
- Element-by-element copying
- Source and destination arrays

---

### Exercise 10 — Compare Arrays

Determines whether two arrays contain identical values in the same positions.

**Concepts practiced:**
- Array equality
- Boolean functions
- Early termination when a difference is found

---

### Exercise 11 — Reverse an Array

Reverses an array in place using a reusable function.

**Concepts practiced:**
- In-place modification
- Swapping
- Symmetric indices
- Passing arrays for modification

---

### Exercise 12 — Bubble Sort with a Function

Moves the Bubble Sort algorithm into a reusable sorting function.

**Concepts practiced:**
- Sorting algorithms
- Nested loops
- Adjacent comparisons
- In-place sorting

## Final Project — Array Manager

Combines the module into an interactive array-management program.

The application stores both an original array and a working copy and provides a menu with operations to:

1. Display the current array
2. Calculate its sum
3. Find the maximum and minimum
4. Search for a number
5. Count occurrences
6. Reverse the array
7. Sort it from smallest to largest
8. Compare it with the original
9. Restore the original array
0. Exit

**Concepts practiced:**
- Function-based program organization
- Multiple array algorithms
- Maintaining original and mutable program state
- Copying and restoring data
- Menu-driven programs
- `do-while`
- `switch`
- Reusing helper functions

## Concepts Covered

By completing this module, I practiced:

- Passing arrays to functions
- Array-processing functions
- Returning calculated values
- Boolean search functions
- Sentinel values
- Maximum and minimum algorithms
- Frequency counting
- Array copying
- Array comparison
- In-place reversal
- Bubble Sort
- Separating algorithms into reusable functions
- Building a larger program from multiple helper functions

## Technologies

- C++
- Visual Studio
- Console applications
# Module 9 — Arrays

This module introduces fixed-size arrays and common algorithms for processing collections of values.

The exercises progress from basic declaration and indexing to searching, counting, reversing, sorting, inserting, deleting, copying, and comparing arrays.

## Exercises

### Exercise 1 — Create and Access an Array

Creates an integer array of five elements and accesses the first and last positions.

**Concepts practiced:**
- Array declaration
- Array indexing
- Zero-based positions
- Reading individual elements

---

### Exercise 2 — Traverse an Array

Uses a loop to display every element of an array.

**Concepts practiced:**
- Array traversal
- `for` loops
- Constant array sizes
- Index-based access

---

### Exercise 3 — Capture Array Data

Reads five values from the user, stores them in an array, and displays them afterward.

**Concepts practiced:**
- Writing into arrays
- Reading from arrays
- Using loops for input and output

---

### Exercise 4 — Sum All Elements

Stores user input in an array while accumulating the total.

**Concepts practiced:**
- Arrays and accumulators
- Processing values during input
- Sum algorithms

---

### Exercise 5 — Average

Calculates the sum and average of all values in an array.

**Concepts practiced:**
- Accumulation
- Average calculation
- Casting to `double`
- Array processing

---

### Exercise 6 — Maximum and Minimum

Finds the largest and smallest values in an array.

**Concepts practiced:**
- Maximum search
- Minimum search
- Initializing from the first element
- Sequential comparisons

---

### Exercise 7 — Search for a Number

Performs a linear search and reports whether a target exists.

**Concepts practiced:**
- Linear search
- Boolean flags
- `break`
- Comparing each element against a target

---

### Exercise 8 — Find a Position

Searches an array and stores the index where a value was found.

**Concepts practiced:**
- Search positions
- Array indices
- Sentinel values
- Tracking a matching position

---

### Exercise 9 — Count Occurrences

Counts how many times a requested number appears.

**Concepts practiced:**
- Frequency counting
- Linear traversal
- Search without stopping after the first match

---

### Exercise 10 — Reverse an Array

Reverses an array in place by swapping elements from opposite ends.

**Concepts practiced:**
- In-place algorithms
- Swapping
- Symmetric indices
- Processing half of an array

---

### Exercise 11 — Bubble Sort

Sorts five numbers from smallest to largest using Bubble Sort.

**Concepts practiced:**
- Sorting algorithms
- Nested loops
- Adjacent comparisons
- Swapping
- Reducing comparisons after each pass

The comparison:

```cpp
if (numeros[j] > numeros[j + 1])
```

swaps adjacent values when they are in the wrong order.

---

### Exercise 12 — Delete an Element

Removes an element from a selected position by shifting later elements one place to the left.

**Concepts practiced:**
- Position validation
- Element shifting
- Logical array size reduction
- Manual deletion in fixed-size arrays

---

### Exercise 13 — Insert an Element

Creates space for a new value by shifting elements to the right.

**Concepts practiced:**
- Backward traversal
- Right shifting
- Position-based insertion
- Preserving existing values while moving them

The shift is performed from right to left to avoid overwriting values before they are copied.

---

### Exercise 14 — Copy an Array

Copies every element from one array into another.

**Concepts practiced:**
- Array copying
- Element-by-element assignment
- Independent arrays

---

### Exercise 15 — Compare Two Arrays

Determines whether two arrays contain the same values in the same positions.

**Concepts practiced:**
- Element-by-element comparison
- Boolean flags
- Early termination with `break`
- Array equality

## Concepts Covered

By completing this module, I practiced:

- Fixed-size arrays
- Array indexing
- Array traversal
- Constants for array sizes
- Input and output with arrays
- Accumulators
- Maximum and minimum algorithms
- Linear search
- Frequency counting
- In-place reversal
- Bubble Sort
- Nested loops
- Element shifting
- Manual insertion and deletion
- Copying arrays
- Comparing arrays

## Technologies

- C++
- Visual Studio
- Console applications
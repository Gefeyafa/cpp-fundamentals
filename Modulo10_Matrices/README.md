# Module 10 — Matrices

This module introduces two-dimensional arrays, also known as matrices.

The exercises progress from basic row-and-column access to traversal, searching, aggregation, transposition, and matrix multiplication.

## Exercises

### Exercise 1 — Declare and Access a Matrix

Creates a `2 x 3` matrix, assigns values manually, and displays its first and last elements.

**Concepts practiced:**
- Two-dimensional arrays
- Rows and columns
- Matrix indexing
- Access with `[row][column]`

---

### Exercise 2 — Fill a Matrix with Loops

Uses nested loops to fill and display a `3 x 3` matrix.

**Concepts practiced:**
- Nested loops
- Row traversal
- Column traversal
- User input in two dimensions

The outer loop controls rows and the inner loop controls columns.

---

### Exercise 3 — Sum All Matrix Elements

Traverses the complete matrix and calculates the sum of every element.

**Concepts practiced:**
- Matrix traversal
- Nested loops
- Accumulators
- Processing all cells

---

### Exercise 4 — Sum Each Row

Calculates a separate total for each row.

**Concepts practiced:**
- Row-based processing
- Resetting an accumulator
- Nested-loop scope
- Per-row calculations

The accumulator is reset before processing each new row.

---

### Exercise 5 — Sum Each Column

Calculates a total for every column.

**Concepts practiced:**
- Column-based traversal
- Switching the usual row/column access order
- Per-column aggregation

---

### Exercise 6 — Maximum and Minimum

Searches the complete matrix for its largest and smallest values.

**Concepts practiced:**
- Maximum and minimum algorithms in two dimensions
- Initializing from `matriz[0][0]`
- Comparing every cell

---

### Exercise 7 — Search for a Number

Searches the matrix for a target and records the row and column where it appears.

**Concepts practiced:**
- Two-dimensional linear search
- Tracking coordinates
- Sentinel values
- Row and column indices

---

### Exercise 8 — Count Occurrences

Counts how many times a selected number appears in the matrix.

**Concepts practiced:**
- Frequency counting
- Nested traversal
- Searching every matrix cell

---

### Exercise 9 — Transpose a Matrix

Creates a transposed version of a matrix by exchanging rows and columns.

The key operation is:

```cpp
transpuesta[j][i] = matriz[i][j];
```

**Concepts practiced:**
- Matrix transposition
- Swapping row and column indices
- Creating a second matrix for transformed data

---

### Exercise 10 — Matrix Multiplication

Multiplies two `3 x 3` matrices and stores the result in a third matrix.

**Concepts practiced:**
- Matrix multiplication
- Triple nested loops
- Dot products
- Accumulating products
- Initializing result cells before accumulation

The central operation is:

```cpp
matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
```

For each result cell, the algorithm multiplies corresponding values from a row of matrix A and a column of matrix B, then adds those products together.

This exercise introduces a more complex nested-loop algorithm where each index has a different role:

- `i` selects a row from matrix A
- `j` selects a column from matrix B
- `k` traverses the values used to calculate the dot product

## Concepts Covered

By completing this module, I practiced:

- Two-dimensional arrays
- Rows and columns
- Nested loops
- Matrix input and output
- Row aggregation
- Column aggregation
- Maximum and minimum searches
- Searching in two dimensions
- Frequency counting
- Matrix transposition
- Triple nested loops
- Matrix multiplication
- Dot-product accumulation
- Managing multiple indices simultaneously

## Technologies

- C++
- Visual Studio
- Console applications
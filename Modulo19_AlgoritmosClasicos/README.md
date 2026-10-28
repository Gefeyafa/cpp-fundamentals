# Module 19 — Classic Algorithms and Problem-Solving Patterns

This module implements several classic algorithms and common problem-solving patterns manually.

Each exercise also analyzes time and space complexity, connecting the practical implementations with the Big O concepts studied in the previous module.

## Exercises

### Exercise 1 — Linear Search

Searches sequentially through a vector and returns the index of a requested value.

**Concepts practiced:**
- Linear search
- Early return
- Sentinel value `-1`

**Complexity:**
- Best time: `O(1)`
- Worst time: `O(n)`
- Space: `O(1)`

---

### Exercise 2 — Binary Search

Searches a sorted vector by repeatedly eliminating approximately half of the remaining range.

**Concepts practiced:**
- Binary search
- Left and right boundaries
- Middle-index calculation
- Sorted-data requirement

**Complexity:**
- Best time: `O(1)`
- Average/Worst time: `O(log n)`
- Space: `O(1)`

---

### Exercise 3 — Selection Sort

Repeatedly finds the smallest value in the unsorted portion and moves it into its correct position.

**Concepts practiced:**
- Selection Sort
- Nested loops
- Tracking a minimum index
- In-place sorting

**Complexity:**
- Time: `O(n²)`
- Space: `O(1)`

---

### Exercise 4 — Insertion Sort

Moves each element left until it reaches its correct position in the already processed section.

**Concepts practiced:**
- Insertion Sort
- Incrementally sorted regions
- Adjacent swaps

**Complexity:**
- Best time: `O(n)`
- Average/Worst time: `O(n²)`
- Space: `O(1)`

---

### Exercise 5 — Bubble Sort

Repeatedly compares adjacent elements and swaps them when necessary.

**Concepts practiced:**
- Bubble Sort
- Adjacent comparisons
- Nested iteration
- In-place sorting

**Complexity of this implementation:**
- Time: `O(n²)`
- Space: `O(1)`

---

### Exercise 6 — Two Pointers from Opposite Ends

Determines whether two values in a sorted vector add up to a target.

One pointer begins at each end of the vector.

**Concepts practiced:**
- Two Pointers
- Sorted-data reasoning
- Moving boundaries according to the current sum

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 7 — Two Pointers in the Same Direction

Removes duplicates from a sorted vector logically in place.

One pointer tracks the last unique element while another scans the remaining values.

**Concepts practiced:**
- Slow and fast pointers
- In-place modification
- Duplicate removal

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 8 — Sliding Window

Finds the maximum sum among all contiguous windows of a fixed size.

Instead of recalculating every window from scratch, the algorithm removes the element leaving the window and adds the new element entering it.

**Concepts practiced:**
- Sliding Window
- Fixed-size windows
- Reusing previous calculations

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 9 — Frequency Table / Hashing

Builds a frequency table using:

```cpp
unordered_map<int, int>
```

and returns how many times a requested value appears.

**Concepts practiced:**
- Hash tables
- Frequency counting
- `unordered_map`

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

---

### Exercise 10 — Prefix Sum

Builds a prefix-sum vector where each position stores the accumulated sum up to that index.

Once built, range-sum queries can be answered in constant time.

**Concepts practiced:**
- Prefix Sum
- Precomputation
- Range queries
- Trading extra memory for faster repeated queries

**Complexity:**
- Prefix construction: `O(n)`
- Each query: `O(1)`
- Extra space: `O(n)`

---

### Exercise 11 — Comparing Different Solutions

Solves a Two Sum-style existence problem using hashing.

For every number, the algorithm calculates the missing value required to reach the target and checks whether that value has already appeared.

**Concepts practiced:**
- Hashing
- Complement technique
- `unordered_set`
- Improving brute-force approaches

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

## Mixed Problems

The following exercises combine the previously learned patterns instead of focusing on only one algorithm.

---

### Exercise 12 — Sorted Squares

Receives a sorted vector containing positive and negative numbers and produces a new vector containing their squares in sorted order.

The algorithm compares squared values from both ends.

**Pattern:**
- Two Pointers

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 13 — Multiple Range Sum Queries

Builds a prefix-sum vector once and then performs multiple range queries.

If there are `q` queries:

**Complexity:**
- Prefix construction: `O(n)`
- Queries: `O(q)`
- Total: `O(n + q)`
- Space: `O(n)`

This demonstrates the benefit of precomputation when many queries operate on the same data.

---

### Exercise 14 — Maximum Fixed Window Sum

Applies Sliding Window to find the maximum sum of four consecutive elements.

**Pattern:**
- Sliding Window

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 15 — Detect Duplicates

Uses an `unordered_set` to determine whether any value appears more than once.

**Pattern:**
- Hashing

Each number is checked against values that have already been seen.

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

---

### Exercise 16 — Binary Search Practice

Implements Binary Search again on a larger sorted vector.

**Pattern:**
- Binary Search

**Complexity:**
- Best time: `O(1)`
- Average/Worst time: `O(log n)`
- Space: `O(1)`

---

### Exercise 17 — Pair Sum

Determines whether a sorted vector contains two elements whose sum equals a target.

**Pattern:**
- Two Pointers

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 18 — Final Exercise: Two Sum

Solves the classic Two Sum problem and returns the indices of two numbers whose sum equals the target.

The solution stores previously visited numbers and their indices in:

```cpp
unordered_map<int, int>
```

For every number:

1. Calculate the missing complement.
2. Check whether that complement has already been seen.
3. If found, return both indices.
4. Otherwise store the current number and its index.

**Concepts practiced:**
- Hashing
- Complement technique
- Index tracking
- `unordered_map`
- Returning multiple results in a vector
- Recognizing a common interview pattern

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

## Algorithms and Patterns Covered

By completing this module, I practiced:

- Linear Search
- Binary Search
- Selection Sort
- Insertion Sort
- Bubble Sort
- Two Pointers
- Slow/Fast Pointers
- Sliding Window
- Hashing
- Frequency tables
- Prefix Sum
- Precomputation
- Range queries
- Duplicate detection
- Complement-based search
- Two Sum
- Time complexity analysis
- Space complexity analysis
- Comparing multiple possible solutions

## Technologies

- C++
- Standard Template Library
- Algorithm analysis
- Big O notation
- Visual Studio
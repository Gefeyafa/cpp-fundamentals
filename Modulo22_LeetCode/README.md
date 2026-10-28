# Module 22 — LeetCode Practice

This module applies the algorithms, data structures, complexity analysis, and problem-solving strategies learned throughout the previous modules to LeetCode-style problems.

The focus is not only on obtaining a correct solution, but also on recognizing patterns and improving solutions when a more efficient approach is available.

## Exercises

### Exercise 1 — Find Pivot Index

Finds an index where the sum of all elements to the left equals the sum of all elements to the right.

The first implementation recalculates both sums for every possible pivot.

**Initial complexity:**
- Time: `O(n²)`
- Space: `O(1)`

### Optimized Version

The optimized solution first calculates the total sum and maintains a running `leftSum`.

The right side can then be calculated with:

```text
rightSum = totalSum - leftSum - currentElement
```

**Optimized complexity:**
- Time: `O(n)`
- Space: `O(1)`

This exercise demonstrates how eliminating repeated work can reduce a quadratic solution to a linear one.

---

### Exercise 2 — Valid Anagram

Determines whether two strings contain exactly the same characters with the same frequencies.

**Pattern:**
- Frequency Map
- Hashing

The solution increments frequencies for the first string and decrements them for the second.

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

---

### Exercise 3 — Valid Palindrome

Determines whether a string is a palindrome while ignoring non-alphanumeric characters and letter case.

The solution first creates a cleaned lowercase string and then compares characters from both ends.

**Pattern:**
- String preprocessing
- Two Pointers

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 4 — Move Zeroes

Moves every zero to the end of the vector while preserving the relative order of non-zero elements.

The algorithm first compacts non-zero values and then fills the remaining positions with zeroes.

**Pattern:**
- Two Pointers / Write Pointer
- In-place modification

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 5 — Merge Sorted Array

Merges two sorted arrays directly into the available space at the end of the first array.

Three indices move from right to left:

- Last valid value in `nums1`
- Last value in `nums2`
- Last available output position

**Pattern:**
- Two Pointers
- Backward traversal

**Complexity:**
- Time: `O(m + n)`
- Space: `O(1)`

Working backward prevents existing values in `nums1` from being overwritten before they are processed.

---

### Exercise 6 — Remove Duplicates from Sorted Array

Removes duplicates logically in place from a sorted vector and returns the number of unique elements.

**Pattern:**
- Slow/Fast Pointers
- In-place array modification

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 7 — Remove Element

Removes every occurrence of a requested value logically in place.

A write index keeps track of where the next valid value should be stored.

**Pattern:**
- Write Pointer
- In-place filtering

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 8 — Binary Search

Searches for a target in a sorted vector by repeatedly eliminating half of the remaining search range.

**Pattern:**
- Binary Search

**Complexity:**
- Time: `O(log n)`
- Space: `O(1)`

---

### Exercise 9 — Maximum Average Subarray

Finds the contiguous subarray of size `k` with the maximum average.

Instead of calculating every subarray from scratch, the solution maintains the sum of the current window.

**Pattern:**
- Fixed Sliding Window

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 10 — Minimum Size Subarray Sum

Finds the shortest contiguous subarray whose sum is at least a target value.

The right pointer expands the window, while the left pointer shrinks it whenever the current sum satisfies the requirement.

**Pattern:**
- Variable Sliding Window

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 11 — Longest Substring Without Repeating Characters

Finds the maximum length of a substring containing no repeated characters.

An `unordered_set` represents the characters currently inside the window.

When a duplicate appears, the left side shrinks until the window becomes valid again.

**Pattern:**
- Variable Sliding Window
- Hash Set

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

---

### Exercise 12 — Maximum Subarray

Finds the largest possible sum of a contiguous subarray.

The initial implementation evaluates subarrays beginning at every position.

**Initial complexity:**
- Time: `O(n²)`
- Space: `O(1)`

### Optimized Version — Kadane's Algorithm

The optimized solution maintains:

- The best sum ending at the current position
- The best overall sum found

When continuing the previous subarray becomes worse than starting a new one, the algorithm starts again from the current element.

**Optimized complexity:**
- Time: `O(n)`
- Space: `O(1)`

This exercise demonstrates another major optimization from a quadratic approach to a linear one.

---

### Exercise 13 — Search Insert Position

Uses Binary Search to find either:

- The target's existing index
- The position where the target should be inserted

If the value is not found, the final `start` position represents the correct insertion index.

**Pattern:**
- Binary Search

**Complexity:**
- Time: `O(log n)`
- Space: `O(1)`

---

### Exercise 14 — Valid Parentheses

Determines whether brackets are correctly matched and nested.

Supported pairs include:

- `()`
- `[]`
- `{}`

**Pattern:**
- Stack

Each closing symbol must match the most recently encountered unmatched opening symbol.

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 15 — Subarray Sum Equals K

Counts how many contiguous subarrays have a sum exactly equal to `k`.

The solution combines a running Prefix Sum with an `unordered_map` containing frequencies of previous prefix sums.

For each current prefix sum:

```text
prefixSum - k
```

represents a previous accumulated sum that would produce a subarray totaling exactly `k`.

The map begins with:

```cpp
frequencies[0] = 1;
```

representing the empty prefix before the vector starts.

**Pattern:**
- Prefix Sum
- Hashing
- Frequency Map

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

## Patterns Practiced

By completing this module, I applied:

- Prefix Sum
- Frequency Maps
- Hashing
- Hash Sets
- Two Pointers
- Slow/Fast Pointers
- Write Pointers
- Backward traversal
- Fixed Sliding Window
- Variable Sliding Window
- Binary Search
- Stack
- Kadane's Algorithm
- In-place array modification
- String preprocessing
- Brute-force optimization

## Optimization Practice

Several exercises explicitly compare an initial solution with a more efficient version.

Examples include:

- **Find Pivot Index:** `O(n²)` → `O(n)`
- **Maximum Subarray:** `O(n²)` → `O(n)`

This reinforces an important problem-solving workflow:

1. Build a correct solution.
2. Analyze its complexity.
3. Identify repeated work.
4. Recognize a known optimization pattern.
5. Implement the improved solution.
6. Recalculate time and space complexity.

## Concepts Covered

This module combines the major algorithmic concepts studied throughout the C++ foundations course:

- Arrays and vectors
- Strings
- STL containers
- Hash tables
- Stacks
- Algorithmic patterns
- In-place algorithms
- Search algorithms
- Prefix calculations
- Window-based techniques
- Complexity analysis
- Edge-case handling
- Optimization
- LeetCode-style problem solving

## Technologies

- C++
- Standard Template Library
- LeetCode-style algorithms
- Data structures
- Big O analysis
- Visual Studio
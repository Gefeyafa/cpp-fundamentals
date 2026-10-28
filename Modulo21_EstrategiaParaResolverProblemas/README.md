# Module 21 — Problem-Solving Strategy

This module focuses on selecting an appropriate algorithmic strategy for a problem instead of immediately writing code.

The exercises combine previously learned techniques such as linear traversal, brute force, Sliding Window, hashing, stacks, and state tracking.

Each solution also includes time and space complexity analysis.

## Exercises

### Exercise 1 — First Negative Index

Finds the index of the first negative number in a vector.

The algorithm stops as soon as a match is found.

**Pattern:**
- Linear Scan

**Complexity:**
- Best time: `O(1)`
- Worst time: `O(n)`
- Space: `O(1)`

---

### Exercise 2 — Count Increases

Counts how many elements are greater than the element immediately before them.

**Concepts practiced:**
- Adjacent-element comparison
- Single-pass traversal
- Tracking relationships between neighboring values

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 3 — Find Pair with Target Sum

Checks every possible pair to determine whether two numbers add up to a target.

**Pattern:**
- Brute Force

The second loop begins after the first index so that the same element is not used twice and pairs are not repeated.

**Complexity:**
- Time: `O(n²)`
- Space: `O(1)`

This exercise provides a baseline solution that can later be compared with more efficient techniques such as hashing or Two Pointers.

---

### Exercise 4 — Maximum Sum Subarray of Fixed Size

Finds the largest sum among all contiguous subarrays of a fixed size.

**Pattern:**
- Sliding Window

Instead of recalculating each subarray, the window removes the value that leaves and adds the value that enters.

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 5 — First Duplicate Value

Returns the first value encountered for the second time.

**Pattern:**
- Hashing

An `unordered_set` stores values that have already appeared.

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

---

### Exercise 6 — Second Largest Distinct Value

Finds the second largest distinct number using a single traversal.

The algorithm tracks:

- Current largest value
- Current second-largest value
- Whether a valid second-largest value has been found

**Concepts practiced:**
- State tracking
- Edge-case handling
- Distinct-value comparison
- Solving without sorting

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 7 — Find Missing Number

Finds the missing number from a sequence by comparing:

- The sum of values that should exist
- The sum of values actually present

**Concepts practiced:**
- Mathematical reasoning
- Avoiding unnecessary sorting or auxiliary containers
- Comparing expected and actual totals

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 8 — Maximum Profit

Finds the maximum possible profit from buying and later selling at a higher price.

The algorithm keeps track of:

- Lowest price seen so far
- Current possible profit
- Maximum profit found

**Concepts practiced:**
- Single-pass optimization
- Running minimum
- Maintaining useful state while traversing data

**Complexity:**
- Time: `O(n)`
- Space: `O(1)`

---

### Exercise 9 — Valid Brackets

Determines whether parentheses, brackets, and braces are correctly matched and nested.

**Pattern:**
- Stack

Opening symbols are pushed onto the stack and each closing symbol must match the most recent opening symbol.

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 10 — First Unique Character

Returns the index of the first character that appears exactly once.

The solution performs two passes:

1. Build a frequency table.
2. Traverse the original string to preserve character order.

**Pattern:**
- Frequency Map / Hashing

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

---

### Exercise 11 — Longest Consecutive Streak

Finds the length of the longest consecutive sequence of integers without sorting the vector.

Values are stored in an `unordered_set`.

A number only begins a new streak when:

```text
number - 1
```

does not exist.

The algorithm then searches forward through consecutive values.

**Pattern:**
- Hashing
- Sequence detection

**Complexity:**
- Average time: `O(n)`
- Space: `O(n)`

## Problem-Solving Skills Practiced

This module emphasizes a repeatable process:

1. Understand exactly what the problem is asking.
2. Identify the input and expected output.
3. Consider edge cases.
4. Start with a correct simple solution.
5. Identify repeated or unnecessary work.
6. Recognize a known algorithmic pattern.
7. Choose an appropriate data structure.
8. Analyze time and space complexity.
9. Improve the solution when a better approach exists.

## Patterns Covered

By completing this module, I practiced recognizing:

- Linear Scan
- Adjacent comparisons
- Brute Force
- Sliding Window
- Hashing
- Sets
- Frequency Maps
- Stacks
- Running minimum/maximum
- State tracking
- Mathematical simplification
- Early return
- Sequence detection

## Technologies

- C++
- Standard Template Library
- Algorithmic problem solving
- Big O analysis
- Visual Studio
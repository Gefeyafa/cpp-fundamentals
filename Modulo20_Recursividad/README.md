# Module 20 — Recursion

This module introduces recursion: solving a problem by having a function call itself with a smaller version of the same problem.

The exercises focus on identifying base cases, recursive cases, understanding the call stack, and analyzing the time and space complexity of recursive solutions.

## Exercises

### Exercise 1 — Recursive Countdown

Prints numbers from 5 down to 1 recursively.

**Concepts practiced:**
- Recursive functions
- Base cases
- Recursive calls
- Decreasing the problem size

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 2 — Recursive Count Up

Prints numbers from 1 through 5 even though the recursive calls move downward first.

The output happens while the recursive calls return.

**Concepts practiced:**
- Call stack behavior
- Code before vs. after the recursive call
- Recursion unwinding

---

### Exercise 3 — Recursive Sum

Calculates:

```text
1 + 2 + ... + n
```

using recursion.

**Concepts practiced:**
- Returning recursive results
- Combining the current value with a smaller subproblem
- Recursive accumulation

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 4 — Recursive Factorial

Calculates factorial using:

```cpp
return number * factorial(number - 1);
```

**Concepts practiced:**
- Mathematical recursion
- Recursive multiplication
- Base cases

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 5 — Recursive Power

Calculates a number raised to an exponent through repeated recursive multiplication.

The base case uses the rule that any number raised to `0` equals `1`.

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 6 — Recursive Vector Traversal

Traverses a vector recursively using an index.

**Concepts practiced:**
- Recursion with collections
- Passing an index between calls
- Using the end of a vector as a base case

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 7 — Recursive Vector Sum

Recursively calculates the sum of all elements in a vector.

Each call returns:

```text
current element + sum of the remaining elements
```

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 8 — Recursive Search

Determines whether a target value exists inside a vector.

The search stops immediately when the target is found.

**Concepts practiced:**
- Recursive linear search
- Early return
- Boolean recursion

**Complexity:**
- Best time: `O(1)`
- Worst time: `O(n)`
- Worst space: `O(n)`

---

### Exercise 9 — Reverse Vector Output Recursively

Prints a vector in reverse order without modifying the vector itself.

The function first reaches the end recursively and prints values while the call stack unwinds.

**Concepts practiced:**
- Recursion unwinding
- Reversing operation order
- Call stack behavior

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 10 — Fibonacci Sequence

Calculates a Fibonacci value using the classic recursive definition:

```text
fib(n) = fib(n - 1) + fib(n - 2)
```

**Concepts practiced:**
- Multiple recursive calls
- Multiple base cases
- Recursive trees
- Recognizing inefficient recursion

**Complexity:**
- Time: approximately `O(2^n)`
- Space: `O(n)`

This exercise demonstrates that a recursive solution can be simple to understand while still being inefficient.

---

### Exercise 11 — Recursive Binary Search

Implements Binary Search recursively.

Each call reduces the search range to approximately half its previous size.

**Concepts practiced:**
- Divide-and-conquer recursion
- Recursive range boundaries
- Binary Search
- Returning results through recursive calls

**Complexity:**
- Best time: `O(1)`
- Average/Worst time: `O(log n)`
- Space: `O(log n)`

---

### Exercise 12 — Recursive Palindrome

Determines whether a string is a palindrome by comparing characters from both ends.

Each recursive call moves both indices toward the center.

**Concepts practiced:**
- Two-index recursion
- String processing
- Recursive boolean validation

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

---

### Exercise 13 — Recursive Maximum

Finds the largest value in a vector recursively.

Each call compares the current element against the maximum value returned from the rest of the vector.

**Concepts practiced:**
- Returning information from recursive calls
- Recursive maximum search
- Divide-and-combine reasoning

**Complexity:**
- Time: `O(n)`
- Space: `O(n)`

## Concepts Covered

By completing this module, I practiced:

- Recursive functions
- Base cases
- Recursive cases
- Call stack behavior
- Recursion unwinding
- Recursive return values
- Recursive vector traversal
- Recursive search
- Recursive mathematical functions
- Multiple recursive branches
- Divide-and-conquer recursion
- Recursive Binary Search
- Recursive string processing
- Time complexity of recursion
- Space complexity caused by the call stack
- Recognizing when recursion is and is not efficient

## Technologies

- C++
- Recursion
- Algorithm analysis
- Big O notation
- Visual Studio
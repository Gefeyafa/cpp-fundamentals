# Module 5 — Loops

This module introduces repetition structures in C++, including `while`, `do-while`, `for`, accumulators, counters, and nested loops.

The exercises progress from simple repetition to small interactive programs that combine loops with conditionals and menus.

## Exercises

### Exercise 1 — While Loop

Receives a number and prints every value from that number up to 10.

**Concepts practiced:**
- `while` loops
- Loop conditions
- Incrementing variables with `++`
- Repeating instructions while a condition remains true

---

### Exercise 2 — Countdown with While

Receives a number and counts backward until reaching zero.

**Concepts practiced:**
- `while`
- Decrementing values with `--`
- Countdown loops
- Changing the loop-control variable

---

### Exercise 3 — Accumulators

Calculates the sum of the numbers from 1 through 10.

**Concepts practiced:**
- Counters
- Accumulators
- `+=`
- Updating multiple variables inside a loop

The exercise separates two common loop roles:

- `contador` controls the iteration
- `suma` accumulates the result

---

### Exercise 4 — Average Calculator

Asks how many grades will be entered, reads each grade, calculates their total, and then computes the average.

**Concepts practiced:**
- User-controlled loop length
- Accumulating input values
- Calculating an average
- Type casting
- Integer-to-`double` conversion

The calculation uses:

```cpp
promedio = (double)suma / materias;
```

to preserve decimal values in the result.

---

### Exercise 5 — Secret Number

Repeats a guessing prompt until the user enters the correct secret number.

**Concepts practiced:**
- Condition-controlled repetition
- `while`
- Comparing values with `!=`
- Combining loops and `if` statements
- Repeating until a goal is reached

---

### Exercise 6 — Menu with Do-While

Creates a menu that repeatedly allows the user to:

1. Display a greeting
2. Display a message
3. Exit

The menu continues until option `3` is selected.

**Concepts practiced:**
- `do-while`
- Repeating menus
- `switch`
- `case`
- `break`
- `default`
- Exit conditions

This demonstrates an important property of `do-while`: the body executes at least once before the condition is checked.

---

### Exercise 7 — Multiplication Table

Receives a number and prints its multiplication table from 1 through 10.

**Concepts practiced:**
- `for` loops
- Loop initialization, condition, and increment
- Using the loop index in calculations
- Repetitive formatted output

---

### Exercise 8 — Sum of Even Numbers

Receives an upper limit, identifies every even number from 1 to that limit, and calculates their total.

**Concepts practiced:**
- `for`
- Combining loops and conditionals
- Modulo operator `%`
- Detecting even numbers
- Accumulating selected values

Even numbers are detected using:

```cpp
i % 2 == 0
```

---

### Exercise 9 — Nested Loops

Receives a size and prints a square made of `*` characters.

**Concepts practiced:**
- Nested `for` loops
- Rows and columns
- Two-dimensional iteration
- Generating simple console patterns

The outer loop controls the rows while the inner loop controls the columns.

---

### Exercise 10 — Improved Secret Number

Improves the previous guessing game by telling the user whether each guess is too high or too low.

**Concepts practiced:**
- `while`
- `if / else if / else`
- Repeated user input
- Comparing guesses against a target
- Providing feedback inside a loop

The program continues until the correct number is entered.

## Concepts Covered

By completing this module, I practiced:

- `while`
- `do-while`
- `for`
- Counters
- Accumulators
- Increment and decrement operators
- Loop conditions
- Nested loops
- Repetitive menus
- Combining loops with conditionals
- Repeated user input
- Basic pattern generation
- Type casting during calculations

## Technologies

- C++
- Visual Studio
- Console applications
# Module 2 — Variables and Operators

This module focuses on working with different C++ data types and using arithmetic and compound assignment operators.

The exercises introduce variables for storing different kinds of information and then practice modifying numeric values through operators.

## Exercises

### Exercise 1 — Variables and Data Types

Asks the user for several pieces of personal information and stores each value using an appropriate data type.

The program stores:

- Name
- Age
- Height
- Last-name initial
- Driver's license status

**Concepts practiced:**
- Declaring variables
- Choosing appropriate data types
- Reading user input with `cin`
- Displaying stored values with `cout`
- Working with different C++ primitive and standard types

**Data types used:**

- `string` — text
- `int` — whole numbers
- `double` — decimal numbers
- `char` — a single character
- `bool` — true/false values

The exercise also demonstrates that a `bool` can receive numeric input:

```cpp
cin >> licencia;
```

where:

- `1` represents `true`
- `0` represents `false`

---

### Exercise 2 — Operators

Receives an integer from the user and performs several calculations using compound assignment and remainder operators.

The program calculates:

- The original number
- Double the number
- Triple the number
- The remainder when dividing by 2
- The remainder when dividing by 5

**Concepts practiced:**
- Integer variables
- Assignment with `=`
- Compound multiplication assignment with `*=`
- Modulo/remainder operator `%`
- Compound modulo assignment with `%=`
- Reusing variables
- Resetting a variable to its original value before another calculation

For example:

```cpp
resultado *= 2;
```

is equivalent to:

```cpp
resultado = resultado * 2;
```

The exercise also uses:

```cpp
resultado %= 2;
```

which stores the remainder obtained when dividing `resultado` by `2`.

This makes it possible to work with properties such as divisibility and remainders.

## Concepts Covered

By completing this module, I practiced:

- Variable declaration
- Basic C++ data types
- `string`
- `int`
- `double`
- `char`
- `bool`
- Assignment operators
- Compound assignment operators
- Arithmetic operations
- The modulo operator
- Reading and displaying different types of data
- Reusing variables during calculations

## Technologies

- C++
- Visual Studio
- Console applications
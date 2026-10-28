# Module 3 — Conditionals

This module introduces conditional statements and decision-making in C++.

The exercises progress from simple `if/else` conditions to compound conditions, multiple decision branches, and a practical ATM withdrawal simulation.

## Exercises

### Exercise 1 — Voting Eligibility

Asks the user for their age and determines whether they are old enough to vote.

**Concepts practiced:**
- `if` statements
- `else` statements
- Comparison operators
- Decision-making based on user input

The condition used is:

```cpp
if (edad >= 18)
```

This introduces the greater-than-or-equal comparison operator (`>=`) to evaluate whether a condition is true or false.

---

### Exercise 2 — Roller Coaster Requirements

Asks the user for their age and height and determines whether they meet both requirements to ride a roller coaster.

The user must:

- Be at least 12 years old
- Be at least 1.40 meters tall

**Concepts practiced:**
- Multiple conditions
- Logical AND operator (`&&`)
- Combining comparison expressions
- Using `if/else` with more than one requirement

The condition:

```cpp
if (edad >= 12 && altura >= 1.40)
```

only becomes true when **both conditions** are satisfied.

This exercise introduces boolean logic for combining multiple requirements.

---

### Exercise 3 — Grade Classification

Receives a numeric grade and classifies it into one of three categories:

- Below 70 → `Reprobado`
- 70 to 89 → `Aprobado`
- 90 or higher → `Excelente`

**Concepts practiced:**
- `if`
- `else if`
- `else`
- Multiple decision paths
- Ordered condition evaluation
- Numeric range classification

The program evaluates the conditions from top to bottom:

```cpp
if (calificacion < 70)
{
    // Reprobado
}
else if (calificacion < 90)
{
    // Aprobado
}
else
{
    // Excelente
}
```

Because each previous condition has already been ruled out, the second condition effectively represents grades from 70 through 89.

---

### Exercise 4 — ATM Withdrawal

Simulates a simple ATM withdrawal.

The program asks the user for:

- Current account balance
- Withdrawal amount

It then checks whether enough funds are available.

If the balance is sufficient, the withdrawal amount is subtracted from the balance. Otherwise, the program displays an insufficient funds message.

**Concepts practiced:**
- Conditional validation
- Comparing numeric values
- Updating a variable after a successful condition
- Compound subtraction assignment with `-=`
- Applying conditionals to a practical scenario

The main condition is:

```cpp
if (saldo >= retiro)
```

If it succeeds, the balance is updated using:

```cpp
saldo -= retiro;
```

which is equivalent to:

```cpp
saldo = saldo - retiro;
```

This exercise demonstrates how a decision can determine whether the program is allowed to modify its current state.

## Concepts Covered

By completing this module, I practiced:

- Conditional statements
- `if`
- `else`
- `else if`
- Comparison operators
- Logical operators
- The logical AND operator (`&&`)
- Multiple decision branches
- Numeric range classification
- Conditional validation
- Updating values based on conditions
- Compound assignment operators

## Technologies

- C++
- Visual Studio
- Console applications
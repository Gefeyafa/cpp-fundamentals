# Module 12 — References and Pointers

This module introduces memory addresses, pointers, references, pointer dereferencing, pointer arithmetic, and different ways of passing values to functions.

The exercises explore how C++ can access and modify data indirectly through memory.

## Exercises

### Exercise 1 — Values and Memory Addresses

Displays variables together with their memory addresses using the address-of operator `&`.

**Concepts practiced:**
- Memory addresses
- Address-of operator `&`
- Relationship between variables and memory

---

### Exercise 2 — Create a Pointer

Creates a pointer that stores the address of an integer.

```cpp
int* puntero = &numero;
```

**Concepts practiced:**
- Pointer declaration
- Pointer types
- Storing memory addresses

---

### Exercise 3 — Modify a Variable Through a Pointer

Uses pointer dereferencing to read and modify the original variable.

```cpp
*puntero = 100;
```

**Concepts practiced:**
- Dereference operator `*`
- Indirect access
- Modifying data through pointers

---

### Exercise 4 — References

Creates a reference as another name for an existing variable.

**Concepts practiced:**
- Reference declaration
- Aliases
- Modifying the original value through a reference

---

### Exercise 5 — Pass by Reference

Passes an integer by reference to a function that doubles it.

**Concepts practiced:**
- Reference parameters
- Modifying caller variables
- Pass by reference

---

### Exercise 6 — Modify Through a Pointer

Passes a variable's address to a function and triples its value.

**Concepts practiced:**
- Pointer parameters
- Address passing
- Dereferencing inside functions

---

### Exercise 7 — Arrays and Pointers

Demonstrates that an array can provide access to the address of its first element.

The exercise compares:

```cpp
numeros[0]
```

with:

```cpp
*numeros
```

and:

```cpp
numeros
```

with:

```cpp
&numeros[0]
```

---

### Exercise 8 — Pointer Arithmetic

Traverses an array through pointer arithmetic.

```cpp
*(numeros + i)
```

**Concepts practiced:**
- Pointer arithmetic
- Array-pointer relationship
- Dereferencing calculated addresses

---

### Exercise 9 — Functions with Arrays and Pointers

Receives an array using an explicit pointer parameter:

```cpp
void imprimirArreglo(int* arreglo, int TAM)
```

**Concepts practiced:**
- Arrays as pointer parameters
- Pointer arithmetic inside functions
- Traversing memory sequentially

---

### Exercise 10 — Const Pointer Parameter

Uses a pointer to constant data:

```cpp
const int* arreglo
```

The function can read array elements but should not modify them through the pointer.

**Concepts practiced:**
- `const`
- Read-only pointer access
- Protecting function arguments

---

### Exercise 11 — Value vs Reference vs Pointer

Compares three ways of passing data to functions:

- Pass by value
- Pass by reference
- Pass by pointer

The pass-by-value function does not modify the original variable, while the reference and pointer versions do.

**Concepts practiced:**
- Copy semantics
- Reference semantics
- Pointer semantics
- Function parameter behavior

---

### Exercise 12 — `nullptr`

Creates an empty pointer and checks whether it points to a valid object before dereferencing it.

**Concepts practiced:**
- `nullptr`
- Pointer validation
- Safe dereferencing
- Null-pointer checks

---

### Exercise 13 — Pointer to Pointer

Creates a double pointer:

```cpp
int** doblePuntero = &puntero;
```

and modifies the original integer through two levels of indirection.

**Concepts practiced:**
- Pointer to pointer
- Multiple levels of dereferencing
- `**`

---

### Exercise 14 — Const Reference

Passes a string through a constant reference.

```cpp
const string& mensaje
```

This avoids making a copy while preventing the function from modifying the original value.

**Concepts practiced:**
- Const references
- Read-only references
- Efficient parameter passing

## Final Project — Number Manager

Combines references, pointers, and const parameters into an interactive number-management program.

The application allows the user to:

1. Display two numbers
2. Swap them using references
3. Double the first number using a pointer
4. Triple the second number using a pointer
5. Display their memory addresses and values
6. Find the larger number using const references
0. Exit

**Concepts practiced:**
- References for modification
- Pointers for modification
- Address-of and dereference operators
- Const references
- Const pointers
- Pointer validation
- Menu-driven program design
- Choosing an appropriate parameter-passing technique

## Concepts Covered

By completing this module, I practiced:

- Memory addresses
- Address-of operator `&`
- Pointer declaration
- Dereference operator `*`
- References
- Pass by value
- Pass by reference
- Pass by pointer
- Arrays and pointers
- Pointer arithmetic
- `const` pointer parameters
- Const references
- `nullptr`
- Pointer validation
- Double pointers
- Multiple levels of indirection

## Technologies

- C++
- Visual Studio
- Console applications
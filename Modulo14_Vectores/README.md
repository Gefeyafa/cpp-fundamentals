# Module 14 — Vectors

This module introduces `std::vector`, a dynamic container that can grow and shrink during program execution.

The exercises progress from basic vector creation and insertion to range-based loops, references, common vector operations, vectors of structs, searching, modification, and a complete player manager.

## Exercises

### Exercise 1 — First Vector

Creates an empty integer vector and adds three user-provided values.

**Concepts practiced:**
- `std::vector`
- `#include <vector>`
- `push_back()`
- Vector indexing
- Dynamic storage

---

### Exercise 2 — `push_back()` and `size()`

Allows the user to decide how many numbers to store and displays the final number of elements.

**Concepts practiced:**
- Dynamic container size
- `push_back()`
- `size()`
- Traversing a vector by index

Unlike a traditional array, the number of stored elements does not need to be known at compile time.

---

### Exercise 3 — Range-Based For Loop

Traverses a vector using a range-based `for` loop and calculates the sum of its elements.

```cpp
for (int numero : numeros)
```

**Concepts practiced:**
- Range-based `for`
- Simplified container traversal
- Accumulators
- Reading vector elements without indices

---

### Exercise 4 — Modify Elements with References

Doubles every value stored in a vector.

```cpp
for (int& numero : numeros)
{
    numero *= 2;
}
```

**Concepts practiced:**
- References inside range-based loops
- Modifying container elements directly
- Difference between copying and referencing an element

---

### Exercise 5 — Vector of Strings

Stores a dynamic collection of names.

**Concepts practiced:**
- `vector<string>`
- `getline()`
- Dynamic collections of text
- Const references in range-based loops

---

### Exercise 6 — Practicing `auto`

Stores article prices and calculates their total while using `auto` to infer the element type.

```cpp
for (const auto& precio : precios)
```

**Concepts practiced:**
- `auto`
- Type inference
- Const references
- `vector<double>`

---

### Exercise 7 — Functions with Vectors

Creates separate functions for adding and displaying vector elements.

**Concepts practiced:**
- Passing vectors by reference
- Passing vectors by const reference
- Modifying vectors through functions
- Avoiding unnecessary copies

---

### Exercise 8 — Basic Vector Operations

Builds a menu to practice common `vector` operations:

- `front()`
- `back()`
- `size()`
- `pop_back()`
- `clear()`
- `empty()`

**Concepts practiced:**
- Inspecting vector contents
- Removing elements
- Clearing a container
- Checking whether a vector is empty
- Avoiding invalid access to empty vectors

---

### Exercise 9 — Vector of Structs

Creates a dynamic collection of `Jugador` objects.

Each player contains:

- Name
- Health

**Concepts practiced:**
- `vector<struct>`
- Custom types inside STL containers
- Adding complete objects with `push_back()`
- Traversing objects using range-based loops

---

### Exercise 10 — Players with Functions

Moves player creation and display logic into reusable functions.

**Concepts practiced:**
- `vector<Jugador>`
- Functions with vectors of structs
- Reference parameters
- Const reference parameters
- Modular organization

---

### Exercise 11 — Search for a Player

Searches the vector by player name and returns the player's index.

If no player is found, the function returns `-1`.

**Concepts practiced:**
- Linear search in vectors
- Searching custom objects
- Sentinel values
- Accessing a struct using a returned vector index

---

### Exercise 12 — Modify Player Health

Searches for a player and modifies their health directly inside the vector.

**Concepts practiced:**
- Searching before modification
- Updating objects stored in a vector
- Reusing helper functions
- Persistent changes to dynamic collections

## Final Project — Player Manager with Vector

Builds an interactive player-management program using a dynamic collection instead of a fixed-size array.

The program allows the user to:

1. Add players
2. Display all players
3. Search for a player
4. Modify a player's health
5. Remove the last player
6. Display the number of registered players
7. Exit

**Concepts practiced:**
- Dynamic data storage
- `vector<Jugador>`
- `push_back()`
- `pop_back()`
- `size()`
- `empty()`
- Searching custom objects
- Modifying vector elements
- Functions with reference and const-reference parameters
- Menu-driven program organization

This project demonstrates one of the main advantages of `vector` over fixed-size arrays: players can be added dynamically while the program is running.

## Concepts Covered

By completing this module, I practiced:

- `std::vector`
- Dynamic containers
- `push_back()`
- `pop_back()`
- `front()`
- `back()`
- `size()`
- `clear()`
- `empty()`
- Vector indexing
- Range-based `for`
- `auto`
- References in range-based loops
- Const references
- Functions with vectors
- Vectors of structs
- Searching and modifying dynamic collections

## Technologies

- C++
- Standard Template Library (STL)
- Visual Studio
- Console applications
# Module 13 — Structs and Enums

This module introduces custom data structures using `struct`, enumerations with `enum` and `enum class`, nested structures, arrays of structures, and functions that operate on structured data.

The exercises gradually build toward a small player-management system.

## Exercises

### Exercise 1 — First Struct

Defines a `Persona` structure containing:

- Name
- Age
- Height

A `Persona` object is created, filled with user input, and displayed.

**Concepts practiced:**
- `struct`
- Custom data types
- Structure members
- Member access with `.`

---

### Exercise 2 — Structs and Functions

Moves structure input and output into reusable functions.

**Concepts practiced:**
- Struct parameters
- Pass by reference
- Const references
- Separating data from operations

---

### Exercise 3 — Compare Two People by Age

Creates two `Persona` objects and determines which one is older.

**Concepts practiced:**
- Comparing struct members
- Passing multiple structures to functions
- Const references

---

### Exercise 4 — Array of Structs

Creates an array containing three `Persona` objects.

**Concepts practiced:**
- Arrays of custom types
- Iterating through structures
- Reusing input and output functions

---

### Exercise 5 — Find the Oldest Person

Searches an array of people and returns the `Persona` with the greatest age.

**Concepts practiced:**
- Returning structs from functions
- Maximum-value algorithms with custom objects
- Arrays of structures

---

### Exercise 6 — Pointer to a Struct

Creates a pointer to a `Persona` and accesses its members with the arrow operator.

```cpp
puntero->nombre
```

**Concepts practiced:**
- Struct pointers
- Arrow operator `->`
- Accessing structured data indirectly

---

### Exercise 7 — First Enum

Defines a difficulty enumeration:

```cpp
enum Dificultad
{
    Facil,
    Normal,
    Dificil
};
```

**Concepts practiced:**
- `enum`
- Named constant states
- Comparing enumeration values

---

### Exercise 8 — Player with State

Combines an `enum` with a `Jugador` structure.

The player's health determines whether their state becomes:

- `Vivo`
- `Herido`
- `Muerto`

**Concepts practiced:**
- Structs containing enum values
- Representing program states
- Updating structured data through functions

---

### Exercise 9 — Direct Initialization

Creates complete `Persona` objects directly using initializer lists.

```cpp
Persona persona1 = { "Gerardo Cervantes", 28, 1.80 };
```

**Concepts practiced:**
- Aggregate initialization
- Initializing multiple struct members at once

---

### Exercise 10 — `enum class`

Introduces scoped enumerations.

```cpp
enum class Dificultad
```

Values are accessed explicitly through their type:

```cpp
Dificultad::Normal
```

**Concepts practiced:**
- `enum class`
- Scoped enum values
- Stronger type organization

---

### Exercise 11 — Struct Inside a Struct

Creates a `Posicion` structure and stores it inside a `Jugador`.

```cpp
struct Jugador
{
    string nombre;
    int vida;
    Posicion posicion;
};
```

**Concepts practiced:**
- Nested structures
- Hierarchical data
- Accessing nested members

---

### Exercise 12 — Complete Player

Combines:

- `Jugador`
- `Posicion`
- `Estado`

The program receives player data, calculates the player's state from their health, and displays all information.

**Concepts practiced:**
- Multiple custom types
- Nested structs
- `enum class`
- Functions that update object state
- Functions that display structured data

## Final Project — Player Manager

Builds an interactive system for managing an array of players.

Each player contains:

- Name
- Health
- State
- X position
- Y position

The program allows the user to:

1. Enter player information
2. Display all players
3. Search for a player by name
4. Modify a player's health
5. Exit

When health changes, the player's state is automatically recalculated.

The program also prevents operations that depend on player data until the players have first been entered.

**Concepts practiced:**
- Arrays of structs
- Nested structs
- `enum class`
- Searching custom objects
- Returning object positions
- Updating a specific object inside an array
- Maintaining state between menu operations
- Validation with boolean flags
- Reference parameters
- Const reference parameters
- Modular program organization

## Concepts Covered

By completing this module, I practiced:

- `struct`
- Custom data types
- Struct members
- Member access with `.`
- Struct pointers and `->`
- Passing structs to functions
- Arrays of structs
- Returning structs from functions
- Aggregate initialization
- `enum`
- `enum class`
- Scoped enumerations
- Nested structs
- Modeling entities and their state
- Searching and modifying structured data
- Building larger programs around custom data types

## Technologies

- C++
- Visual Studio
- Console applications
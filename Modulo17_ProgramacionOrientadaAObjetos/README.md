# Module 17 — Object-Oriented Programming

This module introduces Object-Oriented Programming (OOP) in C++.

The exercises progressively build from basic classes and objects to encapsulation, constructors, validation, static members, composition, inheritance, and runtime polymorphism.

## Exercises

### Exercise 1 — First Class

Creates a `Jugador` class containing a name and score and instantiates multiple objects.

**Concepts practiced:**
- `class`
- Objects
- Public members
- Creating multiple instances

---

### Exercise 2 — Constructor

Adds a constructor that initializes player data when an object is created.

**Concepts practiced:**
- Constructors
- Object initialization
- Constructor parameters

---

### Exercise 3 — Getters and Setters

Makes the player's data private and provides controlled access through methods.

**Concepts practiced:**
- `private`
- `public`
- Encapsulation
- Getters
- Setters
- Constructor initializer lists
- Input validation

The setter only accepts non-negative scores.

---

### Exercise 4 — Object Behavior

Adds a method that increases a player's score.

**Concepts practiced:**
- Methods that modify object state
- Encapsulating behavior inside a class
- Objects as both data and behavior

---

### Exercise 5 — Display Information

Moves the responsibility for displaying player information into the class itself.

**Concepts practiced:**
- Object methods
- Encapsulation of display logic
- Class responsibilities

---

### Exercise 6 — Const Methods

Marks read-only methods with `const`.

```cpp
void mostrarInformacion() const
```

**Concepts practiced:**
- Const member functions
- Read-only object operations
- Expressing method intent

---

### Exercise 7 — Const Objects

Creates a constant `Jugador` object and uses const methods to access its information.

**Concepts practiced:**
- Const objects
- Why const objects can only call const-compatible methods

---

### Exercise 8 — Data Validation Inside a Class

Validates the player's initial score inside the constructor.

Negative scores are converted to zero.

**Concepts practiced:**
- Maintaining valid object state
- Constructor validation
- Encapsulation of business rules

---

### Exercise 9 — Constructor Overloading

Provides both:

- A default constructor
- A parameterized constructor

The default player is initialized as `"Desconocido"` with a score of `0`.

**Concepts practiced:**
- Constructor overloading
- Default object state
- Multiple ways to create the same type of object

---

### Exercise 10 — Destructor

Adds a destructor that executes when a player object is destroyed.

```cpp
~Jugador()
```

**Concepts practiced:**
- Destructors
- Object lifetime
- Automatic cleanup when objects leave scope

---

### Exercise 11 — `this` Pointer

Uses `this->` to distinguish a class member from a parameter with the same name.

```cpp
this->puntuacion = puntuacion;
```

**Concepts practiced:**
- `this`
- Current-object pointer
- Name disambiguation

---

### Exercise 12 — Static Members and Methods

Adds a static counter shared by every `Jugador` object.

**Concepts practiced:**
- Static data members
- Static member functions
- Data shared between all class instances
- Access with the class name

Example:

```cpp
Jugador::obtenerCantidadDeJugadores()
```

---

### Exercise 13 — Composition

Creates a `Posicion` class and stores a `Posicion` object inside `Jugador`.

**Concepts practiced:**
- Composition
- Classes containing other objects
- Constructor chaining through initializer lists
- Modeling "has-a" relationships

A player **has a** position.

---

### Exercise 14 — Inheritance and `protected`

Creates a base `Personaje` class and derives `Jugador` from it.

```cpp
class Jugador : public Personaje
```

The base class provides shared properties such as name and health.

**Concepts practiced:**
- Inheritance
- Base and derived classes
- `protected`
- Base-class constructors
- Reusing common behavior

A `Jugador` **is a** `Personaje`.

---

### Exercise 15 — Polymorphism

Introduces virtual methods and method overriding.

Both `Jugador` and `Enemigo` derive from `Personaje` and provide their own implementation of:

```cpp
mostrarTipo()
```

Base-class pointers are then used to call the correct derived implementation.

**Concepts practiced:**
- `virtual`
- `override`
- Runtime polymorphism
- Base-class pointers
- Dynamic dispatch

## Final Project — Character System

Combines the main OOP concepts into a small character system.

The project defines:

- `Posicion`
- `Personaje`
- `Jugador`
- `Enemigo`

### Base Character

`Personaje` contains:

- Name
- Health
- Position
- Static character counter

It also provides:

- Getters
- Health validation
- Damage handling
- Virtual display methods
- Virtual destructor

### Player

`Jugador` adds:

- Score
- Score modification
- Overridden information and type methods

### Enemy

`Enemigo` adds:

- Damage value
- Overridden information and type methods

The program creates one player and two enemies and accesses them through `Personaje*` pointers.

It then modifies their state through damage and score operations while using polymorphism to display the correct information for each character type.

**Concepts practiced:**
- Encapsulation
- Constructors
- Initializer lists
- Validation
- Getters and setters
- Composition
- Inheritance
- Protected members
- Static members
- Virtual methods
- Method overriding
- Polymorphism
- Base-class pointers
- Virtual destructors
- Object state management

## Concepts Covered

By completing this module, I practiced:

- Classes and objects
- Access modifiers
- Encapsulation
- Constructors
- Constructor overloading
- Initializer lists
- Destructors
- Getters and setters
- Const methods
- Const objects
- `this`
- Static members
- Static methods
- Composition
- Inheritance
- `protected`
- Base and derived classes
- Virtual functions
- `override`
- Runtime polymorphism
- Base-class pointers
- Virtual destructors

## Technologies

- C++
- Object-Oriented Programming
- Visual Studio
- Console applications
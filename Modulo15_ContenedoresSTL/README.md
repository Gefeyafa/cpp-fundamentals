# Module 15 — STL Containers

This module explores several containers and utility types from the C++ Standard Template Library.

The exercises introduce `pair`, `stack`, `queue`, `map`, `unordered_map`, `set`, and `unordered_set`, showing how different data structures are useful for different problems.

## Exercises

### Exercise 1 — First Pair

Stores a player's name and health inside a `pair<string, int>`.

**Concepts practiced:**
- `std::pair`
- `first`
- `second`
- Grouping two related values

---

### Exercise 2 — Player Ranking with Pairs

Stores players as:

```cpp
vector<pair<string, int>>
```

and manually sorts them by score using Bubble Sort.

**Concepts practiced:**
- Vectors of pairs
- Accessing `first` and `second`
- Sorting structured values
- Building a leaderboard

---

### Exercise 3 — First Stack

Introduces `std::stack`.

Values are inserted and removed from the top of the stack.

**Concepts practiced:**
- `stack`
- `push()`
- `pop()`
- `top()`
- `size()`
- LIFO behavior

LIFO means **Last In, First Out**.

---

### Exercise 4 — Empty a Stack

Receives several numbers and removes them one by one until the stack becomes empty.

**Concepts practiced:**
- LIFO ordering
- `empty()`
- Processing and removing stack elements

---

### Exercise 5 — Action History

Uses a `stack<string>` to represent a history of actions.

The most recent action can be accessed or removed first.

**Concepts practiced:**
- Stack as history
- Undo-like behavior
- Storing strings in stacks

---

### Exercise 6 — Balanced Parentheses

Determines whether parentheses in an expression are balanced.

Opening parentheses are pushed onto a stack, while closing parentheses remove matching openings.

**Concepts practiced:**
- Stack-based validation
- Matching opening and closing symbols
- Detecting invalid closing symbols
- Checking for unclosed symbols

---

### Exercise 7 — Balanced Symbols

Extends the previous algorithm to support:

- `()`
- `[]`
- `{}`

The top element of the stack must match the corresponding closing symbol.

**Concepts practiced:**
- Stack-based parsing
- Multiple symbol types
- Nested structure validation

---

### Exercise 8 — First Queue

Introduces `std::queue`.

**Concepts practiced:**
- `queue`
- `push()`
- `pop()`
- `front()`
- `back()`
- `size()`
- FIFO behavior

FIFO means **First In, First Out**.

---

### Exercise 9 — Process a Queue

Stores names in a queue and processes them in the same order they were entered.

**Concepts practiced:**
- Queue processing
- FIFO ordering
- Removing elements after processing

---

### Exercise 10 — Turn System

Creates a queue of `Cliente` structures containing a name and turn number.

**Concepts practiced:**
- Queue of custom objects
- Sequential service systems
- Automatically assigned turn numbers
- Processing structured data using FIFO order

---

### Exercise 11 — First Map

Creates a mapping between names and ages.

```cpp
map<string, int> edades;
```

**Concepts practiced:**
- `std::map`
- Key-value storage
- Access with `[]`
- Iterating over key-value pairs

---

### Exercise 12 — Search with Map

Searches for a person by key.

```cpp
edades.find(nombre)
```

is compared against:

```cpp
edades.end()
```

to determine whether the key exists.

**Concepts practiced:**
- `find()`
- `end()`
- Key lookup
- Avoiding assumptions that a key exists

---

### Exercise 13 — Update and Delete Map Entries

Builds a menu that can display, update, delete, and count stored people.

**Concepts practiced:**
- Updating values
- `erase()`
- `size()`
- `empty()`
- Functions with maps
- Map management

---

### Exercise 14 — Frequency Counter

Uses a `map<int, int>` to count how often each number appears.

```cpp
frecuencias[numero]++;
```

**Concepts practiced:**
- Frequency maps
- Keys as unique values
- Values as counters
- Automatically initialized map entries

---

### Exercise 15 — First Unordered Map

Stores player scores using:

```cpp
unordered_map<string, int>
```

**Concepts practiced:**
- Hash-based key-value storage
- `unordered_map`
- Lookup with `find()`
- Difference between ordered and unordered iteration

---

### Exercise 16 — First Set

Stores integers in a `set`.

Repeated insertions do not create duplicate elements.

**Concepts practiced:**
- `std::set`
- Unique values
- Automatic ordering
- `insert()`
- `find()`
- `erase()`
- `size()`

---

### Exercise 17 — Detect Duplicates

Uses an `unordered_set` to detect whether an input sequence contains a repeated number.

Each number is checked against the values already seen.

**Concepts practiced:**
- `unordered_set`
- Duplicate detection
- Hash-based lookup
- Tracking previously seen values
- Early termination

## Final Project — Support Ticket System

Combines several STL containers into a support-ticket management system.

The project uses:

- `queue<string>` for pending tickets
- `stack<string>` for previously handled tickets
- `unordered_set<string>` for unique ticket IDs
- `unordered_map<string, string>` for mapping tickets to responsible people

The system can:

1. Register a new ticket
2. Process the next ticket
3. Display the next pending ticket
4. Display the number of pending tickets
5. Display the last handled ticket
6. Find the person responsible for a ticket
7. Exit

Duplicate IDs are prevented using the `unordered_set`.

Pending tickets are processed in FIFO order with a `queue`, while the most recently handled ticket is available through the LIFO behavior of a `stack`.

**Concepts practiced:**
- Selecting data structures according to their behavior
- Combining multiple STL containers
- Unique ID validation
- FIFO processing
- LIFO history
- Hash-based lookup
- Key-value relationships
- `at()` for read-only map access
- Modular functions with STL containers

## Concepts Covered

By completing this module, I practiced:

- `pair`
- `stack`
- LIFO
- `queue`
- FIFO
- `map`
- `unordered_map`
- `set`
- `unordered_set`
- Key-value storage
- Hash-based lookup
- Unique-value containers
- Frequency maps
- Duplicate detection
- Stack-based expression validation
- Combining multiple containers in one application

## Technologies

- C++
- Standard Template Library (STL)
- Visual Studio
- Console applications
# Module 16 — STL Algorithms

This module introduces algorithms and iterators from the C++ Standard Template Library.

Instead of manually implementing common operations, the exercises use reusable STL algorithms for sorting, searching, counting, finding minimum and maximum values, and working with custom comparison logic.

## Exercises

### Exercise 1 — First `sort()`

Sorts an integer vector from smallest to largest.

```cpp
sort(numeros.begin(), numeros.end());
```

**Concepts practiced:**
- `<algorithm>`
- `sort()`
- `begin()`
- `end()`
- Applying algorithms to iterator ranges

---

### Exercise 2 — `reverse()`

Sorts a vector and then reverses its order.

**Concepts practiced:**
- `reverse()`
- Combining STL algorithms
- Difference between sorting and reversing

`reverse()` does not sort values by itself; it only reverses their current order.

---

### Exercise 3 — Search with `find()`

Searches for a requested number using:

```cpp
find(numeros.begin(), numeros.end(), buscado)
```

**Concepts practiced:**
- `find()`
- Iterator results
- Comparing an iterator with `end()`
- STL linear search

---

### Exercise 4 — Count Occurrences

Uses `count()` to determine how many times a number appears.

**Concepts practiced:**
- `count()`
- Frequency counting with STL algorithms
- Eliminating manual counting loops

---

### Exercise 5 — Minimum and Maximum

Uses:

```cpp
min_element()
max_element()
```

to find the smallest and largest elements.

Because these algorithms return iterators, the result is dereferenced with `*`.

**Concepts practiced:**
- `min_element()`
- `max_element()`
- Iterator dereferencing
- Checking for empty vectors before accessing results

---

### Exercise 6 — `lower_bound()`

Sorts the vector and searches for the first element that is greater than or equal to a requested value.

**Concepts practiced:**
- `lower_bound()`
- Algorithms that require sorted ranges
- Iterator results
- Searching for insertion-style positions

---

### Exercise 7 — Exact Search with `lower_bound()`

Uses `lower_bound()` and an additional comparison to determine whether an exact value exists.

```cpp
resultado != numeros.end() && *resultado == buscado
```

**Concepts practiced:**
- Exact search on sorted data
- Combining iterator validation and dereferencing
- Understanding the behavior of `lower_bound()`

---

### Exercise 8 — Traverse with Iterators

Traverses a vector manually with an iterator.

```cpp
for (auto it = numeros.begin(); it != numeros.end(); it++)
```

**Concepts practiced:**
- Iterators
- `begin()`
- `end()`
- Dereferencing with `*it`
- Iterator movement

---

### Exercise 9 — Modify Through Iterators

Uses mutable iterators to double every value.

```cpp
*it *= 2;
```

**Concepts practiced:**
- Mutable iterators
- Modifying container elements through iterators
- Dereferencing iterator positions

---

### Exercise 10 — Read-Only Traversal

Traverses a vector using:

```cpp
cbegin()
cend()
```

**Concepts practiced:**
- Constant iterators
- Read-only traversal
- Preventing accidental modification

---

### Exercise 11 — Find an Index with `find()`

Uses `find()` and converts the resulting iterator into an index.

```cpp
resultado - numeros.cbegin()
```

**Concepts practiced:**
- Iterator arithmetic
- Converting an iterator position into a numeric index
- `const_iterator`

---

### Exercise 12 — Lambda with Struct

Creates a `Jugador` structure and sorts players from highest to lowest score using a lambda comparator.

```cpp
sort(jugadores.begin(), jugadores.end(),
    [](const Jugador& a, const Jugador& b)
    {
        return a.puntuacion > b.puntuacion;
    });
```

**Concepts practiced:**
- Lambda expressions
- Custom comparators
- Sorting structs
- Const-reference lambda parameters
- Defining ordering rules

## Final Project — Player Ranking

Combines STL algorithms, iterators, structs, and lambdas into a player-ranking system.

The program can:

1. Display players
2. Sort players from highest to lowest score
3. Search for a player
4. Display the player with the highest score
5. Display the player with the lowest score
6. Count players with a selected score
0. Exit

The project uses several STL algorithms:

- `sort()` with a lambda comparator
- `find_if()` with a lambda predicate
- `max_element()` with a comparator
- `min_element()` with a comparator
- `count_if()` with a lambda predicate

For example, player search uses:

```cpp
find_if(jugadores.begin(), jugadores.end(),
    [buscar](const Jugador& jugador)
    {
        return jugador.nombre == buscar;
    });
```

The lambda captures `buscar` so the algorithm can compare each player's name against the requested value.

**Concepts practiced:**
- STL algorithms with custom types
- Lambda expressions
- Lambda captures
- Predicates
- Custom comparators
- `find_if()`
- `count_if()`
- `min_element()`
- `max_element()`
- Iterator access to struct members using `->`
- Separating container logic into reusable functions

## Concepts Covered

By completing this module, I practiced:

- `<algorithm>`
- Iterator ranges
- `begin()` and `end()`
- `cbegin()` and `cend()`
- Mutable and constant iterators
- Iterator dereferencing
- Iterator arithmetic
- `sort()`
- `reverse()`
- `find()`
- `count()`
- `min_element()`
- `max_element()`
- `lower_bound()`
- `find_if()`
- `count_if()`
- Lambda expressions
- Lambda captures
- Predicates
- Custom comparators
- Applying STL algorithms to structs

## Technologies

- C++
- Standard Template Library (STL)
- Visual Studio
- Console applications
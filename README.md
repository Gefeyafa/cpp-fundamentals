# C++ Fundamentals

A structured C++ learning repository covering programming fundamentals, data structures, algorithms, object-oriented programming, problem-solving patterns, complexity analysis, recursion, and LeetCode practice.

The repository documents my progression from basic C++ syntax to more advanced algorithmic problem solving, with exercises and small projects organized into 22 modules.

## About

This repository was created as a complete review and reinforcement of C++ fundamentals and programming logic.

Each module focuses on a specific topic and contains practical exercises designed to gradually introduce new concepts while reusing knowledge from previous modules.

Later modules move beyond language syntax and focus on:

- Data structures
- Standard Template Library (STL)
- Object-Oriented Programming
- Algorithm analysis
- Classic algorithms
- Problem-solving patterns
- Recursion
- LeetCode-style problems

Each module also includes its own `README.md` describing the exercises and concepts practiced.

## Course Structure

| Module | Topic | Main Concepts |
| --- | --- | --- |
| [01](Modulo1_FundamentosDeC%2B%2B/) | C++ Fundamentals | Console I/O, variables, arithmetic expressions |
| [02](Modulo2_VariablesYOperadores/) | Variables and Operators | Data types, arithmetic and compound operators |
| [03](Modulo3_Condicionales/) | Conditionals | `if`, `else if`, `else`, logical operators |
| [04](Modulo4_Switch/) | Switch Statements | `switch`, `case`, `break`, `default` |
| [05](Modulo5_Ciclos/) | Loops | `while`, `do-while`, `for`, nested loops |
| [06](Modulo6_AlgoritmosBasicos/) | Basic Algorithms | Counting, searching, maximum/minimum, accumulation |
| [07](Modulo7_Funciones/) | Functions | Parameters, return values, references, reusable logic |
| [08](Modulo8_Strings/) | Strings | Text processing, searching, editing, string methods |
| [09](Modulo9_Arrays/) | Arrays | Traversal, searching, sorting, insertion and deletion |
| [10](Modulo10_Matrices/) | Matrices | 2D arrays, traversal, transpose, matrix multiplication |
| [11](Modulo11_FuncionesMasArreglos/) | Functions and Arrays | Reusable array algorithms and modular design |
| [12](Modulo12_ReferenciasYPunteros/) | References and Pointers | Memory addresses, pointers, references, pointer arithmetic |
| [13](Modulo13_StructsYEnum/) | Structs and Enums | Custom types, enums, nested structures |
| [14](Modulo14_Vectores/) | Vectors | Dynamic containers, range-based loops, vectors of structs |
| [15](Modulo15_ContenedoresSTL/) | STL Containers | `pair`, `stack`, `queue`, `map`, sets and hash containers |
| [16](Modulo16_AlgoritmosSTL/) | STL Algorithms | Sorting, searching, iterators, lambdas and predicates |
| [17](Modulo17_ProgramacionOrientadaAObjetos/) | Object-Oriented Programming | Classes, encapsulation, inheritance, polymorphism |
| [18](Modulo18_ComplejidadTemporalYEspacial/) | Time and Space Complexity | Big O, scalability, algorithm analysis |
| [19](Modulo19_AlgoritmosClasicos/) | Classic Algorithms | Binary Search, sorting, Two Pointers, Sliding Window, hashing |
| [20](Modulo20_Recursividad/) | Recursion | Base cases, recursive calls, call stack |
| [21](Modulo21_EstrategiaParaResolverProblemas/) | Problem-Solving Strategy | Pattern recognition, optimization, choosing data structures |
| [22](Modulo22_LeetCode/) | LeetCode Practice | Interview-style algorithm problems and optimization |

## Main Topics Covered

### C++ Fundamentals

- Variables and data types
- Operators
- Conditional statements
- Loops
- Functions
- References and pointers
- Strings
- Arrays
- Matrices
- Structs
- Enums

### Standard Template Library

Containers used throughout the repository include:

- `vector`
- `pair`
- `stack`
- `queue`
- `map`
- `unordered_map`
- `set`
- `unordered_set`

STL algorithms and tools include:

- `sort()`
- `reverse()`
- `find()`
- `find_if()`
- `count()`
- `count_if()`
- `min_element()`
- `max_element()`
- `lower_bound()`
- Iterators
- Lambda expressions
- Custom comparators

### Object-Oriented Programming

The OOP module covers:

- Classes and objects
- Encapsulation
- Constructors
- Constructor overloading
- Destructors
- Getters and setters
- Const methods
- Static members
- Composition
- Inheritance
- Virtual methods
- Runtime polymorphism
- Virtual destructors

### Algorithms and Problem-Solving Patterns

Algorithms and patterns implemented throughout the later modules include:

- Linear Search
- Binary Search
- Bubble Sort
- Selection Sort
- Insertion Sort
- Two Pointers
- Slow/Fast Pointers
- Sliding Window
- Prefix Sum
- Hashing
- Frequency Maps
- Stack-based validation
- Kadane's Algorithm
- Recursive algorithms

## Complexity Analysis

Later exercises include explicit analysis of both:

- **Time Complexity**
- **Space Complexity**

Common complexity classes studied include:

- `O(1)`
- `O(log n)`
- `O(n)`
- `O(n log n)`
- `O(n²)`
- Exponential recursive complexity

The goal is not only to write solutions that work, but also to understand how they scale and how one solution can be improved over another.

## Projects

Several modules conclude with larger exercises that combine the concepts introduced throughout the module.

Examples include:

### Basic Text Editor

A menu-driven text editor capable of searching, replacing, extracting, deleting, reversing, and transforming text.

### Array Manager

An interactive program that performs searching, sorting, counting, reversing, comparison, and restoration operations on arrays.

### Number Manager

A program focused on references, pointers, memory addresses, and different parameter-passing techniques.

### Player Managers

Several progressively more advanced player-management systems using:

- Structs
- Enums
- Arrays
- Vectors
- Functions
- Custom data types

### Support Ticket System

A small support-management simulation that combines multiple STL containers:

- `queue` for pending tickets
- `stack` for handled-ticket history
- `unordered_set` for unique IDs
- `unordered_map` for ticket ownership

### Character System

An Object-Oriented Programming project combining:

- Composition
- Inheritance
- Encapsulation
- Static members
- Virtual functions
- Polymorphism
- Players and enemies

### Player Ranking

Uses STL algorithms, lambdas, iterators, and custom comparators to search, sort, count, and analyze player scores.

## LeetCode Practice

The final module applies the concepts learned throughout the repository to algorithmic problems including:

- Find Pivot Index
- Valid Anagram
- Valid Palindrome
- Move Zeroes
- Merge Sorted Array
- Remove Duplicates from Sorted Array
- Remove Element
- Binary Search
- Maximum Average Subarray
- Minimum Size Subarray Sum
- Longest Substring Without Repeating Characters
- Maximum Subarray
- Search Insert Position
- Valid Parentheses
- Subarray Sum Equals K

Some problems include both an initial solution and an optimized version.

For example:

- **Find Pivot Index:** `O(n²)` → `O(n)`
- **Maximum Subarray:** `O(n²)` → `O(n)`

This demonstrates the process of first finding a correct solution and then improving its efficiency.

## Repository Organization

Each module is stored in its own directory:

```text
cpp-fundamentals/
│
├── Modulo1_FundamentosDeC++/
├── Modulo2_VariablesYOperadores/
├── ...
├── Modulo21_EstrategiaParaResolverProblemas/
├── Modulo22_LeetCode/
├── .gitignore
└── README.md
```

Individual exercises are stored as Visual Studio C++ projects inside their corresponding module.

## Tools and Technologies

- C++
- C++ Standard Library
- Standard Template Library (STL)
- Visual Studio
- Git
- GitHub

## Purpose

This repository represents my C++ fundamentals and algorithmic problem-solving practice.

The objective was to rebuild and strengthen programming fundamentals before continuing into broader software development topics, while keeping the learning process documented through source code, Git history, and module-specific documentation.
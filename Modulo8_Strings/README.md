# Module 8 — Strings

This module focuses on working with text using C++ `string`.

The exercises progress from basic text input and indexing to character analysis, searching, extraction, insertion, replacement, and finally a menu-driven text editor that combines the concepts learned throughout the module.

## Exercises

### Exercise 1 — Username Input

Reads a single-word name using `cin` and displays a greeting.

**Concepts practiced:**
- `string`
- Text input with `cin`
- Basic string output

---

### Exercise 2 — Full Name

Reads a complete name containing spaces.

**Concepts practiced:**
- `getline()`
- Reading strings with spaces
- Difference between `cin` and `getline()`

---

### Exercise 3 — Age and Full Name

Reads an integer followed by a complete line of text.

**Concepts practiced:**
- Mixing `cin` and `getline()`
- `cin.ignore()`
- Managing the input buffer
- Multiple data types

---

### Exercise 4 — First and Last Character

Displays the first and last characters of a string.

**Concepts practiced:**
- String indexing
- `string::length()`
- Zero-based indexing

The last character is accessed using:

```cpp
texto[texto.length() - 1]
```

---

### Exercise 5 — One Character per Line

Traverses a complete string and prints each character separately.

**Concepts practiced:**
- Iterating through strings
- `string::size()`
- Character access with `[]`

---

### Exercise 6 — Count Vowels

Counts lowercase vowels inside a string.

**Concepts practiced:**
- Character comparison
- String traversal
- Counters
- Logical OR (`||`)

---

### Exercise 7 — Count Consonants

Counts alphabetic characters that are not vowels, supporting both uppercase and lowercase letters.

**Concepts practiced:**
- Character ranges
- Uppercase and lowercase comparisons
- Compound boolean conditions
- Character classification

---

### Exercise 8 — Capitalize First Letter

Converts the first character to uppercase when it is a lowercase letter.

**Concepts practiced:**
- Checking whether a string is empty
- Character modification
- ASCII character ranges
- Direct string mutation

---

### Exercise 9 — Convert to Uppercase

Traverses the entire string and converts lowercase letters to uppercase.

**Concepts practiced:**
- Character transformation
- ASCII relationships
- Modifying characters in place

---

### Exercise 10 — Convert to Lowercase

Converts uppercase letters to lowercase.

**Concepts practiced:**
- Character ranges
- In-place string modification
- ASCII-based conversion

---

### Exercise 11 — Reverse Text

Reverses a string manually by swapping characters from opposite ends.

**Concepts practiced:**
- Two-ended traversal
- Swapping values
- Processing only half of a sequence
- Index calculations

---

### Exercise 12 — Replace `a` with `x`

Traverses a string and replaces every lowercase `a` with `x`.

**Concepts practiced:**
- Character replacement
- String mutation
- Conditional processing

---

### Exercise 13 — Count a Specific Character

Asks the user for a character and counts how many times it appears in the text.

**Concepts practiced:**
- Character search
- Frequency counting
- Comparing `char` values

---

### Exercise 14 — Count Words

Estimates the number of words by identifying the beginning of words after spaces.

**Concepts practiced:**
- Detecting word boundaries
- Examining adjacent characters
- Character classification
- String traversal

---

### Exercise 15 — Find a Word

Searches for a word inside a larger string.

**Concepts practiced:**
- `string::find()`
- `string::npos`
- Search result positions
- Handling unsuccessful searches

---

### Exercise 16 — Extract Text

Extracts part of a string from a specified position and length.

**Concepts practiced:**
- `string::substr()`
- Positions and lengths
- Substring extraction

---

### Exercise 17 — Erase Text

Removes a range of characters from a string.

**Concepts practiced:**
- `string::erase()`
- `size_t`
- Index-based modification

---

### Exercise 18 — Insert Text

Inserts new text at a selected position.

**Concepts practiced:**
- `string::insert()`
- Combining `cin` with `getline()`
- `cin.ignore()`
- Position-based editing

---

### Exercise 19 — Replace a Word Manually

Finds a word, removes it, and inserts a replacement at the same position.

**Concepts practiced:**
- `find()`
- `erase()`
- `insert()`
- Combining multiple string operations

---

### Exercise 20 — Compare Strings

Compares two strings lexicographically.

**Concepts practiced:**
- `string::compare()`
- Equality
- Alphabetical ordering
- Interpreting negative, zero, and positive comparison results

---

### Exercise 21 — Concatenate Text

Combines a first name and last name into one string.

**Concepts practiced:**
- `string::append()`
- String concatenation
- Building strings incrementally

---

### Exercise 22 — Replace Text with `replace()`

Finds one word and replaces it directly with another.

**Concepts practiced:**
- `string::replace()`
- `find()`
- `npos`
- Direct substring replacement

## Challenge — Count Vowels with Uppercase Support

Improves the vowel-counting exercise by recognizing both uppercase and lowercase vowels.

**Concepts practiced:**
- Case-sensitive character comparison
- Larger compound conditions
- Extending an existing solution

## Final Project — Basic Text Editor

Combines the module into a menu-driven console text editor.

The editor can:

1. Display the current text
2. Convert it to uppercase
3. Convert it to lowercase
4. Count vowels
5. Count consonants
6. Count words
7. Search for a word
8. Replace a word
9. Reverse the text
10. Append text
11. Extract part of the text
12. Delete part of the text
13. Exit

**Concepts practiced:**
- Breaking a larger program into functions
- Passing strings by value and by reference
- Mutating text through reference parameters
- `do-while`
- `switch`
- Input validation
- Combining multiple string algorithms
- Reusing previously learned logic

## Concepts Covered

By completing this module, I practiced:

- C++ `string`
- `getline()`
- `cin.ignore()`
- String indexing
- Character traversal
- `size()` and `length()`
- Character counting
- ASCII-based transformations
- String reversal
- `find()`
- `string::npos`
- `substr()`
- `erase()`
- `insert()`
- `replace()`
- `append()`
- `compare()`
- `size_t`
- Word and character analysis
- Functions that modify strings by reference
- Building a larger program from smaller reusable operations

## Technologies

- C++
- Visual Studio
- Console applications
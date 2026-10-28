# Module 4 — Switch Statements

This module introduces the `switch` statement as an alternative way to handle multiple predefined options.

The exercise uses a simple console menu where the user selects an arithmetic operation and the program responds according to the selected option.

## Exercises

### Exercise 1 — Switch Menu

Displays a menu with four arithmetic operations:

1. Addition
2. Subtraction
3. Multiplication
4. Division

The user selects an option by entering a number, and the program uses a `switch` statement to determine which response to display.

**Concepts practiced:**
- `switch` statements
- `case` labels
- `break`
- `default`
- Menu-based program flow
- Handling predefined user choices
- Basic input validation

The main structure used is:

```cpp
switch (opcion)
{
case 1:
    cout << "Has elegido sumar.";
    break;

case 2:
    cout << "Has elegido restar.";
    break;

case 3:
    cout << "Has elegido multiplicar.";
    break;

case 4:
    cout << "Has elegido dividir.";
    break;

default:
    cout << "Opcion invalida.";
    break;
}
```

Each `case` represents a possible value of `opcion`.

The `break` statement stops execution after a matching case is completed, preventing the program from continuing into the following cases.

The `default` case handles any value that does not match the available menu options.

## Concepts Covered

By completing this module, I practiced:

- `switch`
- `case`
- `break`
- `default`
- Menu creation
- User input
- Selecting behavior based on a numeric option
- Handling invalid menu choices
- Multiple predefined execution paths

## Technologies

- C++
- Visual Studio
- Console applications
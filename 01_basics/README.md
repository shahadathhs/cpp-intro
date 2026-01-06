# C++ Basics

## Introduction
C++ is a high-performance, general-purpose programming language.

## Data Types

| Type | Description | Size (Typical) | Range (Typical) |
| :--- | :--- | :--- | :--- |
| `int` | Integers | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `long long` | Large Integers | 8 bytes | -9e18 to 9e18 |
| `float` | Floating point | 4 bytes | 7 decimal digits precision |
| `double` | Double floating point | 8 bytes | 15 decimal digits precision |
| `char` | Character | 1 byte | -128 to 127 |
| `bool` | Boolean | 1 byte | true (1) or false (0) |
| `string` | Text | Dynamic | N/A |

## Operators
| Operator | Name | Example |
| :--- | :--- | :--- |
| `+` | Addition | `x + y` |
| `-` | Subtraction | `x - y` |
| `*` | Multiplication | `x * y` |
| `/` | Division | `x / y` |
| `%` | Modulus | `x % y` |

## Conditional Statements

| Statement | Syntax | Details |
| :--- | :--- | :--- |
| `if` | `if (condition) { ... }` | Executes if condition is true. |
| `else` | `else { ... }` | Executes if previous `if` was false. |
| `else if` | `else if (condition) { ... }` | Tests new condition if previous `if` was false. |
| `switch` | `switch(expression) { ... }` | Selects one of many code blocks. |

## Loops

| Loop | Syntax | Time Complexity |
| :--- | :--- | :--- |
| `for` | `for (init; cond; inc) { ... }` | O(N) where N is iterations |
| `while` | `while (cond) { ... }` | O(N) |
| `do-while` | `do { ... } while(cond);` | O(N), executes at least once |

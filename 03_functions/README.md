# Functions

## Introduction
Functions are blocks of reusable code.

## Return Values

| Return Type | Description |
| :--- | :--- |
| `void` | Returns nothing. |
| `int`, `double` | Returns a value of that type. |
| `string`, `vector` | Returns an object. |

## Parameter Passing

| Method | Syntax | Description | Performance |
| :--- | :--- | :--- | :--- |
| Pass by Value | `void f(int x)` | Copy is created. Original unchanged. | Slower for large objects (copy overhead). |
| Pass by Reference | `void f(int &x)` | Reference passed. Original can be changed. | Fast (no copy). |
| Pass by Pointer | `void f(int *x)` | Address passed. Original can be changed via dereference. | Fast. |

## Scope

| Scope | Description |
| :--- | :--- |
| Local | Variable declared inside a function. Only accessible there. |
| Global | Variable declared outside all functions. Accessible everywhere. |

## Code Examples
- [Function Basics](function_basics.cpp) - Declaration, parameters, and return types.

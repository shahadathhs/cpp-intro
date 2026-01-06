# Pointers & References

## Introduction
Pointers are variables that store memory addresses. They are powerful features of C++ for memory management.

## Key Concepts

| Symbol | Name | Description | Example |
| :--- | :--- | :--- | :--- |
| `&` | Address-of Operator | Returns the memory address of a variable. | `&x` gives address of `x`. |
| `*` | Dereference Operator | Accesses the value at the address held by a pointer. | `*ptr` gives value pointed to by `ptr`. |
| `->` | Arrow Operator | Accesses members of a structure through a pointer. | `ptr->member` |

## Pointer vs Reference

| Feature | Pointer | Reference |
| :--- | :--- | :--- |
| Declaration | `int* ptr;` | `int& ref = x;` |
| Reassignment | Can change what it points to. | Cannot be reassigned once initialized. |
| Null check | Can be `nullptr`. | Cannot be null. |
| Memory Address | Has its own memory address. | Shares address with the original variable. |

## Dynamic Memory

| Operator | Description | complexity |
| :--- | :--- | :--- |
| `new` | Allocates memory on the heap. | O(1) typically |
| `delete` | Deallocates memory. | O(1) typically |

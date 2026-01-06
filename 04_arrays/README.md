# Arrays

## Introduction
Arrays are fixed-size sequential collections of elements of the same type.

## Declaration & Usage

| Syntax | Description | Example |
| :--- | :--- | :--- |
| `type name[size];` | Declaration | `int arr[5];` |
| `type name[size] = {v1, v2..};` | Initialization | `int arr[3] = {1, 2, 3};` |
| `arr[i]` | Access ith element | `arr[0]` |

## Limitations vs Vector
| Feature | Array | Vector |
| :--- | :--- | :--- |
| Size | Fixed at compile time* | Dynamic |
| Memory | Stack (usually) | Heap |
| Safety | No bounds check | Can use `.at()` |

*\*VLAs exist in some compilers but are non-standard in C++.*

## Multidimensional Arrays

| Syntax | Description |
| :--- | :--- |
| `int arr[2][3]` | 2D Array (2 rows, 3 columns) |

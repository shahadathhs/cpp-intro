# Structures (struct)

## Introduction
Structures group related variables.

## Syntax & Usage

| Action | Syntax | Example |
| :--- | :--- | :--- |
| Declaration | `struct Name { type member; ... };` | `struct Point { int x, y; };` |
| Variable | `Name var;` | `Point p1;` |
| Access | `var.member` | `p1.x = 10;` |
| Array of Structs| `Name arr[size];` | `Point points[10];` |

## Memory Layout
Members are stored sequentially in memory (padding may occur).

| Member | Size (Example) | Offset |
| :--- | :--- | :--- |
| `x` (int) | 4 bytes | 0 |
| `y` (int) | 4 bytes | 4 |

# Recursion

## Introduction
Recursion is when a function calls itself.

## Components
1.  **Base Case**: The condition to stop recursion.
2.  **Recursive Step**: The call to itself with a smaller problem.

## Complexity Analysis

| Algorithm | Recurrence Relation | Time Complexity | Space Complexity (Stack) |
| :--- | :--- | :--- | :--- |
| Factorial | T(n) = T(n-1) + O(1) | O(N) | O(N) |
| Fibonacci | T(n) = T(n-1) + T(n-2) | O(2^N) | O(N) |
| Binary Search | T(n) = T(n/2) + O(1) | O(log N) | O(log N) |

## Stack Overflow
Occurs when the recursion depth is too large and the stack memory is exhausted. Always ensure a reachable base case.

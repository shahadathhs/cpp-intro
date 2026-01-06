# Sorting

## Introduction
C++ provides `std::sort` in `<algorithm>`.

## Sort Function

| Function | Syntax | Complexity |
| :--- | :--- | :--- |
| `sort` | `sort(begin, end)` | O(N log N) |
| `sort` (custom) | `sort(begin, end, comp)` | O(N log N) |

## Comparison

| Sort Algorithm | Best Case | Average Case | Worst Case | Space |
| :--- | :--- | :--- | :--- | :--- |
| `std::sort` (Introsort) | O(N log N) | O(N log N) | O(N log N) | O(log N) |
| Bubble Sort | O(N) | O(N^2) | O(N^2) | O(1) |
| Merge Sort | O(N log N) | O(N log N) | O(N log N) | O(N) |

## Custom Comparator
Returns `true` if first argument should appear before second.
```cpp
bool compare(int a, int b) {
    return a > b; // Descending
}
```

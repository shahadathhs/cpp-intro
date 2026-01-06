# Strings

## Introduction
`std::string` is the standard C++ string class.

## Modifiers

| Function | Description | Complexity |
| :--- | :--- | :--- |
| `s.append(str)` | Appends `str` to end. | O(N) |
| `s += str` | Same as append. | O(N) |
| `s.push_back(c)` | Appends character `c`. | O(1) |
| `s.pop_back()` | Removes last char. | O(1) |
| `s.clear()` | Empties the string. | O(1) |

## Access & Capacity

| Function | Description |
| :--- | :--- |
| `s[i]` | Access char at `i`. |
| `s.length()` / `s.size()` | Returns length. |
| `s.empty()` | Checks if empty. |

## std::string vs C-String (`char*`)

| Feature | std::string | char* |
| :--- | :--- | :--- |
| Safety | Safe, handles memory. | Unsafe, manual memory. |
| Size | Dynamic. | Fixed (unless manual realloc). |
| Header | `<string>` | `<cstring>` |
| Termination | Handled internally. | Null-terminated `\0`. |

## Code Examples
- [String Basics](string_basics.cpp) - Operations, modifiers, and algorithms.

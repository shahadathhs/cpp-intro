# std::vector

## Introduction
`std::vector` is a sequence container representing arrays that can change in size. It uses contiguous storage (like arrays) but handles memory automatically. Key features include dynamic resizing, random access, and efficient iteration.

## Initialization

| Name | Details | Time Complexity |
| :--- | :--- | :--- |
| `vector<type> v;` | Construct a vector with 0 elements. | O(1) |
| `vector<type> v(N);` | Construct a vector with N elements (default initialized). | O(N) |
| `vector<type> v(N, V);` | Construct a vector with N elements, each initialized to V. | O(N) |
| `vector<type> v(v2);` | Construct a vector by copying another vector v2. | O(N) |
| `vector<type> v(A, A + N);` | Construct a vector by copying elements from array A of size N. | O(N) |

## Capacity

| Name | Details | Time Complexity |
| :--- | :--- | :--- |
| `v.size()` | Returns the number of elements in the vector. | O(1) |
| `v.max_size()` | Returns the maximum possible number of elements the vector can hold. | O(1) |
| `v.capacity()` | Returns the current allocated storage capacity. | O(1) |
| `v.clear()` | Removes all elements (size becomes 0), capacity remains unchanged. | O(N) |
| `v.empty()` | Returns `true` if empty, `false` otherwise. | O(1) |
| `v.resize(N)` | Resizes the vector to contain N elements. | O(K) where K = \|new\_size - old\_size\| |

## Modifiers

| Name | Details | Time Complexity |
| :--- | :--- | :--- |
| `v = v2` / `v.assign(v2)` | Assigns new contents, replacing current ones. | O(N) (if sizes differ) |
| `v.push_back(val)` | Adds an element to the end. | O(1) amortized |
| `v.pop_back()` | Removes the last element. | O(1) |
| `v.insert(it, val)` | Inserts `val` before the iterator `it`. | O(N + K) |
| `v.erase(it)` | Removes element at iterator `it`. | O(N + K) |
| `replace(beg, end, old, new)`| Replaces all `old` values with `new`. (Algorithm header) | O(N) |
| `find(beg, end, val)` | Returns iterator to first occurrence of `val`. (Algorithm header) | O(N) |

## Element Access

| Name | Details | Time Complexity |
| :--- | :--- | :--- |
| `v[i]` | Access element at index `i` (no bounds checking). | O(1) |
| `v.at(i)` | Access element at index `i` (throws exception if out of range). | O(1) |
| `v.back()` | Access the last element. | O(1) |
| `v.front()` | Access the first element. | O(1) |

## Iterators

| Name | Details | Time Complexity |
| :--- | :--- | :--- |
| `v.begin()` | Returns iterator to the first element. | O(1) |
| `v.end()` | Returns iterator to the element *after* the last element. | O(1) |

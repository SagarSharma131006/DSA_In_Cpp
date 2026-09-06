# ⏱️ Time & Space Complexity

## 📌 Overview

Time and Space Complexity are used to analyze how efficient an algorithm is.

They help us understand:

* How the running time grows with input size
* How much extra memory an algorithm requires
* Which solution is more efficient
* Whether a solution can handle large inputs

This was the **first topic** of my mastery-based DSA journey.

---

# 🎯 Learning Goals

The main goals of this topic were:

* Understand Big O notation
* Analyze Time Complexity
* Analyze Space Complexity
* Understand common complexity patterns
* Analyze loops and nested loops
* Understand logarithmic complexity
* Understand `O(n log n)`
* Compare brute-force and optimized approaches
* Understand time-space trade-offs
* Analyze the complexity of my own solutions

---

# ⏱️ Time Complexity

Time Complexity describes how the number of operations performed by an algorithm grows as the input size `n` increases.

We generally express it using **Big O notation**.

## Common Complexities

| Complexity   | Name         | Example                   |
| ------------ | ------------ | ------------------------- |
| `O(1)`       | Constant     | Direct array access       |
| `O(log n)`   | Logarithmic  | Binary Search             |
| `O(n)`       | Linear       | Array traversal           |
| `O(n log n)` | Linearithmic | Merge Sort                |
| `O(n²)`      | Quadratic    | Nested loops              |
| `O(2ⁿ)`      | Exponential  | Some recursive solutions  |
| `O(n!)`      | Factorial    | Some permutation problems |

---

# 📊 Complexity Ranking

For large input sizes, a generally better-to-worse growth order is:

```text
O(1)
 ↓
O(log n)
 ↓
O(n)
 ↓
O(n log n)
 ↓
O(n²)
 ↓
O(2ⁿ)
 ↓
O(n!)
```

The lower the growth rate, the more scalable the algorithm generally is.

---

# 🟢 O(1) — Constant Time

The number of operations does not depend on the input size.

Example:

```cpp
int x = arr[0];
```

Whether the array contains 10 elements or 1,000,000 elements, direct access takes constant time.

```text
Time Complexity: O(1)
```

---

# 🟢 O(n) — Linear Time

The number of operations grows linearly with the input size.

Example:

```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i];
}
```

The loop runs `n` times.

```text
Time Complexity: O(n)
```

---

# 🟡 O(n²) — Quadratic Time

Usually occurs when nested loops depend on the same input size.

Example:

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // operation
    }
}
```

Operations:

```text
n × n = n²
```

Therefore:

```text
Time Complexity: O(n²)
```

---

# 🟢 O(log n) — Logarithmic Time

Logarithmic complexity commonly occurs when the problem size is repeatedly reduced by a constant factor.

Example:

```cpp
int i = 1;

while (i < n) {
    i *= 2;
}
```

Growth:

```text
1
↓
2
↓
4
↓
8
↓
16
↓
...
↓
n
```

Therefore:

```text
Time Complexity: O(log n)
```

---

# 🟢 O(n log n) — Linearithmic Time

A common pattern is:

```text
O(n)
×
O(log n)
```

which gives:

```text
O(n log n)
```

Common examples include:

* Merge Sort
* Heap Sort
* Average-case Quick Sort

---

# 📌 Big O Rules

## 1. Ignore Constants

```text
O(2n)
```

becomes:

```text
O(n)
```

---

## 2. Drop Lower-Order Terms

```text
O(n² + n + 5)
```

becomes:

```text
O(n²)
```

because `n²` dominates for large values of `n`.

---

## 3. Sequential Operations Add

If two independent loops take `O(n)` each:

```cpp
for (...) {
}

for (...) {
}
```

Then:

```text
O(n) + O(n)
= O(2n)
= O(n)
```

---

## 4. Nested Operations Multiply

For nested loops:

```cpp
for (...) {
    for (...) {
    }
}
```

we generally get:

```text
O(n × n)
= O(n²)
```

---

## 5. Different Inputs Should Be Represented Separately

If an algorithm processes two different inputs:

```text
n
m
```

then we should preserve them.

For example:

```text
O(n + m)
```

instead of automatically writing:

```text
O(n)
```

This is particularly useful for problems involving two arrays.

---

# 💾 Space Complexity

Space Complexity describes how much **additional memory** an algorithm uses as the input size increases.

Example:

```cpp
int x = 10;
```

uses constant extra memory.

```text
Space Complexity: O(1)
```

Whereas:

```cpp
vector<int> temp(n);
```

requires memory proportional to `n`.

```text
Space Complexity: O(n)
```

---

# 📌 Auxiliary Space

For algorithm problems, we generally focus on the **extra/auxiliary memory** used by the algorithm.

Example:

```cpp
int sum = 0;

for (int i = 0; i < n; i++) {
    sum += arr[i];
}
```

Only a constant number of extra variables are used.

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

# ⚖️ Time vs Space Trade-off

Sometimes we can improve time complexity by using additional memory.

For example:

```text
Brute Force
O(n²) Time
O(1) Space

        ↓

Hash Map
O(n) average Time
O(n) Space
```

This is called a **time-space trade-off**.

The best approach depends on:

* Input size
* Time constraints
* Memory constraints
* Problem requirements

---

# 🧩 Problem-Solving Process

For every problem, I practiced thinking in this order:

```text
Understand the Problem
        ↓
Think of Brute Force
        ↓
Analyze Complexity
        ↓
Look for Optimization
        ↓
Identify Pattern / Data Structure
        ↓
Implement in C++
        ↓
Test Edge Cases
        ↓
Analyze Time & Space
        ↓
Compare Approaches
```

The goal is not simply to make the code work.

The goal is to understand:

> **Why does this solution work, and how efficiently does it work?**

---

# 🧠 Important Lessons Learned

### 1. Hashing can improve time complexity

Instead of repeatedly searching through an array, a Hash Map or Hash Set can often provide `O(1)` average lookup.

---

### 2. One-pass solutions can be powerful

Some problems can be solved by traversing the array only once.

Example:

```text
Best Time to Buy and Sell Stock
```

```text
Time: O(n)
Space: O(1)
```

---

### 3. In-place algorithms can reduce memory usage

Example:

```text
Move Zeroes
```

An extra vector uses:

```text
O(n) Space
```

while the two-pointer in-place approach uses:

```text
O(1) auxiliary space
```

---

### 4. Alternative approaches can have different trade-offs

The same problem can have multiple valid solutions.

For example:

```text
Sorting + Two Pointers
```

versus:

```text
Hash Map + Frequency Counting
```

Understanding these differences is important for optimization.

---

# 🧪 Complexity Practice

During this topic, I practiced identifying:

* `O(1)`
* `O(log n)`
* `O(n)`
* `O(n log n)`
* `O(n²)`
* Sequential loops
* Nested loops
* Fixed-size loops
* Hashing complexity
* Auxiliary space
* Time-space trade-offs

---

# 📚 LeetCode Problems Solved

## 001 — Two Sum

**LeetCode #1**

**Approach:** Hash Map

```text
Time Complexity: O(n) average
Space Complexity: O(n)
```

---

## 002 — Contains Duplicate

**LeetCode #217**

**Approach:** Hash Set

```text
Time Complexity: O(n) average
Space Complexity: O(n)
```

---

## 003 — Find Numbers with Even Number of Digits

**LeetCode #1295**

**Approach:** Range Checking

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

## 004 — Maximum Number of Words Found in Sentences

**LeetCode #2114**

**Approach:** Count Spaces

```text
Time Complexity: O(L)
Space Complexity: O(1)
```

Where `L` represents the total number of characters processed.

---

## 005 — Find the Difference of Two Arrays

**LeetCode #2215**

**Approach:** Hash Set

```text
Time Complexity: O(n + m) average
Space Complexity: O(n + m)
```

---

## 006 — Intersection of Two Arrays

**LeetCode #349**

**Approach:** Brute Force

```text
Time Complexity: O(n × m) worst-case
Space Complexity: O(min(n, m))
```

---

## 007 — Majority Element

**LeetCode #169**

**Approach:** Hash Map

```text
Time Complexity: O(n) average
Space Complexity: O(n)
```

---

## 008 — Best Time to Buy and Sell Stock

**LeetCode #121**

**Approach:** Single Pass

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

## 009 — Running Sum of 1d Array

**LeetCode #1480**

**Approach:** In-Place Prefix Sum

```text
Time Complexity: O(n)
Space Complexity: O(1) auxiliary
```

---

## 010 — Find Pivot Index

**LeetCode #724**

**Approach:** Total Sum + Running Left Sum

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

## 011 — Single Number

**LeetCode #136**

**Approach:** XOR

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

## 012 — Missing Number

**LeetCode #268**

**Approach:** XOR

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

## 013 — Move Zeroes

**LeetCode #283**

### Approach 1 — Extra Vector

```text
Time Complexity: O(n)
Space Complexity: O(n)
```

### Approach 2 — Two Pointer + In-Place Swap

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

The second approach was preferred because it achieves the same linear time while reducing auxiliary space.

---

## 014 — Find All Numbers Disappeared in an Array

**LeetCode #448**

### Approach 1 — Hash Set

```text
Time Complexity: O(n) average
Space Complexity: O(n)
```

### Approach 2 — Negative Marking

```text
Time Complexity: O(n)
Space Complexity: O(1) auxiliary
```

---

## 015 — Intersection of Two Arrays II

**LeetCode #350**

### Approach 1 — Sorting + Two Pointers

```text
Time Complexity: O(n log n + m log m)
Space Complexity: O(1) auxiliary
```

### Approach 2 — Hash Map + Frequency Counting

```text
Time Complexity: O(n + m) average
Space Complexity: O(n)
```

---

## 016 — Valid Anagram

**LeetCode #242**

**Approach:** Frequency Array

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

The frequency array has a fixed size of 26 for lowercase English letters.

---

# 📊 Problem Progress

| #   | Problem                                    | Approach         | Time       | Space       |
| --- | ------------------------------------------ | ---------------- | ---------- | ----------- |
| 001 | Two Sum                                    | Hash Map         | O(n) avg   | O(n)        |
| 002 | Contains Duplicate                         | Hash Set         | O(n) avg   | O(n)        |
| 003 | Find Numbers with Even Number of Digits    | Range Checking   | O(n)       | O(1)        |
| 004 | Maximum Number of Words Found in Sentences | Count Spaces     | O(L)       | O(1)        |
| 005 | Find the Difference of Two Arrays          | Hash Set         | O(n+m) avg | O(n+m)      |
| 006 | Intersection of Two Arrays                 | Brute Force      | O(n×m)     | O(min(n,m)) |
| 007 | Majority Element                           | Hash Map         | O(n) avg   | O(n)        |
| 008 | Best Time to Buy and Sell Stock            | Single Pass      | O(n)       | O(1)        |
| 009 | Running Sum of 1d Array                    | Prefix Sum       | O(n)       | O(1)        |
| 010 | Find Pivot Index                           | Running Sum      | O(n)       | O(1)        |
| 011 | Single Number                              | XOR              | O(n)       | O(1)        |
| 012 | Missing Number                             | XOR              | O(n)       | O(1)        |
| 013 | Move Zeroes                                | Two Pointer      | O(n)       | O(1)        |
| 014 | Find All Numbers Disappeared               | Negative Marking | O(n)       | O(1)        |
| 015 | Intersection of Two Arrays II              | Hash Map         | O(n+m) avg | O(n)        |
| 016 | Valid Anagram                              | Frequency Array  | O(n)       | O(1)        |

---

# 🏆 Confidence Check

Before moving to the next topic, I checked whether I could:

* [x] Explain Big O notation
* [x] Identify `O(1)`
* [x] Identify `O(n)`
* [x] Identify `O(n²)`
* [x] Understand `O(log n)`
* [x] Understand `O(n log n)`
* [x] Analyze sequential loops
* [x] Analyze nested loops
* [x] Analyze fixed-size loops
* [x] Analyze space complexity
* [x] Understand auxiliary space
* [x] Compare brute-force and optimized approaches
* [x] Understand basic time-space trade-offs
* [x] Analyze complexity of LeetCode solutions
* [x] Explain why an approach has a particular complexity

---

# 📈 Final Topic Status

```text
Topic:
Time & Space Complexity

Problems Solved:
16

Status:
✅ Completed

Next Topic:
Arrays
```

The topic was considered complete after practicing multiple problems and developing a working understanding of common complexity patterns.

However, complexity analysis will continue to be practiced throughout the entire DSA journey.

---

# 🔄 What I Will Carry Forward

Time and Space Complexity is not a topic that ends here.

For every future DSA problem, I will continue asking:

```text
What is the Time Complexity?
        +
What is the Space Complexity?
        +
Can this solution be optimized?
```

---

# 🚀 Next Topic

```text
01_Time_and_Space_Complexity
              ↓
           COMPLETE
              ↓
        02_Arrays
```

> **The goal is not just to solve the problem. The goal is to understand how efficiently it can be solved.**

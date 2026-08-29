# ⏱️ Time & Space Complexity

## 📌 Overview

Time and Space Complexity are used to analyze how efficient an algorithm is.

They help us understand:

* How the running time grows with input size
* How much extra memory an algorithm requires
* Which solution is more efficient
* Whether a solution can handle large inputs

---

# ⏱️ Time Complexity

Time Complexity describes how the number of operations performed by an algorithm grows as the input size `n` increases.

We generally express it using **Big O notation**.

## Common Time Complexities

| Complexity   | Name         | Example                   |
| ------------ | ------------ | ------------------------- |
| `O(1)`       | Constant     | Direct array access       |
| `O(log n)`   | Logarithmic  | Binary Search             |
| `O(n)`       | Linear       | Traversing an array       |
| `O(n log n)` | Linearithmic | Merge Sort                |
| `O(n²)`      | Quadratic    | Nested loops              |
| `O(2ⁿ)`      | Exponential  | Some recursive solutions  |
| `O(n!)`      | Factorial    | Some permutation problems |

---

# 🟢 O(1) — Constant Time

The number of operations does not depend on the input size.

```cpp
int x = arr[0];
```

Whether the array has 10 elements or 1,000,000 elements, accessing the first element takes constant time.

```text
Time Complexity: O(1)
```

---

# 🟢 O(n) — Linear Time

The number of operations grows linearly with the input size.

```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

The loop runs `n` times.

```text
Time Complexity: O(n)
```

---

# 🟡 O(n²) — Quadratic Time

Usually occurs when we have nested loops depending on the same input size.

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i << " " << j << endl;
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

In logarithmic algorithms, the problem size is reduced significantly at each step.

A common example is Binary Search.

```text
n
↓
n/2
↓
n/4
↓
n/8
↓
...
```

Therefore:

```text
Time Complexity: O(log n)
```

---

# 🟢 O(n log n)

This commonly appears in efficient sorting algorithms.

Examples:

* Merge Sort
* Heap Sort
* Average-case Quick Sort

```text
Time Complexity: O(n log n)
```

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

---

# 📌 Big O Rules

## 1. Ignore Constants

If an algorithm takes:

```text
O(2n)
```

we write:

```text
O(n)
```

because Big O focuses on the growth rate.

---

## 2. Drop Lower-Order Terms

For:

```text
O(n² + n + 5)
```

we consider the dominant term:

```text
O(n²)
```

---

## 3. Sequential Operations Add

If two independent loops each take `O(n)`:

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

# 💾 Space Complexity

Space Complexity describes how much **additional memory** an algorithm uses as input size increases.

For example:

```cpp
int x = 10;
```

uses constant extra memory:

```text
Space Complexity: O(1)
```

But:

```cpp
int arr[n];
```

requires memory proportional to `n`:

```text
Space Complexity: O(n)
```

---

# 📌 Auxiliary Space

When discussing space complexity in algorithm problems, we often focus on the **extra/auxiliary memory used by the algorithm**, excluding the input itself when appropriate.

Example:

```cpp
int sum = 0;

for (int i = 0; i < n; i++) {
    sum += arr[i];
}
```

The algorithm only uses a few extra variables.

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

# 🧩 Problem-Solving Connection

Time and Space Complexity become especially important when comparing different solutions to the same problem.

For example:

```text
Brute Force
    ↓
May work for small input
    ↓
Higher Time Complexity

Optimized Solution
    ↓
Uses a better algorithm/data structure
    ↓
Lower Time Complexity
```

The goal is not always to find the shortest code.

The goal is to find an **efficient and correct solution**.

---

# 🧠 LeetCode Practice

The following problems have been solved as part of the Time & Space Complexity practice.

---

## 1. Two Sum — LeetCode #1

**Difficulty:** Easy

### Focus:

* Array traversal
* Brute Force approach
* Hashing
* Time Complexity
* Space Complexity
* Comparing brute force and optimized approaches

### Complexity of Optimized Solution:

```text
Time Complexity: O(n) average
Space Complexity: O(n)
```

---

## 2. Contains Duplicate — LeetCode #217

**Difficulty:** Easy

### Focus:

* Duplicate detection
* Array traversal
* Hashing
* Set
* Time Complexity
* Space Complexity

### Complexity:

```text
Time Complexity: O(n) average
Space Complexity: O(n)
```

---

## 3. Find Numbers with Even Number of Digits — LeetCode #1295

**Difficulty:** Easy

### Focus:

* Array traversal
* Checking number of digits
* Conditional statements
* Understanding linear traversal
* Time Complexity
* Space Complexity

### Approach Used:

The solution checks whether each number falls into a range representing an even number of digits.

```text
10 – 99
1000 – 9999
100000
```

If the number has an even number of digits, the counter is increased.

### Complexity:

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

## 4. Maximum Number of Words Found in Sentences — LeetCode #2114

**Difficulty:** Easy

### Focus:

* Iterating through strings
* Counting spaces
* Finding the maximum value
* String processing
* Time Complexity
* Space Complexity

### Approach Used:

For every sentence, count the number of spaces.

Since words are separated by spaces:

```text
Number of words = Number of spaces + 1
```

Then keep track of the maximum number of words found.

### Complexity:

Let `L` represent the total number of characters processed across all sentences.

```text
Time Complexity: O(L)
Space Complexity: O(1)
```

---

# 📊 Current Problem Progress

| # | LeetCode Problem                           | Difficulty | Status   |
| - | ------------------------------------------ | ---------- | -------- |
| 1 | Two Sum                                    | Easy       | ✅ Solved |
| 2 | Contains Duplicate                         | Easy       | ✅ Solved |
| 3 | Find Numbers with Even Number of Digits    | Easy       | ✅ Solved |
| 4 | Maximum Number of Words Found in Sentences | Easy       | ✅ Solved |

---

# 🎯 Current Goal

This topic is **not considered complete yet**.

The goal is not simply to solve two problems and immediately move to the next DSA topic.

I will continue solving problems related to **Time & Space Complexity** until I develop enough confidence to:

* Identify the complexity of an algorithm
* Analyze loops
* Analyze nested loops
* Understand time vs space trade-offs
* Compare brute-force and optimized approaches
* Recognize common Big O complexities
* Analyze my own LeetCode solutions
* Understand why one solution is more efficient than another

### Current Progress

```text
Problems Solved: 4

Target: ~10–12+ problems

Status: 🚀 In Progress
```

---

# 🔥 Learning Philosophy

> **2 problems a day is the habit. Topic mastery is the milestone.**

The number of problems solved is not the only measure of progress.

The real goal is to develop the ability to **understand, analyze, and solve problems independently**.

```text
Learn
  ↓
Understand
  ↓
Solve
  ↓
Analyze Complexity
  ↓
Review Mistakes
  ↓
Build Confidence
  ↓
Move to Next Topic
```

---

# 🚀 DSA Journey

This repository is part of my long-term **DSA in C++ journey**.

I am not following a fixed "one topic per day" system.

Instead:

```text
Topic
  ↓
Learn Concepts
  ↓
Practice
  ↓
Solve 10–12+ Problems
  ↓
Build Confidence
  ↓
Move to Next Topic
```

The goal is to build a **daily problem-solving habit** and develop strong DSA fundamentals step by step.

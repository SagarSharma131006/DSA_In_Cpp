#include <iostream>
#include <vector>
using namespace std;

/*
DSA - Time & Space Complexity
--------------------------------
This file contains basic C++ examples
used to understand different complexities.
*/

// ============================================================
// 1. O(1) - Constant Time
// ============================================================

void constantTime(vector<int>& arr) {

```
// Direct access to an element
cout << arr[0] << endl;

/*
    Time Complexity: O(1)
    Space Complexity: O(1)
*/
```

}

// ============================================================
// 2. O(n) - Linear Time
// ============================================================

void linearTime(vector<int>& arr) {

```
for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
```

}

// ============================================================
// 3. O(n^2) - Quadratic Time
// ============================================================

void quadraticTime(int n) {

```
for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {
        cout << i << " " << j << endl;
    }
}

/*
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/
```

}

// ============================================================
// 4. O(log n) - Logarithmic Time
// ============================================================

void logarithmicTime(int n) {

```
int i = 1;

while (i < n) {
    i *= 2;
}

/*
    Time Complexity: O(log n)
    Space Complexity: O(1)
*/
```

}

// ============================================================
// 5. O(n log n)
// ============================================================

void linearLogarithmicTime(int n) {

```
for (int i = 0; i < n; i++) {

    int j = 1;

    while (j < n) {
        j *= 2;
    }
}

/*
    Outer loop: O(n)
    Inner loop: O(log n)

    Total:
    O(n log n)

    Space Complexity: O(1)
*/
```

}

// ============================================================
// 6. O(n) Extra Space
// ============================================================

void linearSpace(int n) {

```
vector<int> arr(n);

/*
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
```

}

// ============================================================
// 7. O(1) Extra Space
// ============================================================

int constantSpace(vector<int>& arr) {

```
int sum = 0;

for (int value : arr) {
    sum += value;
}

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

return sum;
```

}

// ============================================================
// Main Function
// ============================================================

int main() {

```
vector<int> arr = {10, 20, 30, 40, 50};

cout << "O(1) Example: ";
constantTime(arr);

cout << "\nO(n) Example: ";
linearTime(arr);

cout << "\n\nO(n^2) Example:\n";
quadraticTime(3);

cout << "\nO(log n) Example:\n";
logarithmicTime(16);

cout << "\nO(n log n) Example:\n";
linearLogarithmicTime(5);

cout << "\nSum: ";
cout << constantSpace(arr) << endl;

return 0;
```

}

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
DSA - Arrays
--------------------------------
This file contains basic C++ examples
used to understand fundamental array concepts
and common array operations.
*/

// ============================================================
// 1. Array Declaration & Initialization
// ============================================================

void arrayBasics() {

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array Elements: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    /*
        Array stores elements of the same type
        in contiguous memory locations.

        Accessing an element:
        Time Complexity: O(1)
        Space Complexity: O(n)
    */
}


// ============================================================
// 2. Array Traversal
// ============================================================

void arrayTraversal(vector<int>& arr) {

    cout << "Array Traversal: ";

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    /*
        Time Complexity: O(n)
        Space Complexity: O(1)
    */
}


// ============================================================
// 3. Accessing an Array Element
// ============================================================

void accessElement(vector<int>& arr, int index) {

    cout << "Element at index " << index << ": ";

    cout << arr[index] << endl;

    /*
        Direct array access takes constant time.

        Time Complexity: O(1)
        Space Complexity: O(1)
    */
}


// ============================================================
// 4. Updating an Array Element
// ============================================================

void updateElement(vector<int>& arr, int index, int value) {

    arr[index] = value;

    cout << "Updated Array: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    /*
        Updating an element using its index:

        Time Complexity: O(1)
        Space Complexity: O(1)
    */
}


// ============================================================
// 5. Finding Maximum Element
// ============================================================

int findMaximum(vector<int>& arr) {

    int maximum = arr[0];

    for (int i = 1; i < arr.size(); i++) {

        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    /*
        Every element is checked once.

        Time Complexity: O(n)
        Space Complexity: O(1)
    */

    return maximum;
}


// ============================================================
// 6. Finding Minimum Element
// ============================================================

int findMinimum(vector<int>& arr) {

    int minimum = arr[0];

    for (int i = 1; i < arr.size(); i++) {

        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    /*
        Every element is checked once.

        Time Complexity: O(n)
        Space Complexity: O(1)
    */

    return minimum;
}


// ============================================================
// 7. Searching - Linear Search
// ============================================================

int linearSearch(vector<int>& arr, int target) {

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == target) {
            return i;
        }
    }

    /*
        Best Case: O(1)
        Worst Case: O(n)

        Space Complexity: O(1)
    */

    return -1;
}


// ============================================================
// 8. Reversing an Array - Two Pointer
// ============================================================

void reverseArray(vector<int>& arr) {

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {

        swap(arr[left], arr[right]);

        left++;
        right--;
    }

    cout << "Reversed Array: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    /*
        Two pointers move toward each other.

        Time Complexity: O(n)
        Space Complexity: O(1)
    */
}


// ============================================================
// 9. Sum of Array Elements
// ============================================================

int arraySum(vector<int>& arr) {

    int sum = 0;

    for (int value : arr) {
        sum += value;
    }

    /*
        Every element is visited once.

        Time Complexity: O(n)
        Space Complexity: O(1)
    */

    return sum;
}


// ============================================================
// 10. Count Occurrences of a Target
// ============================================================

int countOccurrences(vector<int>& arr, int target) {

    int count = 0;

    for (int value : arr) {

        if (value == target) {
            count++;
        }
    }

    /*
        Every element is checked.

        Time Complexity: O(n)
        Space Complexity: O(1)
    */

    return count;
}


// ============================================================
// 11. Insert Element at a Position
// ============================================================

void insertElement(vector<int>& arr, int index, int value) {

    arr.insert(arr.begin() + index, value);

    cout << "After Insertion: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    /*
        Inserting in the middle requires shifting elements.

        Time Complexity: O(n)
        Space Complexity: O(n) in the worst case
        due to vector capacity/reallocation considerations.
    */
}


// ============================================================
// 12. Delete Element from a Position
// ============================================================

void deleteElement(vector<int>& arr, int index) {

    arr.erase(arr.begin() + index);

    cout << "After Deletion: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    /*
        Elements after the deleted element
        may need to be shifted.

        Time Complexity: O(n)
        Space Complexity: O(1) auxiliary
    */
}


// ============================================================
// Main Function
// ============================================================

int main() {

    vector<int> arr = {10, 20, 30, 40, 50};

    cout << "=== Array Concepts ===\n\n";


    cout << "1. Array Basics\n";
    arrayBasics();


    cout << "\n2. Array Traversal\n";
    arrayTraversal(arr);


    cout << "\n3. Access Element\n";
    accessElement(arr, 2);


    cout << "\n4. Update Element\n";
    updateElement(arr, 2, 100);


    cout << "\n5. Maximum Element\n";
    cout << findMaximum(arr) << endl;


    cout << "\n6. Minimum Element\n";
    cout << findMinimum(arr) << endl;


    cout << "\n7. Linear Search\n";
    cout << "Index: " << linearSearch(arr, 40) << endl;


    cout << "\n8. Reverse Array\n";
    reverseArray(arr);


    cout << "\n9. Array Sum\n";
    cout << arraySum(arr) << endl;


    cout << "\n10. Count Occurrences\n";
    cout << countOccurrences(arr, 20) << endl;


    cout << "\n11. Insert Element\n";
    insertElement(arr, 2, 25);


    cout << "\n12. Delete Element\n";
    deleteElement(arr, 2);


    return 0;
}
```

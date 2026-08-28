/*
    DSA IN C++ — DAY 01

    Topic: Time & Space Complexity

    Today I started my DSA journey in C++.

    Before jumping directly into Arrays, Linked Lists,
    Trees, Graphs, etc., I wanted to understand how to
    analyze the efficiency of a program.

    In DSA, we mainly look at:

    1. Time Complexity
    2. Space Complexity
*/


#include <iostream>
#include <vector>
using namespace std;


// ------------------------------------------------------------
// 1. O(1) - Constant Time
// ------------------------------------------------------------

/*
    Here we are accessing only one element.

    It doesn't matter whether the array has
    10 elements or 10,000 elements.

    We are doing only one operation.

    Time Complexity: O(1)
*/

void constantTime(vector<int>& arr)
{
    cout << "First element: " << arr[0] << endl;
}


// ------------------------------------------------------------
// 2. O(n) - Linear Time
// ------------------------------------------------------------

/*
    This loop runs n times.

    If n = 5  -> 5 iterations
    If n = 100 -> 100 iterations

    Time Complexity: O(n)
*/

void linearTime(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}


// ------------------------------------------------------------
// 3. O(n²) - Quadratic Time
// ------------------------------------------------------------

/*
    Here we have a loop inside another loop.

    Outer loop  -> n times
    Inner loop  -> n times

    Total = n * n
          = n²

    Time Complexity: O(n²)
*/

void quadraticTime(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
    }

    cout << endl;
}


// ------------------------------------------------------------
// 4. O(1) Space
// ------------------------------------------------------------

/*
    Only a few variables are being created.

    The amount of extra memory doesn't depend
    on the value of n.

    Space Complexity: O(1)
*/

void constantSpace()
{
    int a = 10;
    int b = 20;
    int c = a + b;

    cout << "Sum: " << c << endl;
}


// ------------------------------------------------------------
// 5. O(n) Space
// ------------------------------------------------------------

/*
    Here we create a vector of size n.

    As n increases, the memory required also increases.

    Space Complexity: O(n)
*/

void linearSpace(int n)
{
    vector<int> temp(n);

    cout << "Vector size: " << temp.size() << endl;
}


// ------------------------------------------------------------
// MAIN
// ------------------------------------------------------------

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};


    cout << "===== O(1) Time =====" << endl;
    constantTime(arr);


    cout << "\n===== O(n) Time =====" << endl;
    linearTime(arr);


    cout << "\n===== O(n²) Time =====" << endl;
    quadraticTime(3);


    cout << "\n===== O(1) Space =====" << endl;
    constantSpace();


    cout << "\n===== O(n) Space =====" << endl;
    linearSpace(5);


    return 0;
}


/*
    --------------------------------------------------------
    WHAT I LEARNED TODAY
    --------------------------------------------------------

    O(1)
    -> Constant time
    -> Doesn't depend on input size

    O(n)
    -> Linear time
    -> Runs according to input size

    O(n²)
    -> Quadratic time
    -> Usually happens with nested loops

    O(log n)
    -> Logarithmic time
    -> Example: Binary Search

    Space Complexity
    -> Tells us how much extra memory our algorithm uses


    --------------------------------------------------------
    IMPORTANT POINTS
    --------------------------------------------------------

    1. Nested loops usually mean multiplication.

       O(n) × O(n) = O(n²)


    2. Separate loops are added.

       O(n) + O(n) = O(2n) = O(n)


    3. We usually ignore constants.

       O(2n) = O(n)
       O(100n) = O(n)


    4. We focus on the fastest-growing term.

       O(n² + n + 5) = O(n²)


    5. Lower time complexity is generally better.


    --------------------------------------------------------
    MY DAY 01 GOAL
    --------------------------------------------------------

    The main thing I want to remember from today is:

    Before solving a DSA problem, I should not only think
    about whether my solution works.

    I should also think about:

        "How efficiently does my solution work?"

    This will become more important as I move towards
    harder DSA problems.
*/
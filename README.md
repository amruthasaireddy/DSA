# DSA
1.Print all Divisors of N
What are Divisors?

A divisor (or factor) of a number n is any number that divides n exactly (i.e., with remainder 0).

Example:

Divisors of 12 → {1, 2, 3, 4, 6, 12}

Because 12 % i = 0 for each of these values.

Problem Statement:

Given an integer N, print all of its divisors in ascending order.

Example 1:

Input:

1
12
Output:

123456
1234612
Explanation:
The divisors of 12 are 1, 2, 3, 4, 6, 12.

Example 2:

Input:

1
20
Output:

123456
12451020
Explanation:  The divisors of 20 are 1, 2, 4, 5, 10, 20.

Approach
Iterate from 1 to √n and check if n % i == 0.

Add both i and n / i as divisors (avoid duplicates for perfect squares).

Sort the list of divisors in ascending order.

Print each divisor from the sorted list.

2.Largest Element - Optimal Solution
Approach
Initialize a variable with the first element of the array (i.e., max = arr[0]).

Traverse the array starting from the second element. During the iteration, update the variable if a larger element is found.

After completing the iteration, the variable holds the largest element, which is then printed.
Explanation:

Initialization:

Set the variable max to the first element of the array (arr[0]).
For Loop:

Use a for loop to iterate from the second element (index 1) to the last element (index n-1).
Conditional Check:

Within the loop, check if the current element (arr[i]) is greater than the current maximum value (max).

If true, update max to the current element.

Print Statement:

After the loop, print the value of max, which now contains the largest element in the array.
 Pseudo Code
largestElement(arr, n) {
    max = arr[0]
    for i from 1 to n-1 {
         if (arr[i] > max) {
             max = arr[i]
         }
    }
    print(max)
}
Complexity Analysis
Time Complexity O(n)

The algorithm runs in O(n) time since it involves a single traversal from index 0 to index n - 1.
Space Complexity O(1)

The space complexity is O(1) because the algorithm uses only a constant amount of extra space.

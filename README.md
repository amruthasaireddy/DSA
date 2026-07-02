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

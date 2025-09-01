Law of Large Numbers

The "Law of Large Numbers" is generally covered in statistics but is often used in different fields in a form unique to each context. In this context, the law is applied in the following way: when given a list of numbers, you are to add numbers from the list M times in order to create the largest possible total sum. However, according to the rule, the same number cannot be chosen more than K times consecutively.

For example, suppose the array consists of the numbers 2, 4, 5, and 6, with M = 8 and K = 3.

In this case, the largest number 6 can be chosen up to three consecutive times, and then the second largest number 5 must be chosen before returning to 6.

Therefore, the sequence will look like: 6 + 6 + 6 + 5 + 6 + 6 + 6 + 5 = 46.

Another example: suppose the numbers are 3, 4, and 3 with M = 7 and K = 2.

Here, the first and second numbers are 4 and 4, so they can both be chosen alternately without breaking the rules.

The result would be: 4 + 4 + 4 + 4 + 4 + 4 + 4 = 28.

Given an array of size N, and integers M and K, determine the result of applying the Law of Large Numbers.

Input Conditions

The first line contains integers N (2 ≤ N ≤ 1,000), M (1 ≤ M ≤ 10,000), and K (1 ≤ K ≤ 10,000), separated by spaces.

The second line contains N natural numbers separated by spaces, each ≤ 10,000.

The given numbers will always be in non-decreasing order.

Output Conditions

Print the result of the Law of Large Numbers according to the given conditions.

Example Input
5 8 3
2 4 5 4 6

Example Output
46

## 📌 Problem: Law of Large Numbers

The "Law of Large Numbers" is generally covered in statistics but is often used in different fields in a form unique to each context.  
In this context, the law is applied in the following way:

- Given a list of numbers, you must add numbers from the list **M** times to create the largest possible total sum.  
- However, the same number cannot be chosen more than **K** times consecutively.  

---

### Example Explanation

Suppose the array consists of the numbers **2, 4, 5, 6**, with `M = 8` and `K = 3`:

- The largest number 6 can be chosen at most three times in a row.  
- Then the second largest number 5 must be chosen before returning to 6.  
- Therefore, the result is:

6 + 6 + 6 + 5 + 6 + 6 + 6 + 5 = 46


Another example:  
Suppose the array is **3, 4, 3** with `M = 7` and `K = 2`:

- The numbers 4 and 4 can be alternated without breaking the rules.  
- The result is:

4 + 4 + 4 + 4 + 4 + 4 + 4 = 28


---

### Input

1. The first line contains three integers:  
   - `N` (2 ≤ N ≤ 1,000): the size of the array  
   - `M` (1 ≤ M ≤ 10,000): the number of additions  
   - `K` (1 ≤ K ≤ 10,000): the maximum consecutive repetitions allowed  

2. The second line contains `N` natural numbers (each ≤ 10,000), separated by spaces.  
   - The numbers are given in non-decreasing order.  

---

### Output

- Print the maximum possible sum under the given rules.  

---

### Example

**Input**
5 8 3
2 4 5 4 6


**Output**
46

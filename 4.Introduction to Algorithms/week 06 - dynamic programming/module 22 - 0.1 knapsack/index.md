
### Website for Visualizing Recursion:[ https://recursion.vercel.app/ ]( https://recursion.vercel.app/ )

### Problem Links
- [U. Knapsack - Codeforces](https://codeforces.com/problemset/problem/1388/U)
- [0-1 Knapsack Problem on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1)

## Code

```
def knapsack(n, s):
    if n == 0 or s == 0:
        return 0
    if weights[n - 1] <= s:
        op1 = knapsack(n - 1, s - weights[n - 1]) + values[n - 1]
        op2 = knapsack(n - 1, s)
        return max(op1, op2)
    else:
        return knapsack(n - 1, s)




# Example usage
weights = [2, 3, 4, 5]
values = [3, 4, 5, 6]
capacity = 5
result = knapsack(len(weights), capacity)
print("Maximum value:", result)

```
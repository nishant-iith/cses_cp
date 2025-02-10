# Weird Algorithm

## Problem Statement
Consider a simple number sequence where we start with any positive integer n:
- If n is even, divide it by 2
- If n is odd, multiply it by 3 and add 1
The task is to keep applying these rules until we reach 1.

## Understanding with Examples

Let's take a simple example with n = 3:
```
3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
```

Breaking down what happened:
1. 3 is odd: (3 × 3) + 1 = 10
2. 10 is even: 10 ÷ 2 = 5
3. 5 is odd: (5 × 3) + 1 = 16
4. 16 is even: 16 ÷ 2 = 8
5. 8 is even: 8 ÷ 2 = 4
6. 4 is even: 4 ÷ 2 = 2
7. 2 is even: 2 ÷ 2 = 1

## Key Challenges

1. **Data Type Limitation:**
   - Numbers can become very large during calculations
   - Solution: Use `long long` instead of `int`

2. **Time Limit:**
   - Printing each number separately is slow
   - Solution: Accumulate output in a string and print once

## Solution Approach

### 1. Efficient I/O Operations
```cpp
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
```
This makes input/output operations faster by:
- Disabling synchronization between C++ and C I/O operations
- Preventing automatic flushing of output buffer

### 2. Output Optimization
Instead of:
```cpp
cout << n << " ";  // Slow: Multiple print operations
```
We use:
```cpp
ostringstream out;
out << n;          // Fast: Accumulate in memory
```

### 3. Number Processing
```cpp
if (n % 2 == 0)
    n >>= 1;       // Efficient way to divide by 2
else
    n = 3*n + 1;
```

## Common Pitfalls

1. **Integer Overflow**
   - Using `int` can cause overflow
   - Example: If n = 100000, intermediate values exceed 2^31-1

2. **Time Limit Exceeded (TLE)**
   - Using `cout` repeatedly
   - Solution: Use string stream for batch output

3. **Memory Management**
   - For very large numbers, string stream is still efficient
   - Modern C++ handles the memory allocation automatically

## Complexity Analysis

- Time Complexity: O(log n) average case
- Space Complexity: O(log n) for storing the output string

## Pro Tips

1. Use bit manipulation for even/odd check:
   ```cpp
   if (n & 1)  // Check if odd
   ```

2. Use right shift for division by 2:
   ```cpp
   n >>= 1     // Same as n = n/2
   ```

3. Buffer output to avoid multiple I/O operations

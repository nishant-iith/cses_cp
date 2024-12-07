# CSES Problem Set: Weird Algorithm

## Task

Consider an algorithm that takes as input a positive integer `n`. If `n` is even, the algorithm divides it by two, and if `n` is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this until `n` becomes one.

For example, the sequence for `n=3` is as follows:
3 → 10 → 5 → 16 → 8 → 4 → 2 → 1


Your task is to simulate the execution of the algorithm for a given value of `n`.

## Input

The only input line contains an integer `n`.

### Constraints:
- $\(1 \leq n \leq 10^6\)$

## Output

Print a line that contains all values of `n` during the algorithm.

## Example

### Input: 
3


### Output:
3 10 5 16 8 4 2 1

---

### Notes:

- The algorithm should print all intermediate values of `n` during the process, ending with `1`.
- Ensure the solution runs efficiently for input values as large as $\(10^6\)$.


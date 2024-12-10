# CSES Problem Set: Permutations

## Task

A permutation of integers $$1, 2, \ldots, n$$ is called **beautiful** if there are no adjacent elements whose difference is $$1$$.  
Given $$n$$, construct a beautiful permutation if such a permutation exists.

## Input

- The only input line contains an integer $$n$$.

### Constraints:
- $$1 \leq n \leq 10^6$$

## Output

- Print a beautiful permutation of integers $$1, 2, \ldots, n$$.  
- If there are several solutions, you may print any of them.  
- If there are no solutions, print $$\text{NO SOLUTION}$$.

## Examples

### Example 1:
**Input:**
$$
5
$$

**Output:**
$$
4\ 2\ 5\ 3\ 1
$$

### Example 2:
**Input:**
$$
3
$$

**Output:**
$$
\text{NO SOLUTION}
$$

---

### Notes:
- A **beautiful permutation** ensures that for all adjacent elements $$a_i$$ and $$a_{i+1}$$, the condition $$|a_i - a_{i+1}| \neq 1$$ holds true.
- If $$n \leq 3$$ and $$n \neq 1$$, there is no solution. For larger $$n$$, a solution can be constructed.

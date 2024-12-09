# CSES Problem Set: Increasing Array

## Task

You are given an array of $$n$$ integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.  
On each move, you may increase the value of any element by one. What is the minimum number of moves required?

## Input

- The first input line contains an integer $$n$$: the size of the array.
- Then, the second line contains $$n$$ integers $$x_1, x_2, \ldots, x_n$$: the contents of the array.

### Constraints:
- $$1 \leq n \leq 2 \times 10^5$$
- $$1 \leq x_i \leq 10^9$$

## Output

Print the minimum number of moves.

## Example

### Input:
$$
5 \\
3\ 2\ 5\ 1\ 7
$$

### Output:
$$
5
$$

---

### Notes:
- The solution needs to ensure that the array is modified in the minimum number of moves to make it increasing.
- The input size can be large, so the solution should be efficient.

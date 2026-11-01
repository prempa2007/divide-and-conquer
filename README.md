# DESIGN AND ANALYSIS OF ALGORITHMS
## Divide and Conquer

This repository contains C implementations of Divide and Conquer algorithms.

---

### Problems & Solutions

#### 1. Count Zeroes in a Binary Array (`question1.c`)
- **Problem**: Given a sorted array where all 1s appear before all 0s, count the total number of 0s.
- **Approach**: Binary search to find the transition index where 1 changes to 0. Total zeroes = $m - \text{index}$.
- **Time Complexity**: $O(\log n)$
- **Space Complexity**: $O(1)$

---

#### 2. Majority Element (`question2.c`)
- **Problem**: Find the majority element that appears more than $\lfloor n / 2 \rfloor$ times.
- **Approach**: Linear frequency scan comparing occurrences against majority threshold.
- **Time Complexity**: $O(n)$
- **Space Complexity**: $O(1)$

---

#### 3. Floor of $x$ in a Sorted Array (`question3.c`)
- **Problem**: Find the floor of $x$ (the largest element in the array smaller than or equal to $x$).
- **Approach**: Recursive divide and conquer binary search.
- **Time Complexity**: $O(\log n)$
- **Space Complexity**: $O(\log n)$ recursion stack space ($O(1)$ auxiliary).

---

#### 4. Pair with Given Sum in Sorted Array (`question4.c`)
- **Problem**: Check if there exist two elements in a sorted array whose sum equals $x$, and print the pair.
- **Approach**: Recursive two-pointer divide and conquer shrinking search window from boundaries.
- **Time Complexity**: $O(n)$
- **Space Complexity**: $O(n)$ recursion stack space.

---

#### 5. Quick Sort Algorithm (`question5.c`)
- **Problem**: Sort an array of $n$ integers using the Quick Sort divide-and-conquer strategy.
- **Approach**: Partition array around a pivot, recursively sort sub-arrays (`qsort`).
- **Time Complexity**: $O(n \log n)$ average, $O(n^2)$ worst case.
- **Space Complexity**: $O(\log n)$ auxiliary recursion stack space.

---

### How to Compile & Run

Compile any problem using GCC:
```bash
gcc question1.c -o question1
./question1
```

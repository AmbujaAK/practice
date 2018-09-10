Quicksort is a type of comparison sorting algorithm whose time complexity ranges from O(n) to O(n<sup>2</sup>) time.

In this question, we will use quicksort to sort integers in non-decreasing order. Here's the description of the algorithm and question:

You are given an integer array (input as a sequence of space separated integers) of size n. 

The algorithm divides the array into two smaller sub-arrays (low elements and high elements). Then each sub-array is 
recursively sorted.

The steps are as follows:

* Pivot: Pick a pivot element. In this question, the pivot element is always the last element in the array.
* Partitioning: All elements whose value is less than or equal to the pivot element come before the pivot, while all elements greater than the pivo
  come after the pivot.
* Recursion: Recursively repeat the above steps to the array with lower elements, and to the array with greater elements.

Your task in this challenge is to perform the quicksort operation in the output array, and output **a sorted sequence, in increasing order, of distinct elements that are 
the size of all non-zero partitions** obtained during partitioning.

That's a wordy sentence! And so, on to an example which perhaps will explain this more clearly.

Suppose the array is [2,8,3,6,7,8,9,1,5].


This will be input as a sequence of space-separated integers thus:

2 8 3 6 7 8 9 1 5

If you look at the diagram below, 
![img](https://drive.google.com/open?id=0B9x_VvTgOATGUE5IQ2o2SUUyTnc)

you see that all distinct non-zero partition sizes in ascending order are 1, 2, 3, 4 and 5.

The expected output would be 1 2 3 4 5

**Input Format**

The first line of input contains an integer T which is the number of test cases. Then T test cases follow.

Each test case contains two lines of input. The first line of input for each test case contains an integer n, which is the size of the array.
The next line of each test case contains n space separated integers.

Then the next test case follows with the same input format. The sample input will make things more clear.

**Output Format**

For each test case, output all distinct non-zero partition sizes that result from the partitioning operation during application of the 
Quicksort algorithm. Note that this must be output as space separated integers in increasing order.

**Constraints**

0 < t < 500 (This is the number of test cases.)

0 < n <= 5000	(This is the number of integers.)

0< Xi < 5000 (This is the size of elements in the integer array.)

##### Sample input:
```
3
9
2 8 3 6 7 8 9 1 5
6
2 19 12 4 15 16
7
14 12 7 4 5 13 11
```

##### Sample Output:
```
1 2 3 4 5
1 3 4
1 3 
```
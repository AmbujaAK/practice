**Basic Stats Calculations**

Neha is a high school teacher of mathematical computer programming in a
reputed high school in a city. She gave her students a set of numbers and asked them to
calculate the following items:

• The count of numbers read (Don't count the zeros in the input)

• The arithmetic mean

• The harmonic mean

• The variance (Sample)

Ramesh is a favourite student of Neha because he scores good marks. Little does Neha know that Ramesh is obtaining
good marks with help from you! Help Ramesh out with this problem so that he maintains his good standing in the eyes
of Neha.

Note: If there will be any zero in the series the output of the harmonic mean should be 0.000000

**Input**

The first line of input contains an integer T which is the number of test cases. Each test case contains two lines.
The first line of each test case contains an integer N which is the number of non-negative integers in the input.

The second line contains N space separated integers (a<sub>1,</sub> a<sub>2, ..., </sub>a<sub>n</sub>)

**Output**

For each test case, there will be four lines of output:

• The count of numbers read (Don't count the zeros in the input)

• The arithmetic mean

• The harmonic mean

• The variance (Sample)

Note that the output should be correct to 6 decimal places (except for the count which is an integer.)

**Constraints**

0 &lt; T &lt; 100

1 < N < 1000

0 <= a<sub>i</sub> < 10000

**Sample Input**

```
2
6
3 21 98 203 17 9
7
3 21 98 203 17 9 408
4
0 1 2 3
9
1 1 1 1 1 1 1 1 6
```

**Sample Output**

```
6
58.500000
10.600384
6219.900000
7
108.428571
12.313794
22633.285714
3
1.500000
0.000000
1.666667
9
1.555556
1.102041
2.777778
```
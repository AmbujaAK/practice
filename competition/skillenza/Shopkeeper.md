There is a shopkeeper who wants to weigh things with a beam balance.
Given n units of weight, he has to be able to weigh all weights of integral units from 1 to n.

Write a program to help him answer these two questions:

1. What is the minimum number of weights required to measure all integral weights from 1 to n units if you can use both 
sides of the beam balance? What are the weights?

2. What is the minimum number of weights required to measure all integeral weights from 1 to n units if you can only use
one side of the balance? What are the weights?


** Input format: **

The first line of input consists of an integer t. This is the number of
test cases. Then t lines follow with an integer in each line that
represents n

** Output format: **

For each test case, there will be two lines of output. The first line
would be space separated integers. The first integer is the number of
weights needed to get the maximum sum if you can use weights on both sides of
the balance. Let's assume it is k. Then k space separated integers
follow. These indicate the weights required to get the maximum sum. The next line would also contain space separated integers in a similar manner but with the number and weights required to get the
maximum when you can use weights on only one side of the balance.

Note that the weights should be given in increasing sorted order.

**Input constraint**

1 < t < 1000

1  < w < 1000000 (here w is the maximum weight)

**Sample Input1**
```
2
100
10000
```

**Sample Output**
```
5 1 3 9 27 81
7 1 2 4 8 16 32 64
10 1 3 9 27 81 243 729 2187 6561 19683
14 1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192
```
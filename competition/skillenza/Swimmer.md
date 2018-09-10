**Swami** from India is an awesome swimmer, he is the next **Michael
Phelps**. Once he went to Venturesity’s pool party and saw a lot of
people playing a game in the pool. The game allows people to swim one step forward or back based on
the instructions given on a piece of paper. 

He decided to give the game a try. The game is clearly based on luck.
If you are lucky, you will win the game! 


**Here are the Rules: **

There will be T test cases each with following details:

1.  There is a collection of N papers and M people

2.  N papers are divided among M people randomly with the assurance that
    all have equal number of papers.

3.  The length of the pool is infinite.

4.  Each paper has a set of instructions provided in string format. Say
    paper i has a string s\[i\]

    1.  For example, if s\[i\]= "ffbf" for swami, Swami performs the
        following sequence of moves: he swims one step front; another step front, 
        one step back; and one step front again. Every candidate will
        start from the center of the pool. The forward direction is considered as positive and the backward direction is negative.

5.  Each player will perform all the steps outlined all the pieces of paper they receive.

6.  Every player has a buddy who is counting the number of
    steps performed by their respective swimmer in forward and backward
    direction. 
    
7. Every player starts at the center of the pool

**Questions: (Write a program to answer the below questions)**

1. After following the instructions given on the paper, the swimmers end up in various distances away from the center.
Output the maximum and minimum distances. Note that if a swimmer ends up in the negative direction, the negative direction is
considered as "lesser" than any distance in the positive direction.

2. The winners of the game are those whose positions are **a prime distance away from the center in the positive direction.** 
If there's no lucky swimmer, print nothing. (The output format will be explained below.)

**Input Format**

Suppose the number of test cases is 1. And also suppose that you have 12 papers and 4 people i.e. N = 12 and M = 4.

There will be 12 strings that follow. The first three strings are the series of instructions to the first person, 
the next three strings are the series of instructions to the second person and so on.

The input looks like this:
```
1
12
4
fbffb
fffbfbb
fffbbfbffff
bbbfbfb
fbfbfbfbf
bfbffbbffbbb
fffffbbbbb
bbbffbbffffbbbbb
ffffffbbfbfbfbfbbbbff
fbfbffb
ffffffb
b
```

**Output Format**

For each test case, there will be multiple lines of output.

**Case 1: There are winners.**

Suppose there are k winners in the game. Then there will be k + 2 lines of output. The first k lines will contain
two space separated integers p and q where p is the number of the swimmer that won (indexed from 1 to M), and q the
number of steps away from the center he's ended up in. The output is sorted in ascending order according to the value
of p. Then the next two lines will contain two integers x and y.

x is the maximum distance (as defined above) and y is the minimum distance.

**Note**

Suppose that the minimum distance is in the backwards direction i.e. negative. For example, it is -4 away from the center.
In this case output 4b. (backward).

So to summarize, if the result is -a where a is an integer, output ab.

For the input outlined above, the output looks like this:

**Case 2: There are no winners**

If there are no winners, there will be only two lines of output. One containing the maximum distance, the other the minimum distance.

```
1 7
4 5
7
4b
```
**Explanation**

The first three strings of input are the instructions for player 1.

He starts at position 0. After following the sequence of instructions, he ends up 5 steps away from the center. This is a prime number. So he's one of the winners.
If you go through all the players, you also find that player 4 has ended up 7 steps away from the center. This is again a prime number. So he's also one of the winners.

Hence the first two lines of output are 

1 7

4 5

Also, it is clear that the maximum number of steps away a swimmer ends up is 7. And the minimum number of steps is -4 (output as 4b)

**Constraints**

0 < T < 1000

2 <= N < 1000 

2 <= M < 100  

1 <= Length of string S <= 100
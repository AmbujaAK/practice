### Game of Bits

 Yale and Xavier are playing a game with numbers. Each round of the game starts with a number given to them by Zita, Yale's little sister.
The number n is expressed as a binary integer with p bits

For every round, Xavier gets the first move.

The game came consists of moves performed by Yale and Xavier alternately.

The mth move of the game involves performing these operations on the number:

1. **Toggling** the mth bit (numbering of bits starts from left) of the number.

2. Toggling the left adjacent bit of m (if such a bit exists) if it is **equal** to the mth bit **before toggling** in step 1; otherwise keep it as is.

3. Toggling the right adjacent bit of m (if such a bit exists) if it is **equal** to the mth bit **before toggling** in step 1; otherwise keep it as is.

This modification of the number goes on until all p moves are made. If the modified number (as a result of all the operations) is
equal (or a distance one away) from the original number, then the person who made the last move wins the round; otherwise the other one wins the round.


**Note:**

The number given to them is converted to its binary form and represented with the help of minimum number of bits.
The numbering for the bits starts from the leftmost bit.


**Constraints**

1. 1<=r<=10^6

2. 1<=n<=10^6, where n is the number given by Zita in any round

**Input Format**

1. The first line contains a number, **r**, denoting the number of rounds in the game.

2. This is followed by r lines, where the **ith** line contains the number given by Zita for the ith round.

**Output Format**

The output of the problem has r lines, where the ith line contains the winner of ith round as **X** if Xavier wins ith round or **Y** if Yale wins the ith round.

**Sample Input**

```
1
11
```

**Sample Output**

```
Y
```

**Explanation**

11 is represented as 1011 using minimum number of bits in binary.
When Xavier makes the first move, it becomes 0011.
Then Yale makes the 2nd move and it becomes 1111.
After the third move made by Xavier, it becomes 1000.
After the last move by Yale, it becomes 1011 which is 11 in decimal.
The last move was made Yale and the modified number is equal or adjacent to 11,
therefore, Yale wins this round.

Given a string of finite length of distinct lowercase English letters, find out all possible character combinations in the string and output them in sorted order.
Note that we are asking for combinations, not permutations. 

**Also note that first, for every combination of letters, sort them in alphabetical order, and then once all combinations are formed, output the list in alphabetical order.
For ease of notation, call this procedure two fold sorted order**

THis will become much more clear in the example.
 
##### Examples

Suppose the string is "bac".

All possible single letter combinations are a, b and c

All two letter combinations are ab, ac and bc. **NOTE: ab and ba are considered to be the same combination. But due to the note above,
ab is to be the output**

Only one three letter combination: abc (Again bac, cab, abc etc. are considered to be one and the same; but the output should be abc)

The expected output would be all the combinations in two fold sorted order as defined above:

a, ab, abc, ac, b, bc and c.

**Input Format**

The first line of input consists of an integer t. This is the number of test cases.

The next line t lines contains a string of distinct lowercase English alphabets.

**Output Format**

For each test case, all the possible combinaions of the given string in two fold sorted order where two fold sorted order is defined above.

**Constraints**

0 < t < 200 (This is the number of test cases.)

0 < l <= 26	(This is the length of string.)

##### Sample input:
```
3
bac
dbca
xy
```

##### Sample Output:
```
a ab abc ac b bc c
a ab abc abcd abd ac acd ad b bc bcd bd c cd d
x xy y
```
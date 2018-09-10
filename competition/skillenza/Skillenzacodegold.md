This is a twist on the classic pyramid with stars. Instead of using asterisk `*` you have to use the word 'skillenza' repeatedly. Given the height of a pyramid and a direction, print it in the following fashion.

For height 3 and direction upwards

```
  s
 lik
lenza
```

For height 8 and direction downwards

```
skillenzaskille
 saznelliksazn
  killenzaski
   iksaznell
    llenzas
     ellik
      nza
       s
```

Read from STDIN and write to STDOUT. This is a CodeGolf contest where shorter source awards higher score. It is calculated by the following formula;

`(1 - size/2500)*100`

For eg. if the size of your program is 500 characters and it passed all the test cases. You'll get `(1 - 500/2500)*100` i.e. 80. Note that a limit of 2500 characters.

**Input Format**

The first line of input contains an integer **'t'** which is the number of test cases. Then **`t`** test cases follow.

Each test case contains two space separated tokens. The first is **`h`** which is the height of the pyramid. The next token is either a **`u`** for upper direction and **`d`** for the downward direction.

**Output Format**

For each test case, print a pyramid as explained above.

**Constraints**

1 <= t <= 64 (number of test cases)

1 <= h <= 32 (height of pyramid)

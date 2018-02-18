# To print desing a diamond.
print('Enter the size of diamond :')
n = int(input())
a = '*'
# for-loop for upper shape.
for i in range(n):
    print((a * i).rjust(n-1) + a + (a * i).ljust(n-1))

# for-loop for lower shape.
for i in range(n):
    print((a * (n-i-1)).rjust(n-1) + a + (a * (n-i-1)).ljust(n-1) )

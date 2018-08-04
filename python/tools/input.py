# take input in a line e.g.   3 4 5
a,b,c = input().split()
print("a : ",a,"\nb : ",b,"\nc : ",c,end='\n')

# take input in array
list1 = list(map(int ,input().split()))
print(list1,end='\n')

list2 = [int(item) for item in input().split()]
print(list2,end='\n')
n = int(input())
game = [False for i in range(n+1)]
game[0:10] = [False,False,True,True,False,True,True,False,False,False,True]

for i in range(11,n+1,1):
    game[i]=not(game[i-2] and game[i-3] and game[i-5])

if(game[n]):
    print('Alice')
else:
    print('Bob')

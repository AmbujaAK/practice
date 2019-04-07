# sort in lexo
def sortLexo(rough):
    words = rough.split(" ")
    words.sort()
    
    res = ""
    for i in words:
        if i not in res:
            res += i + " "

    coll = res.split(" ")
    coll.reverse()
    coll = coll[1:]

    res = ""
    for item in coll:
        res += item + " "
    
    print(res)

# check is the item have top
def isTop(word):
    if len(word) < 3:
        return False
    if word[:3] == "top":
        return True
    else:
        return False

def makeDict(words):
    words = words.split()
    dict = {}

    for word in words:
        if word not in dict:
            dict[word] = 0
        dict[word] += 1
    return [pair[0] for pair in sorted(dict.items(), key=lambda item: item[1])]
    
def printArr(arr):
    for item in arr:
        print(isTop(item))

t = int(input())

while t > 0:
    n = int(input())
    arr = []
    for i in range(n):
        arr.append(input())
    
    fresh = ""
    dic = {}
    for item in arr:
        if isTop(item):
            topItem = str(item)
            x = int(topItem[len(topItem)-1])
            
        else:
            fresh += str(item) + " "
    lst = makeDict(fresh)
    res = ""
    for i in lst:
        res += i + " "
    print(res)
    t -= 1
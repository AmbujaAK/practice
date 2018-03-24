def display(l,r):
    list1 = []
    for item in range(l,r+1,2) :
        list1.append(item)
    return list1

if __name__ == '__main__':
    print('Enter the left value :')
    l = int(input())
    print('Enter the right value :')
    r = int(input())

    if l % 2 == 0 :
        l = l + 1
        print(display(l,r))
    else :
        print(display(l,r))

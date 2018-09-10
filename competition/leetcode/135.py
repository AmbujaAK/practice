# candy
def candy(ratings) :
    candies = [1 for i in range(len(ratings))]
    for i in range(1,len(ratings)) :
        if ratings[i] > ratings[i-1]:
            candies[i] = candies[i-1] + 1
        for i in reversed(range(1,len(ratings))):
            if ratings[i-1] > ratings[i] and candies[i-1] <= candies[i] :
                candies[i-1] = candies[i] + 1
    return sum(candies)


if __name__ == '__main__':
    print("Enter the list : ")
    arr = [int(item) for item in input().split()]
    ans = candy(arr)
    print(ans)

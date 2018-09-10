def convert_into_binary(num):
    bin = format(num,'b')
    s_bin = str(bin)
    a = s_bin.replace('1','2')
    b = a.replace('0','1')
    c = b.replace('2','0')

    ans = int(c,2)
    return ans

print("Enter any number : ")
num = int(input())
res = convert_into_binary(num)
print(res)

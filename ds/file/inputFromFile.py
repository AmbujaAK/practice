def main() :
    f = open('textFile/input.txt')
    line = f.readlines()
    for i in line :
        print(i)

if __name__ == '__main__':
    main()

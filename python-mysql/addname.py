import MySQLdb

db = MySQLdb.connect('localhost','root','','clg')

cur = db.cursor()

def showList():
    cur.execute('select * from student')
    data = cur.fetchall()
    print('Showing namelist from database :')
    for i in data:
        print(i[1])

def newname():
    print('Enter the name :')
    name = input()
    with db:
        sql = "INSERT INTO student(name)\
                VALUES('%s')" % \
                (name)
        cur.execute(sql)
ch = 1
while ch == 1 :
    print('\nWant to add name ?')
    print('press 1: Yes\npress 2: No')
    ch = int(input())
    if ch == 2 :
        break
    newname()
    showList()

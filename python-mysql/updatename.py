import MySQLdb
# connecting database
db = MySQLdb.connect('localhost','root','','clg')

# defining cursor
cur = db.cursor()

# defining update function
def update():
    with db:
        r = int(input())
        name = input()
        sql = "UPDATE student\
                SET name ='%s'\
                WHERE roll = %d" % (name,r)
        cur.execute(sql)

def showlist():
    cur.execute('select * from student')
    data = cur.fetchall()
    print('Showing namelist from database :')
    for i in data:
        print(i[1])

showlist()
update()
showlist()

db.close()

import MySQLdb
db = MySQLdb.connect('localhost','root','','clg')

# define a cursor
cur = db.cursor()

def delete():
    with db:
        d = int(input())
        sql = "DELETE FROM student\
                WHERE roll = %d "%\
                (d)
        cur.execute(sql)

def showlist():
    cur.execute('select * from student')
    data = cur.fetchall()
    print('Showing namelist from database :')
    for i in data:
        print(i[1])
showlist()
delete()
showlist()

db.close()

import MySQLdb
db = MySQLdb.connect('localhost','root','','clg')
cur = db.cursor()

def clear():
    with db:
        sql = "DROP TABLE student"
        cur.execute(sql)

clear()

db.close()

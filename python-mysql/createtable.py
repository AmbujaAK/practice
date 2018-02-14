import MySQLdb
db = MySQLdb.connect('localhost','root','','clg')
cur = db.cursor()

def create(table_name):
    with db:
        cur.execute("DROP TABLE  %s;" % (table_name))
        sql = "CREATE TABLE IF NOT EXISTS %s (\
	        Roll int(11) NOT NULL AUTO_INCREMENT PRIMARY KEY,\
	        Name varchar(30) NOT NULL);" % (table_name)
        
        cur.execute(sql)

print('Enter your table name :')
table_name = input()

create(table_name)

db.close()

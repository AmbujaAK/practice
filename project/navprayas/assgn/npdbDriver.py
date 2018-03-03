import MySQLdb

db=MySQLdb.connect('localhost','root','','npdb')

cur=db.cursor()

cur.execute('select * from myfirsttable')
data = cur.fetchall()

print("showing names in database.......")

for i in data:
	print(i[1])
print("inserting ambuj in table")

cur.execute('insert into myfirsttable values(5,"Ambuj kumar",7)')
print("showing updated names in database.......")

cur.execute('select * from myfirsttable')
data = cur.fetchall()
for i in data:
	print(i[1])

print("Done")

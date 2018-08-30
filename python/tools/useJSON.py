import json

# json.load()
json_file = open("file.json", 'r', encoding='utf-8')
bio_data = json.load(json_file)
json_file.close()

print (bio_data)

# json.loads()

table = """ {
    "name " : "Ambuja",
    "collage" : "Jadavpur University"
}"""

tron = json.loads(table)

print (tron)

print(json.dumps(tron))

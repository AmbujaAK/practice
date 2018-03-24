def cal(dis):
	res = 0
	while dis > 0:
		res = res + dis
		dis -= 2
	return res

print(cal(7))
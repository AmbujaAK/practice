# your code goes here
def EMI(P,T,I) :
	return float(P * I//(1.0 - 1.0//(1+I)**(T*12)))
	
def EM(P,T):
	return float(P//(T*12))

# float I
# int P,T,N1,N2
def main():
	P,T,N1 = int(input()),int(input()),int(input())
	sum1,extra = 0,0

	for i in range(N1):
		slab,I = int(input()),float(input())
		emi = EMI(P + 12*extra,T,I)
		extra += emi - EM(P,T)
		sum1 += slab*emi

	N2 = int(input())

	sum2,extra = 0,0
	for i in range(N2):
		slab,I = int(input()),float(input())
		emi = EMI(P + 12*extra,T,I)
		extra += emi - EM(P,T)
		sum2 += slab*emi

	if sum1 > sum2 :
		print("Bank B")
	else :
		print("Bank A")

if __name__ == '__main__':
	main()
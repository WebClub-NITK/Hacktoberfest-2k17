def primes(n):
	p=[True for i in range(n)]
	x=int(n**(1/2))
	for i in range(2,x+1):
		if p[i] is True:
			j=i*i
			k=1
			while j < n:
				p[j]=False
				j=i*i+k*i
				k=k+1

	for i in range(2,n):
		if p[i] is True:
			print(i)

def main():
	n=int(input("Enter n "));
	primes(n)


if __name__=='__main__':
	main()

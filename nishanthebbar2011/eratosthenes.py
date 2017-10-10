#Sieve of eratosthenes
n=int(input("Please Enter the positive number up till which you want the prime numbers to be printed"))
arr=[]
for i in range(n+1):
    arr.append(int(i))

for i in range(2,int(n**(0.5))):
    if arr[i] != -1:
        k=2*i
        while k<=n:
            arr[k]=-1
            k+=i

for i in arr:
    if i != -1:
        print(i)


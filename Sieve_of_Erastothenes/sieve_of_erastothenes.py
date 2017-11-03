def SieveOfEratosthenes(n):
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p * 2, n+1, p):
                prime[i] = False
        p +=1
        for p in range(2, n):
            if prime[p]:
                print p,

# driver program
def main():
    n = input("Enter the limitting number")
    print "Following are the prime numbers smaller",
    print "than or equal to", n
    SieveOfEratosthenes(n)

main()

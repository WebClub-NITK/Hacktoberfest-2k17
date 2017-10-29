def hanoi(n , a, b, x):
    if n == 1:
        print ("Move disk 1 from rod",a,"to rod",b)
        return
    hanoi(n-1, a, x, b)
    print ("Move disk",n,"from rod",a,"to rod",b)
    hanoi(n-1, x, b, a)

def main():
	n=int(input("Enter n:"))	
	hanoi(n,"1","2","3")
	
if __name__ == '__main__':
	main()
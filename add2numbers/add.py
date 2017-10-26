# Python Program - Add Two Numbers
while True:
	print("Enter '0' for exit.")
	print("Enter two numbers: ")
	val1 = int(input())
	val2 = int(input())
	if val1 == 0:
		break
	else:
		sum = val1 + val2
		print("Sum of the given two number:",sum,"\n")

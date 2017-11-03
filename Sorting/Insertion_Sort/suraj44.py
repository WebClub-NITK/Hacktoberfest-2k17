def insertion(L):
	for i in range(1,len(L)):
		tmp = int(L[i])
		j = i
		while(j>0 and int(L[j-1]) > tmp):
			
			L[j]= int(L[j-1])
			j-=1
		L[j] = tmp

	return L


print "Enter a list to be sorted"
L = list(eval((raw_input(""))))
print "The sorted list is ", insertion(L)
print "\n"


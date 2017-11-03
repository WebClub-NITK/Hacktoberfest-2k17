#Taking input from user
a = input('Please enter value for a = ')
b = input('Please enter value for b = ')

#Bitwise operation
c = int(a)&int(b)
d = int(a)|int(b)
e = int(a)^int(b)
f = int(a)>>int(b)
g = int(a)<<int(b)

#Printing the Output
print("a&b = ",c)
print("a|b = ",d)
print("a^b = ",e)
print("a>>b = ",f)
print("a<<b = ",g)

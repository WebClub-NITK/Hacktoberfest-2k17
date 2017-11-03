def fac(number):
  fact=1
  while number>0 :
   fact=fact*number
   number=number-1
  return fact

n=int(input("Enter number"))
f=fac(n)
print("THE FACTORIAL OF THAT NUMBER IS",f)
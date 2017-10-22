print("enter the two number")
n1,n2=map(int,input().split())
print("press + for add")
print("press - for subb")
print("press * for mul")
print("press / for div")
e=input()
if e == "+":
    print(n1+n2)
elif e == "-":
    print(n1-n2)
elif e == "*":
    print(n1*n2)
elif e == "/":
    print(n1/n2)
else:
    print("you entered wrong key")

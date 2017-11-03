arr=[]
n=int(input("Please enter the number of elements and then the actual elements themselves!"))
for i in range(n):
    x=int(input())
    arr.append(x)

for i in range(n-1):
    for j in range(0,n-i-1):
        if arr[j]>arr[j+1]:
            arr[j],arr[j+1]=arr[j+1],arr[j]


print("The sorted arr is",arr)

    

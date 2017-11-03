
def bubble_sort(a):
    len_a = len(a)
    
    for i in range(len_a):
        
        for j in range(0,len_a-i-1):
            
            if a[j] > a[j+1]:
                
                temp = a[j]
                a[j]=a[j+1]
                a[j+1]=temp
    
    
print("Enter array elements,seperated by space")
arr = [int(x) for x in input().split()]
print("Original array:"+str(arr))
bubble_sort(arr)
print("Sorted array:")
for k in range(len(arr)):
    print("{}  ".format(arr[k]))
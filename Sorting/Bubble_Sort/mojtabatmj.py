def bubbleSort(K):
    for passnum in range(len(K)-1,0,-1):
        for i in range(passnum):
            if K[i]>K[i+1]:
                temp = K[i]
                K[i] = K[i+1]
                K[i+1] = temp

A = [9,99,88,55,2,3,64,7,125,44]
bubbleSort(A)
print(A)

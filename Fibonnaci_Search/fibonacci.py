F = [0,1,1,2,3,5,8]
ListElements = sorted([83,24,65,123,175,57,123,243])
X = 243

p = len(F)
k = F[p-1]

if(k == 0):
    print("K = 0")
else:
    while(True):
        print("test1")
        if(X == ListElements[F[p-2]]):
            print(str(X) + " " + str(p) + " " + str(k))
            break
        elif(X < ListElements[F[p-2]]):
            print("test2")
            p -= 1
            k = F[p-1]
        elif(X > ListElements[F[p-2]]):
            print("test3")
            p -= 2
            k = F[p-1]

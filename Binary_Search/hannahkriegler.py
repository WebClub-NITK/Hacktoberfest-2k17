def main(array, target):
    l = 0
    r = len(array)-1
    binary_search(array,target,l,r)


def binary_search(array,target,low,high):
    if high < low :
        print("search was unsuccesful")
        return
    mid = (low + high) // 2
    if array[mid] > target:
        binary_search(array,target,low,mid-1)
    elif array[mid] < target:
            binary_search(array,target,mid+1,high)
    else :
        print("index of target is " + str(mid))


main([1,3,4,6,7,8,12],12)
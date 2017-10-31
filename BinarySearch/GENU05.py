
size = int(input('Insert size of array:')) # size of random array
array = []
for i in range(size):
    n=int(input('Insert Number:'))
    array.append(n)
anum = int(input('Insert Number to search:'))                   # number to search for

# array = random.sample(list(range(1, 20)), size)  # get some random numbers
array = sorted(array)       # sorted() returns a new list
#array.sort()               # sort() sorts in-place
print(anum, array)          # show us what you've got

#    Search for number in array
def binary_search(number, array, lo, hi):

    if hi < lo: return -1       # no more numbers
    mid = (lo + hi) // 2        # midpoint in array
    if number == array[mid]:
        return mid                  # number found here
    elif number < array[mid]:
        return binary_search(number, array, lo, mid - 1)     # try left of here
    else:
        return binary_search(number, array, mid + 1, hi)     # try above here

def my_search(anum, array):     # convenience interface to binary_search()
    return binary_search(anum, array, 0, len(array) - 1)

pos = my_search(anum, array)
if pos < 0:
    print("not found")
else:
    print("found at position", pos)

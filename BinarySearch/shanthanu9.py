def binary_search(a, s):
  beg = 0
  end = len(a) - 1
  while(end>=beg):
    mid = (beg + end) // 2
    if (a[mid] == s):
      return mid
    elif (a[mid] > s):
      end = mid - 1
    else:
      beg = mid + 1
  return None


print("Enter the elements in a sorted order:",end = ' ')
a = [int(i) for i in input().strip().split()]
print("Enter search element: ",end = '')
s = int(input())

c = binary_search(a,s)

if c == None:
  print(s,"is not found.")
else:
  print(s, 'is found at position', c)

'''
the problem was to find largest palindrome number which is a product of 2 3-digit numbers
'''
'''
Instead of checking product of every 3-digit, palindrome numbers are checked whether they have 3-digit factors.
One factor will lie in [99, sq_root) and other in [sq_root, 1000).
So whichever interval is smaller that is checked in descending order, since we have to find the largest palindrome.
'''
import math

def palindrome(a, b, c):
    n = a + 10 * b + 100 * c + 1000 * c + 10000 * b + 100000 * a
    return n

n = palindrome(9, 9, 9)
n_root = int(math.floor(math.sqrt(n)))
flag = 0 if n_root < 500 else 1

if flag:
    a = 100
    b = n_root
    l = range(n_root, 99, -1)
else:
    l = range(n_root, 1000)

for j in range(900):
    x = '%03d' % j
    n = palindrome(9 - int(x[0]), 9 - int(x[1]), 9 - int(x[2]))
    for i in l:
        if n % i == 0 and n // i < 1000:
            print(n)
            exit()

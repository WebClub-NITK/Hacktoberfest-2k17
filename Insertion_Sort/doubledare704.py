import random


def insertion_sort(lst):
    for index in range(1, len(lst)):

        currentvalue = lst[index]
        position = index

        while position > 0 and lst[position - 1] > currentvalue:
            lst[position] = lst[position - 1]
            position = position - 1

        lst[position] = currentvalue


my_randoms = random.sample(xrange(100), 33)
insertion_sort(my_randoms)
print(my_randoms)

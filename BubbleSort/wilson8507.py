from random import randint, seed
from datetime import datetime

LIST_LENGTH = 10
seed(datetime.now())


def bubble_sort(input_list):
    print('original: ', input_list)
    for i in range(len(input_list)):
        for index, element in enumerate(input_list):
            if index == len(input_list)-1:
                break
            if element > input_list[index+1]:
                temp = element
                input_list[index] = input_list[index+1]
                input_list[index+1] = temp
    print('sorted: ', input_list)


bubble_sort([randint(1, 100) for i in range(LIST_LENGTH)])

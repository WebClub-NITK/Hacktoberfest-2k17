def fibo(num):
    first = 0
    second = 1
    result = [0]
    print('Fibonacci series is')
    for i in range(0,num):
        third = first + second
        #print(second)
        result.append(second)
        first = second
        second = third
    print(result)
    return
fibo(7)
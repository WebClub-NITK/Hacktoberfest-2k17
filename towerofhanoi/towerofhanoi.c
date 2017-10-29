def hanoi(disk, start='START', end='END', middle='MIDDLE'):
    if disk > 0:
        hanoi(disk - 1, start, middle, end)
        print('Move disk %d from %s to %s' % (disk, start, end)) # Move the N disk
        hanoi(disk - 1, middle, end, start)

if __name__ == '__main__':
    hanoi(input('How many disks you wanna play? '))

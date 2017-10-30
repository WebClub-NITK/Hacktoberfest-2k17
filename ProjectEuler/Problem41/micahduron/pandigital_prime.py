#!/usr/bin/env python3

import math
from itertools import permutations

def IsPrime(n):
    """
    This is an implentation of the deterministic form of the Miller-Rabin
    primality test. This algorithm accurately identifies prime numbers
    up to around 10**10. For values of n higher than this it is possible
    for this function to incorrectly identify a prime, though rather unlikely.
    """
    def DecomposeNumber(k):
        """
        Given an even integer k, DecomposeNumber(k) finds values s and d
        such that (2**s) * d == k. The values s and d are essential for
        use in the Miller-Rabin primality test.
        """
        evenExp = 0

        while (k % 2) == 0:
            evenExp += 1
            k = k // 2

        return k, evenExp

    if n == 2:
        return True

    d, s = DecomposeNumber(n - 1)

    # These bases are enough to guarantee this function returns true for all
    # primes up to around 10**10. For larger values, other bases will be required.
    testBases = [2,3,5,7,11]

    for a in testBases:
        if pow(a, d, n) == 1:
            return True

        for r in range(s):
            if pow(a, (2**r) * d, n) == n - 1:
                return True

        return False

def PandigitalPrimes(numDigits):
    def ConstructNumber(digitList):
        result = 0

        for i in range(len(digitList)):
            result += (10**i) * digitList[i]

        return result

    panPrimes = []
    digits = list(range(1, numDigits + 1))

    for p in permutations(digits):
        currNum = ConstructNumber(p)

        if IsPrime(currNum):
            panPrimes.append(currNum)

    return panPrimes

if __name__ == '__main__':
    for i in range(9, 1, -1):
        pPrimes = PandigitalPrimes(i)

        if len(pPrimes) > 0:
            print(max(pPrimes))

            break

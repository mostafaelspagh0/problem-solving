import math


def isPrime(n):
    if (n <= 1):
        return False
    if (n <= 3):
        return True
    if (n % 2 == 0 or n % 3 == 0):
        return False
    i = 5
    while(i * i <= n):
        if (n % i == 0 or n % (i + 2) == 0):
            return False
        i = i + 6
    return True


def isPalindrome(n: int): return str(n) == str(n)[::-1]


def countDivisors(n):
    ret = 0
    for i in range(1, (int)(math.sqrt(n)) + 1):
        if (n % i == 0):
            ret += 1+(n / i != i)
    return ret


def fifth(a):
    x = [countDivisors(n) for n in a]
    t = []
    mC = -1
    for i in range(len(x)):
        if x[i] > mC:
            t = [a[i]]
            mC = x[i]
        elif x[i] == mC:
            t.append(a[i])
    return max(t)


input()
a = list(map(int, input().split()))
print("The maximum number :", max(a))
print("The minimum number :", min(a))
print("The number of prime numbers :", sum([isPrime(n) for n in a]))
print("The number of palindrome numbers :", sum([isPalindrome(n) for n in a]))
print("The number that has the maximum number of divisors :", fifth(a))

n, m = map(int, input().split())
print("\n".join([" ".join(input().split()[::-1]) for i in range(n)]))
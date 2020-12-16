n , r = map(int,input().split())
s = [int(i) for k in [input().split() for m in range(n)] for i in k]
print("will not take number" if int(input()) in s else "will take number")
n , k = map(int,input().split())
ans = 0
for i in range(1,n+1):
    t = input()
    if len(t) > k: 
        tt = [False for i in range(12)]
        for j in t:
            tt[int(j)] = True 
        for j in range(0,k+1):
            if tt[j] == False:
                break
        else:
            ans += 1
print(ans)
n = int(input())
for i in range(n):
    x = input()
    print("Good" if '010' in x or '101' in x else "Bad")

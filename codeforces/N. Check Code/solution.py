a, b = map(int, input().split())
s = input()
if(s[a] == '-' and all([ord('0') <= ord(i) <= ord('9') for i in s[0:a]]) and all([ord('0') <= ord(i) <= ord('9') for i in s[a+1:]])):
    print("Yes")
else:
    print("No")
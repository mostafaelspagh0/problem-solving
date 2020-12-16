s = input().split("=")
print("Yes" if str(eval(s[0])) == s[1].strip() else eval(s[0]))
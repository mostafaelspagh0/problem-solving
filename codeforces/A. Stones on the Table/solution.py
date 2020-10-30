int1 = int(input())
str1 = input()
answer = 0
for i in range(len(str1)):
    try:
        if str1[i] == str1[i+1]:
            answer += 1
    except IndexError:
        continue
print(answer)
str1 = input().lower()
str2 = input().lower()
answer = 0
i = 0
while(i < len(str1) and str1[i] == str2[i]):
    i += 1
if(i < len(str1)):
    if ord(str1[i]) > ord(str2[i]):
        answer = 1      
    elif str1[i] != str2[i]:
        answer = -1
print(answer)

str1 = input().replace('+', '')
ones = []
twos = []
threes = []
answer = ''
for i in str1:
    if i == '1':
        ones.append(i)
    elif i == '2':
        twos.append(i)
    else:
        threes.append(i)
for i in range(len(ones)):
    answer += '1+'
for i in range(len(twos)):
    answer += '2+'
for i in range(len(threes)):
    answer += '3+'
print(answer[:-1])

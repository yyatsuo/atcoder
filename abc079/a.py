s=input()
print('Yes' if s[0:3].count(s[0]) == 3 or s[1:4].count(s[1]) == 3 else 'No')

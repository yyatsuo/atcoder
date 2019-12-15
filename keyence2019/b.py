key = "keyence"
s = input()
for i in range(len(key)):
  if s[i] != key[i]:
    break
if s[len(s)-(len(key)-i):] == key[i:]:
  print("YES")
else:
  print("NO")

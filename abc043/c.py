N = int(input())
A = list(map(int, input().split()))
d = round(sum(A)/N)
ans = 0
for i in A:
    ans = ans + (i-d)**2
print(ans)

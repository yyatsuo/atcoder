#!/usr/bin/env python
N = int(input())
a = list(map(int, input().split()))
colors = [0]*9
for i in a:
    idx = i//400
    if(idx > 8):
        idx = 8
    colors[idx] += 1
ans = 0
for i in colors[0:8]:
    if i != 0:
        ans += 1
if ans == 0:
    print(1, colors[8])
else:
    print(ans, ans+colors[8])

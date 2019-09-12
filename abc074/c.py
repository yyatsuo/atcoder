#!/usr/bin/env python
import bisect

a,b,c,d,e,f = map(int, input().split())

water = set()
for i in range(31):
    for j in range(31):
        w = i*a + j*b
        if w <= f//100:
            water.add(w)
water = sorted(water)

suger = set()
for i in range(1501):
    j = 0
    while i*c + j*d <= 1500:
        suger.add(i*c+j*d)
        j += 1
suger = sorted(suger)

ans = []
for w in water:
    sid = bisect.bisect_right(suger, w*e) - 1
    while suger[sid] + w*100 > f and sid > 0:
        sid -= 1
    if w != 0:
        total = w*100 + suger[sid]
        ans.append([suger[sid]/total, total, suger[sid]])
ans.sort(key=lambda x:x[0])
print(ans[-1][1], ans[-1][2])

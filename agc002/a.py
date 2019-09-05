#!/usr/bin/env python

a,b = map(int, input().split())

if a <= 0 <= b :
    print('Zero')
elif 0 < a:
    print('Positive')
else:
    if (b-a)%2 == 0:
        print('Negative')
    else:
        print('Positive')

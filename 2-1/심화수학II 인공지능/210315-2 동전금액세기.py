'''
동전: 이 돈으로 만들 수 있는 경우의 수
500원 1개
100원 5개
50원 10개
10원 100개

합집합: A&B, 공집합: A|B
'''

from itertools import *
import numpy as np

ans = []
for i in range(0, 501, 500):
    for j in range(0, 501, 100):
        for k in range(0, 5001, 50):
            for l in range(0, 1001, 10):
                temp=i+j+k+l
                if temp not in ans:
                    ans.append(temp)
ans.sort()
ans.remove(0)

print(len(ans))
print(ans)

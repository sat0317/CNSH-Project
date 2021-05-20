'''
27. 다음 조건을 만족시키는  이상의 자연수 a b c d의
모든 순서쌍 a b c d의 개수를 구하시오.
'''

from itertools import *
a=[]
for i in range(2, 21):
    for j in range(2, 21):
        for k in range(2, 21):
            for d in range(2, 21):
                if i%d==0 and j%d==0 and k%d==0:
                    if i+j+k+d==20:
                        a.append((i, j, k, d))

print(len(a))

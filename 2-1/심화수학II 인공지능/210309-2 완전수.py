'''
완전수: 양의 약수를 다 더한 값이 자신이 되는 수
1~10000 약수 찾기 (quest)
'''

from itertools import *
from math import *

ans=[]

for i in range(2, 10000):
    sum=0

    for j in range(1, int(sqrt(i))+1):
        if i%j==0 :
            sum+=j
            if (i//j != j) & (i//j != i):
                sum+=i//j
    if i==sum:
        ans.append(i)

for i in range(len(ans)):
    print(ans[i])

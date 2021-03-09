'''
완전수: 양의 약수를 다 더한 값이 자신이 되는 수
1~10000 약수 찾기 (quest)
'''

from itertools import *

ans=[]

for i in range(2, 10000):
    sum=0

    for j in range(1, i-1):
        if i%j==0 :
            sum+=j
    if i==sum:
        ans.append(i)
print(ans)

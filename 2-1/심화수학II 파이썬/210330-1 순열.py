'''
문자 A , B, C, D , E가 하나씩 적혀 있는 장의 카드와
숫자  ,  ,  , 가 하나씩 적혀 있는 장의 카드가 있다.
이 장의 카드를 모두 한 번씩 사용하여 일렬로 임의로 나열할 때,
문자 A 가 적혀 있는 카드의 바로 양옆에 각각 숫자가 적혀 있는
카드가 놓일 확률은?
'''

from itertools import *
from fractions import Fraction as frac
total = ['A', 'B', 'C', 'D', 'E', 1, 2, 3, 4]
A = list(permutations(total))
print(len(A))
ans = []
for i in A:
    a  = i.index('A')
    if a!=0 and a!=8:
        if type(i[a-1])==int and type(i[a+1])==int:
            ans.append(i)
print(len(ans))
print(frac(len(ans), len(A)))
#print(ans)


'''
27. 조건부확률
조건부확률: A 사건이 일어났을 때 그 안에서 B사건이 일어날 확률
n(A|B) == n(A∩B) / n(A)

주머니에 숫자  ,  ,  , 가 하나씩 적혀 있는 흰 공 개와
숫자  ,  ,  , 이 하나씩 적혀 있는 검은 공 개가 들어 있다.
이 주머니에서 임의로 개의 공을 동시에 꺼내는 시행을 한다.
이 시행에서 꺼낸 공에 적혀 있는 수가 같은 것이 있을 때,
꺼낸 공 중 검은 공이 개일 확률은 q/p이다. pq 의 값을
구하시오. (단, p와 q는 서로소인 자연수이다.)

1, 2, 3, 4와 3, 4, 5, 6에서
6C2+6C2 - 1((3,3), (4,4))
검1 흰1 9가지 - 1 = 17
'''

from itertools import *
from fractions import Fraction as frac

A = ['w1', 'w2', 'w3', 'w4', 'b3', 'b4', 'b5', 'b6']
B = list(combinations(A, 4))

print(len(B))
'''
print(A.count(3)) #집합에서 찾음
E = ''.join(A)
print(E.count('3')) #문자열에서 찾음
'''

C=[''.join(i) for i in B]
#print(C)

D = []
for i in C:
    if i.count('3') == 2 or i.count('4') == 2:
        D.append(i)
print(len(D))
print(D)

E = []
for i in D:
    if i.count('b') == 2:
        E.append(i)
print(len(E))
print(frac(len(E), len(D)))
print(E)

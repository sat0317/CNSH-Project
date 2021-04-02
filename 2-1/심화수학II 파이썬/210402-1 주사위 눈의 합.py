'''
숫자  ,  ,  ,  , 가 하나씩 적힌 개의 공이 들어 있는
주머니가 있다. 이 주머니와 한 개의 주사위를 사용하여
다음 규칙에 따라 점수를 얻는 시행을 한다.
---
주머니에서 임의로 한 개의 공을 꺼내어
꺼낸 공에 적힌 수가 이면 주사위를 번 던져서 나오는
세 눈의 수의 합을 점수로 하고,
꺼낸 공에 적힌 수가 이면 주사위를 번 던져서 나오는
네 눈의 수의 합을 점수로 한다.
---
이 시행을 한 번 하여 얻은 점수가 점일 확률은?

x+y+z = 10
음이 아닌 정수로 만들기; x`+y`+z`=10-3 (x`, y`, z` = x-1, y-1, z-1)
따라서 3H7
각 숫자가 7보다 크거나 같은 경우 빼기 -> x, y, z>=7 인 경우들 각각 3H1
포함 배제로 계산!!

6^3으로 나눈 값을 k라고 할 때
3점이 나올 확률: p=2/5
p*k = ans
'''

from itertools import *
from fractions import Fraction as frac

A = [3, 3, 4, 4, 4]
print(frac(A.count(3), len(A)))
print(frac(A.count(4), len(A)))

B=[]
C=[]
D=list(product(range(1, 7), repeat=3))
for i in D:
    if sum(i) == 10:
        B.append(i)
E=list(product(range(1, 7), repeat=4))
for i in E:
    if sum(i) == 10:
        C.append(i)
print(len(B), len(C), sep=', ')
print(frac(len(B), len(D)))
print(frac(len(C), len(E)))

print(frac(A.count(3), len(A))*frac(len(B), len(D))+frac(A.count(4), len(A))
*frac(len(C), len(E)))

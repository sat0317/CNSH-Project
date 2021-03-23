'''
두 집합 A     , B    에 대하여 A 에서
B로의 모든 함수 f 중에서 임의로 하나를 선택할 때,
이 함수가 다음 조건을 만족시킬 확률은?
- f≥이거나 함수 f 의 치역은 B이다.

함수의 개수
1. 함수~~: 치^정
2. 1대1 함수 (단사함수): nPr
3. 1대1 대응: n!
4. 순증가함수: a<b -> f(a)<=f(b), 조합 nCr
5. 증가함수: a<b -> f(a)<f(b), 중복조합 nHr
6. 전사함수 (치역과 공역이 같은 함수): 포함 배제의 원리, 분할분배
    포함 배제의 원리: n(A∪B) = n(A)+n(B)-n(A∩B)
    1, 2, 3 // 1, 2 : 2^3 - 2
    1, 2, 3, 4 // 1, 2, 3 : 3^4 - 3 * (2^4 - 2) - 3
    분할->분배

위의 문제에서..
    2*3^3 + 3^4 - 3(2^4-2) - 3
    (2^3-2)*2
'''

from itertools import *
from fractions import Fraction as frac

A = [1, 2, 3]
allCase = list(product(A, repeat = 4))
print(len(allCase))

C = []
for i in allCase:
    if i[0] >= 2 or len(set(i)) == 3:
        C.append(i)
        
print(len(C))
print(frac(len(C), len(allCase)))
print(C)

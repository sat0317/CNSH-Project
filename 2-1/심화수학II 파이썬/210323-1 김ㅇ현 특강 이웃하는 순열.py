'''
문법 정리 - 김*현 특강

import: 원하는 걸 임포트 할 수 있음
import itertools: itertools를 쓸 수 있음
import itertools as it: itertools를 it으로 대신하여 쓸 수 있음
from itertools import permutations: itertools.permutation만 가져오기
from itertools import permutations as p: itertools.permutation를 p로 사용

이웃하는 순열 - 김*현 특강

숫자 1~7을 조건에 맞춰 배열
- 4 옆에는 4보다 큰 수가 적힌 카드
- 5 옆에는 5보다 작은 수가 적힌 카드
'''

from itertools import permutations as p
from fractions import Fraction as f

card = [1, 2, 3, 4, 5, 6, 7]
allCase = list(p(card)) #모든 경우수가 나열됨
case = []

for i in allCase:
    index4 = i.index(4)
    index5 = i.index(5)

    if 1 <= index4 <= 5 and 1 <= index5 <= 5:
        if i[index4-1] > 4 and i[index4+1] > 4 and i[index5-1] < 5 and i[index5+1] < 5:
            case.append(i)

print(len(case))
print(f(len(case), len(allCase)))
print(case)

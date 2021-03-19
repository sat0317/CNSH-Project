'''
2021학년도 6월 모평 수학 가형 13번 문제
주사위 2개 값: a, b
|a-3| + |b-3| == 2 or a == b 일 확률
'''
from fractions import Fraction as frac
from itertools import *

dice = [1, 2, 3, 4, 5, 6]
al = list(product(dice, dice))
an = [i for i in al if (abs(i[0]-3)+abs(i[1]-3) == 2) or (i[0]==i[1])]
print(len(an), ":", an)
print("Answer :", frac(len(an), len(al)))

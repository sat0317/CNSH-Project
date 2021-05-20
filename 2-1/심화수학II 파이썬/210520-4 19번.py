'''
한 개의 주사위를 세 번 던질 때 나오는 수를 차례대로 a, b, c라 하자.
세 수 a, b, c가 a<b-2<=c를 만족시킬 확률을 구하여라
'''

from itertools import *
from fractions import Fraction as frac

a=list(product(list(range(1, 7)), repeat=3))

b=[i for i in a if i[0]<i[1]-2<=i[2]]

print(frac(len(b), len(a)))

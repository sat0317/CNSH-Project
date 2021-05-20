from itertools import *
from fractions import Fraction as frac
'''15. 주머니에  ,  ,  ,  , 의 숫자가 하나씩 적혀 있는
개의 공이 들어 있다. 이 주머니에서 임의로 개의 공을
동시에 꺼내어 임의로 일렬로 나열하고, 나열된 순서대로 공에
적혀 있는 수를 a, b , c , d라 할 때, a≤b≤c≤d일 확률은? '''

a=[1, 1, 2, 3, 4]
t=set(list(permutations(a, 4)))
p=[i for i in t if i[0]<=i[1]<=i[2]<=i[3]]
print(frac(len(p), len(t)))

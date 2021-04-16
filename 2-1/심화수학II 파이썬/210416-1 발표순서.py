'''
어느 고등학교에는 개의 과학 동아리와 개의 수학 동아리
A , B가 있다. 동아리 학술 발표회에서 이 개 동아리가 모두
발표하도록 발표 순서를 임의로 정할 때, 수학 동아리 A 가 수학
동아리 B보다 먼저 발표하는 순서로 정해지거나 두 수학 동아리의
발표 사이에는 개의 과학 동아리만이 발표하는 순서로 정해질
확률은? (단, 발표는 한 동아리씩 하고, 각 동아리는 회만
발표한다.)

A>B : 7!/2!으로 하면 안 됨
B__A로 해서 사이에 2개 뽑아 들어가는 걸로 계산!
5C2 * 2! * 2! * 4! + 5C2 * 2! * 4!
'''

from itertools import *
from fractions import Fraction as frac

dong = ['m1', 'm2', 's1', 's2', 's3', 's4', 's5']
did = list(permutations(dong, 7))
ans = []
for i in did:
    if (i.index('m1')<i.index('m2') or abs(i.index('m1')-i.index('m2')) == 3):
        ans.append(i)

print(len(ans))
print(frac(len(ans), len(did)))
print(ans)

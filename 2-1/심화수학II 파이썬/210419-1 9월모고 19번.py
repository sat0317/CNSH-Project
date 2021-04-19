'''
집합      의 공집합이 아닌 모든 부분집합 개
중에서 임의로 서로 다른 세 부분집합을 뽑아 임의로 일렬로
나열하고, 나열된 순서대로  ,  ,  라 할 때,  ⊂ ⊂ 일
확률은?
'''

from itertools import *
from fractions import Fraction as frac
X = [1, 2, 3, 4]
li=[]
for i in range(1, 5):
    li.extend(list(combinations(X, i)))
allcase = list(permutations(li, 3))
ans = []
for A in li:#초안
    tempA=[]
    if len(A)<2:
        continue
    for i in range(2, len(A)):
        tempA.extend(list(combinations(X, i)))
    for B in tempA:
        tempB=[]
        for i in range(1, len(B)):
            tempB.extend(list(combinations(X, i)))
        for C in tempB:
            ans.append((C, B, A))
print(len(ans))
print(ans)
print(len(allcase))
print(frac(len(ans), len(allcase)))

ans=[]
for A in li:#2안 : Correct Answer
    for B in li:
        for C in li:
            if (all(i in A for i in B) and all(i in B for i in C) and all(i in A for i in C) and A!=B and B!=C and C!=A):
                ans.append((C, B, A))
print(len(ans))
print(ans)
print(len(allcase))
print(frac(len(ans), len(allcase)))

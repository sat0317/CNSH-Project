'''
수 numpy
그래프 matplot
경우의수 itertools

순서 o 중복 x -> 순열 -> permutations -> 순열 계산 가능
순서 o 중복 o -> 중복순열 -> product -> 중순 계산 가능
순서 x 중복 x -> 조합 -> combinations
순서 x 중복 o -> 중복조합 -> combinations_with_replacement
'''

from itertools import *

a = [1, 2, 3]

ans1=list(permutations(a, 2))
ans2=list(combinations(a, 2))
ans3=list(product(a, a))
ans4=list(combinations_with_replacement(a, 2))

print(len(ans1), " : ", ans1)
print(len(ans2), " : ", ans2)
print(len(ans3), " : ", ans3)
print(len(ans4), " : ", ans4)

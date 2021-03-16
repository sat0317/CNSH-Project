'''
set: 집합
A = ['a', 'b', 'c']
B = ['c', 'd', 'e']
A+B = ['a', 'b', 'c', 'c', 'd', 'e']
-> set(A+B) 사용하면됨
'''

from itertools import *

A = ['a', 'b', 'c']
B = ['c', 'd', 'e']
C = list(set(A+B))
C.sort()
print(C)

print("\n\n")
E = ['a', 'a', 'a', 'b', 'b', 'c']
F = list(permutations(E))
G = list(set(F))
G = [''.join(i) for i in G]
G.sort()
print(len(G))
print(G)

from itertools import *


a=[]
for i in range(0, 7):
    for j in range(0, 7):
        for k in range(0, 7):
            if (j-i)!=(k-j) and i+j+k==6:
                a.append((i, j, k))
print(len(a))


''' 평** 풀이
import itertools as it
import fractions as fr

A=list(range(0, 7))
B=list(it.product(A, repeat=3))
C=[i for i in B if sum(i)==6]
D=[i for i in C if i[1]-i[0]!=i[2]-i[1]]
print(len(D))
'''

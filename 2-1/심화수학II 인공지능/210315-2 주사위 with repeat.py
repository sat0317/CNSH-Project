'''
중복순열: repeat 활용하기
'''

import numpy as np
from itertools import *

D=[1, 2, 3, 4, 5, 6]
A=list(product(D, repeat=5))

E = []
f = 0
for i in A:
    if sum(i) == 15:
        #E.append(i)
        f+=1

#print(len(E))
#print(E)

print(f)

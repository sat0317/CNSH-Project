'''
주사위 던져서 뽑는거: 중복순열
중복순열: product
'''

import numpy as np
from itertools import *
'''
A = [1, 2, 3, 4, 5, 6]
B = list(range(1, 7))
'''
dice=np.arange(1, 7)
c=list(product(dice, dice, dice, dice, dice))
print(len(c))

ans=[]
for i in range(len(c)):
    if sum(c[i])==15:
        ans.append(c[i])

print(len(ans))

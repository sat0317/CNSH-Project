'''
주사위 던져서 뽑는거: 중복순열
중복순열: product
'''

import numpy as np
from itertools import *

dice=np.arange(1, 7)
c=list(product(dice, dice, dice, dice, dice))
print(len(c))

ans=[]
for i in range(len(c)):
    if sum(c[i])==15:
        ans.append(c[i])

print(len(ans))

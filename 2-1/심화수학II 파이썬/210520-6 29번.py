from itertools import *

#a=['c', 'c', 'c', 'c', 'c', 'c', 'h', 'h', 'h', 'h', 'h']
a=[i for i in list(product(list(range(0, 7)), repeat=3)) if sum(i)==6]
b=[i for i in list(product(list(range(0, 6)), repeat=3)) if sum(i)==5]

c=[]
for i in a:
    for j in b:
        if i[0]>=1 and j[1]>=1 and (i[2]+j[2]>=1):
            c.append((i, j))
print(len(c))

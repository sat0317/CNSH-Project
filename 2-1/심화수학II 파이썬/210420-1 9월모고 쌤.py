from itertools import *

X = [1, 2, 3, 4]
powerX = []
for i in range(1, 5):
    powerX.append(combinations(X, i))
    
print(powerX)

superX = list(p(powerX, 3))

bubunX = []
for i in superX:
    if all(j in i[1] for j in i[0]) and all(j in i[2] for j in i[1]):
        bubunX.append(i)
print(len(bubunX))

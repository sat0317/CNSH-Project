
from itertools import *
import numpy as np
coin = list(product(range(0, 501, 500), range(0, 501, 100), range(0, 5001, 50), range(0, 1001, 10)))
money = []

for i in coin:
    if sum(i) not in money:
        money.append(sum(i))

print(len(money))
print(money)

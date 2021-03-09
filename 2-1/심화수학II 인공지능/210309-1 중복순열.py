'''
A집합, A집합 각각 1234 있으면 경우의 수는 4^2
집합이 하나 더 늘어나면 4^3
이런것처럼 곂쳐도 되기에 중복순열
'''


from itertools import *

a = [1, 2, 3]
b = [4, 5, 6]

ans1=list(product(a))
ans2=list(product(a, a))
ans3=list(product(a, a, a))
ans4=list(product(a, b))

print(len(ans1), " : ", ans1)
print(len(ans2), " : ", ans2)
print(len(ans3), " : ", ans3)
print(len(ans4), " : ", ans4)


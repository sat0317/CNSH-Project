'''
순열 => 같은 것을 포함한 순열
a, a, a, b, b: 5! / 3!2! = 5C3 = 5C2

순서를 생각한 순열
1, 2, 3, 4, 5, 6 을 나열하는 방법은 6!
: 2, 4, 6을 순서대로 배치한다면: 6! / 3!
'''

from itertools import *
#from itertools import permutations as p 와 같은 방법으로 짧게 함수를 사용할 수도 있기는 함!
#다만, 그렇게 하면 다른함수랑 이름이 곂칠 가능성이 있어서 추천하지는...

A = [1, 2, 3, 4, 5, 6]
B = list(permutations(A))
'''
순열: permutations
조합: combinations
중순: product
중조: combinations_with_replacement
'''
#print(A[0], ", ", A[5], ", ", A.index(3))
ans = []

for i in B:
    a = i.index(2)
    b = i.index(4)
    c = i.index(6)
    if a<b<c:
        ans.append(i)

print(len(ans))
print(ans)

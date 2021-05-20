'''
흰 공 3 개, 검은 공 4 개가 들어 있는 주머니가 있다.
이 주머니에서 임의로 3 개의 공을 동시에 꺼내어,
꺼낸 흰 공과 검은 공의 개수를 각각  m, n 이라 하자.
이 시행에서 2m  ≥ n 일 때, 꺼낸 흰 공의 개수가 2 일 확률은
p/q이다. p+q 의 값을 구하시오. (단, p 와 q 는 서로소인
자연수이다.) [4점]
'''

from itertools import *
from fractions import Fraction as frac
a=['w', 'w', 'w', 'b', 'b', 'b', 'b']
b=list(combinations(a, 3))
c=[i for i in b if (i.count('w')*2>=i.count('b'))]
d=[i for i in c if (i.count('w')==2)]
print(frac(len(d), len(c)))
##평**풀이

A=['B1', 'B2', 'B3', 'B4', 'W1', 'W2', 'W3']
B=list(combinations(A, 3))
C=[''.join(i) for i in B]
D=[]
E=[]

for i in C:
    if 2*i.count('W')>=i.count('B'): 
        D.append(i)
        if i.count('W')==2:
            E.append(i)

print(frac(len(E), len(D)))

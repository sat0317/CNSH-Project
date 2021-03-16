'''
원순열에서 1학년 학생끼리 이웃하고 2학년 학생끼리 이웃하기
1학년 2명, 2학년 2명, 3학년 3명

두 사람이 붙어있다 -> index의 차가 항상 1이 되면 됨
이러한 것들을 모아두면 됨! (절댓값(abs) 활용)
'''
from itertools import *

A = ['a1', 'a2', 'b1', 'b2', 'c1', 'c2', 'c3']

B = list(permutations(A[:6]))
ans = [i+('c3', ) for i in B if abs(i.index('a1') - i.index('a2')) == 1 and abs(i.index('b1') - i.index('b2')) == 1]
ans.sort()

print(len(ans))
print(ans)

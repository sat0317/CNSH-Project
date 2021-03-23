'''
경우의 수: 경우를 나눈다
=> 이웃하는 순열: 한묶음->전체배열->자리 바꿔주기
이웃X 순열: 나머지배열->끼워넣기

숫자 1~7을 조건에 맞춰 배열
- 4 옆에는 4보다 큰 수가 적힌 카드
- 5 옆에는 5보다 작은 수가 적힌 카드

A4B: A, B는 5, 6, 7만 가능
C5D: C, D는 1, 2, 3, 4만 가능
경우수 1: 한묶음: 3!, 자리바꿈: 2*3*2
경우수 2: E45F에서 E는 6과 7, F는 1, 2, 3만 가능; +2*3*4!*2

'''

from itertools import *

a=[1, 2, 3, 4, 5, 6, 7]
A=list(permutations(a))
b=[i for i in A if all([i.index(4)!=0, i.index(5)!=6, i.index(5)!=0, i.index(4)!=6])]
c=[]

for i in b:
    ima = i.index(4)
    imb = i.index(5)
    
        
print(len(c))
print(c)

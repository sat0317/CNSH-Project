'''
4명의 학생 A, B, C, D에게 검은색 모자 6개와
흰색 모자 6개를 나누어줌
- 각 학생은 1개 이상 바음
- 학생 A가 받는 검은색 모자 개수는 4개 이상 -> 얘 기준으로 경우 나누기
- 흰색 모자보다 검은색 모자를 더 많이 받는 학생은 A를 포함하여 2명뿐
'''

from itertools import combinations_with_replacement as H
from itertools import product as P

'''
BB = ['Ab', 'Bb', 'Cb', 'Db'] #검은모자 받는 개수 -> 중복조합시켜서 개수 세기
bGet = list(H(BB, 6));
#print(len(bGet))
'''

BB = ['Ab', 'Bb', 'Cb', 'Db']
WW = ['Aw', 'Bw', 'Cw', 'Dw']

BBbc = list(H(BB, 6)) #4H6
WWwc = list(H(WW, 6)) #4H6
#두 집합의 곱: product

total = list(P(BBbc, WWwc))
WB = [i[0]+i[1] for i in total]
print(len(WB))

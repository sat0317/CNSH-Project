'''
흰 공 개와 검은 공 개를 세 상자 A , B, C에 남김없이
나누어 넣을 때, 각 상자에 공이 개 이상씩 들어가도록 나누어
넣는 경우의 수를 구하시오. (단, 같은 색 공끼리는 서로 구별하지
않는다.)

개수가 적은 흰색부터 배열
4, 0, 0: 3 * (2군데에 2개 검은공)3H2 = 18
2, 2, 0: 3 * 3H4 = 45
1, 3, 0: 3! * 3H3 = 60
2, 1, 1: 3 * 3H4 = 45
=> 168가지
'''

from itertools import combinations_with_replacement as H
from itertools import product as pr

W=['Aw','Bw','Cw']
B=['Ab','Bb','Cb']
WW=list(H(W,4))
BB=list(H(B,6))
WB=list(pr(WW,BB))
totalWB=[i[0]+i[1] for i in WB]

WB2=[]
for i in totalWB:
    a=[x[0] for x in i]
    if a.count('A')>=2 and a.count('B')>=2 and a.count('C')>=2:
        WB2.append(i)
print(len(WB2))

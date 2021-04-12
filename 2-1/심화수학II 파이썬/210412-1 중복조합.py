from itertools import combinations_with_replacement as H
from itertools import product as pr

BB = ['Ab', 'Bb', 'Cb', 'Db']
WW = ['Aw', 'Bw', 'Cw', 'Dw']
BBbc = list(H(BB, 6))
WWwc = list(H(WW, 6))
total = list(pr(BBbc, WWwc))
WB = []
for i in total:
    WB.append(i[0]+i[1])

WBA=[]     # WBA=[x for x in WB if len(set([y[0] for y in x]))==4]
for x in WB:
    if len(set([y[0] for y in x]))==4 and x.count('Ab')>=4 and x.count('Ab')>x.count('Aw'):
        WBA.append(x)

WBAB=[]
for i in WBA:
    if ((i.count('Db')>i.count('Dw')) + (i.count('Cb')>i.count('Cw')) + (i.count('Bb')>i.count('Bw')) == 1):
        WBAB.append(i)
print(len(WBAB))


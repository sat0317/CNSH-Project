from itertools import combinations_with_replacement as H#중복조합
from itertools import product as pr
BB=['Ab','Bb','Cb','Db']#'Ab'는 A가 검은모자 갖기
WW=['Aw','Bw','Cw','Dw']
totalB=list(H(BB,6))#검은색모자나눠주기
totalW=list(H(WW,6))#흰색모자나눠주기
totalBW=list(pr(totalB,totalW))
BW=[i[0]+i[1] for i in totalBW]#튜플을 합쳐준다 조건제시법
BWGa=[]
for i in BW:
    if set([x[0] for x in i])=={'A','B','C','D'} and i.count('Ab')>=4 and i.count('Ab')>i.count('Aw') : # len(set([x[0] for x in i]))==4
        BWGa.append(i)
BWGaB=[]
for i in BWGa:
    if i.count('Bb')>i.count('Bw') and i.count('Cb')<=i.count('Cw') and i.count('Db')<=i.count('Dw'):
        BWGaB.append(i)
BWGaC=[]
for i in BWGa:
    if i.count('Cb')>i.count('Cw') and i.count('Bb')<=i.count('Bw') and i.count('Db')<=i.count('Dw'):
        BWGaC.append(i)
BWGaD=[]
for i in BWGa:
    if i.count('Db')>i.count('Dw') and i.count('Cb')<=i.count('Cw') and i.count('Bb')<=i.count('Bw'):
        BWGaD.append(i)

len(BWGaB+BWGaC+BWGaD)

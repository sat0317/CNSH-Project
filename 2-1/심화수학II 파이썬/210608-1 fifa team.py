import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from pprint import pprint

fifa=pd.read_csv('FIFA 2018 Statistics.csv')
pd.set_option('display.max_columns',None)
pd.set_option('display.max_rows',None)

fteam=fifa.set_index('Team')
korea=fteam.loc['Korea Republic']
print(korea.mean())
teams=fteam.index

te=[]
for i in teams:
    if i not in te:
        te.append(i)

A={'이름':'Kim', '나이':27, '성격':'crazy'}

print(A.keys())
print(A.values())
A['장점']='코딩 마스터'

chunsik={}
'''
print(fteam.loc[te[7]].mean())

for i in range(len(te)):
    chunsik[te[i]] = fteam.loc[te[i]].mean()
print(chunsik['Japan'])
print(chunsik['Japan'][0])
gos={}
for i in range(len(te)):
    gos[te[i]]=country.loc[te[i]].mean()[0]
max(gos, 
'''

for i in te:
    chunsik[i]=fteam.loc[i].mean()[0]
'''
dd={'a':195, 'b':205, 'c':330}
max(dd.key=dd.get)
'''
print(max(chunsik, key=chunsik.get))
print(min(chunsik, key=chunsik.get))


pprint(sorted(chunsik, key=chunsik.get, reverse=False))

chunsik={}
for i in te:
    chunsik[i]=fteam.loc[i].sum()[14]+fteam.loc[i].sum()[15]*3

print(max(chunsik, key=chunsik.get))

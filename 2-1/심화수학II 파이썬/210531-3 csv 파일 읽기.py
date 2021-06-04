#FIFA 2018 Statistics.csv
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

fifa=pd.read_csv('FIFA 2018 Statistics.csv') #만약 한글이 깨지면 encoding = 'cp949'
pd.set_option('display.max_columns', None)
pd.set_option('display.max_rows', None)
#print(fifa)

mediausing=pd.read_csv('usingmedia.csv', encoding='cp949')
#print(mediausing)
'''
print(fifa.index)
print(fifa.columns)

fifa.set_index('Team')

print(fifa.index)
print(fifa.columns)
'''
'''
print(mediausing.index)
pd.set_option('display.max_columns', None)
pd.set_option('display.max_rows', None)

cnt = mediausing.set_index('사례수')
print(cnt.index)
print(cnt.loc[762]) #iloc[]
'''

fteam=fifa.set_index('Team')
korea=fteam.loc['Korea Republic']
print(korea.mean())
teams=fteam.index

te=[]
for i in teams:
    if i not in te:
        te.append(i)
#중복제거


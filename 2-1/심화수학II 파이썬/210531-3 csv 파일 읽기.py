#FIFA 2018 Statistics.csv
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

fifa=pd.read_csv('FIFA 2018 Statistics.csv') #만약 한글이 깨지면 encoding = 'cp949'

#print(fifa)

mediausing=pd.read_csv('usingmedia.csv', encoding='cp949')
#print(mediausing)

print(fifa.index)
print(fifa.columns)

fifa.set_index('Team')

print(fifa.index)
print(fifa.columns)

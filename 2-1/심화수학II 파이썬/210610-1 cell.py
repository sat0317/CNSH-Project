import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

cell = ['Samsung', 'Apple', 'Sony', 'Huawei']
jum=np.array([50, 20, 0.7, 29.3])
sung=np.array([30, 10, 5, 2])
barw=0.3
#단일그래프
''' 
celljum=plt
celljum.bar(cell, jum, width=barw)
celljum.xlabel('Company')
celljum.ylabel('Share')
celljum.show()
'''
plt.rcParams['font.family']='Malgun Gothic'
plt.rcParams['axes.unicode_minus'] = False
#그래프 2개
'''
bar=np.arange(4)
bar1=[x+barw for x in bar]
fig, ax=plt.subplots(figsize=(6, 5))
ax.bar(bar, jum, width=barw)
ax.bar(bar1, sung, width=barw)
ax.set_xlabel('Company')
ax.set_ylabel('Share')
plt.show()
'''
#그래프 2개 다른방법
'''
plt.bar(cell, jum, width=barw)
plt.bar(np.arange(len(cell))+barw, sung, width=barw)
plt.xlabel('Company')
plt.ylabel('Share')
plt.show()
'''
#원그래프
'''
plt.pie(jum, labels=cell, colors=['green', 'red', 'black', 'blue'], startangle=90, autopct='%1.1f%%', explode=(0, 0.1, 0.1, 0.1), shadow=True, wedgeprops={'width': 0.7, 'edgecolor': 'w', 'linewidth': 5})
plt.show()
'''
data=pd.Series([50, 100, 110, 120, 130, 140, 150, 200])
plt.boxplot(data)
plt.show()

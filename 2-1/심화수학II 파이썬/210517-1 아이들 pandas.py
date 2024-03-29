import pandas as pd
import numpy as np
weight=10,11,12,11,13,23,21,23,15,16,15,17,19,35,30,32,33,23,26,27,31
we=np.zeros(6)
print(we)

for i in weight:
    we[(i//5)-2]+=1
print(we)

print(pd.Series(we,index=['10~15','15~20','20~25','25~30','30~35','35~40'],dtype=int))

self_introduction={
    'name':'name',
    'age':100,
    'hobby':'fighting'
    }
c=pd.Series(self_introduction)
c.name='self_introduction'
print(c)
print(c+c)

height = [124, 125, 128, 130, 134, 140, 131, 143, 122, 129, 136, 139, 141, 135, 142, 150, 149, 141, 127, 131, 130]

print(pd.Series(weight))

weihei={
    'weight':pd.Series(weight),
    'height':pd.Series(height)
    }

print(weihei)

print(pd.DataFrame(weihei))

k=np.zeros((21, 2))
k[:, 0]=weight
k[:, 0]=height
print(k)
print(pd.DataFrame(k, columns=['weight', 'height']))


##########
print("######")
rge=np.arange(10, 40, 5)
print(rge)
dos, rge=np.histogram(weight, 5)
print(dos)

print(pd.Series(dos, index=[20, 25, 30, 35, 40]))
sdos=dos/21
print('상대도수: ', sdos)
print(sum(sdos))
print('누적도수: ', [sum(dos[0:i+1]) for i in range(len(dos))])

##########
print("#####")
import matplotlib.pyplot as plt
noodos=pd.Series([sum(dos[0:i+1]) for i in range(len(dos))], index=[20, 25, 30, 35, 40])
print(noodos)

plt.hist(weight, rge, rwidth=0.7, color='#aa00cc', alpha=0.5) #rwidth: 간격, color: 색상, alpha: 투명도
plt.xlabel('tall', fontsize=15)
plt.xticks(fontsize=14, fontweight='bold')
plt.yticks(fontsize=14)
plt.xlim(0, 100)#범위
plt.ylim(0, 10)
plt.legend(fontsize='13')
plt.grid()

print(plt.figure())
plt.show()
plt.hist([sum(dos[0:i+1]) for i in range(len(dos))], rge, rwidth=0.7, color='red', alpha=0.5)
plt.show()
plt.hist(sdos, rge, rwidth=0.7, color='green')
plt.legend(fontsize='13')
plt.show()



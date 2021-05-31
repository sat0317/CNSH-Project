import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

weight=10,11,13,23,21,23,15,16,15,17,19,35,30,32,33,23,26,27,31

rge=np.arange(10,40,5)

do,rge=np.histogram(weight,rge)

ndo=[]
a=0
for i in do:
    a+=i
    ndo.append(a)
    
rr=(rge[1]-rge[0])/2
rge_m=rge[:-1]+rr

plt.hist(weight, rge, rwidth=0.7, color='#aa00cc', alpha=0.9, label='wei')
plt.grid()
plt.xlabel('3 weight', fontsize=15, fontweight='bold')
plt.xticks(fontsize=13)
plt.yticks(fontweight='light', fontsize=13)
plt.yticks(np.arange(0, 20), fontsize=13)
plt.scatter(rge_m, ndo)
plt.plot(rge_m, ndo)
plt.scatter(rge_m, do)
plt.plot(rge_m,do)
plt.legend(fontsize=11)
plt.show()

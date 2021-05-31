import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

weight=10,11,13,23,21,23,15,16,15,17,19,35,30,32,33,23,26,27,31

rge=np.arange(10,40,5)
do,rge=np.histogram(weight,rge)

a=0
ndo=[]
for i in do:
    a+=i
    ndo.append(a)

rr=(rge[1]-rge[0])/2
rge_m=rge[:5]+rr

plt.scatter(rge_m,ndo)
plt.plot(rge_m,ndo)
plt.grid()
plt.yticks(range(20), fontsize=13)
plt.show()


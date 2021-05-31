import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

randNum=np.random.randint(1, 100000, size=100)
randS=np.random.rand(100)
print(randNum)

aver=np.average(randNum)
print('평균:', aver)
pyeon=randNum-aver
print('편차:', pyeon)
bunsan=np.average([i*i for i in pyeon])
print('분산:', bunsan)
pyojunpyeon=np.sqrt(bunsan)
print('표준편차:', pyojunpyeon)

avr=np.mean(randS)
bunsan=np.var(randS)
pyojunpyeon=np.std(randS)
print(avr, bunsan, pyojunpyeon, sep=', ')

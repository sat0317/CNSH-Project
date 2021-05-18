'''
데이터 분석: pandas -> 도수분포표
도수분포표: .Series
'''

import pandas as pd
import numpy as np

weight=10,11,12,11,13,23,21,23,15,16,15,17,19,35,30,32,33,23,26,27,31
we=np.zeros(6)
print(we)

for i in weight:
    '''
    if i//5==2:
        we[0]+=1
    elif i//5==3:
    '''
    we[i//5-2]+=1
print(we)
print(pd.Series(we))
print(pd.Series(we, index=['10~15', '15~20', '20~25', '25~30', '30~35', '35~40']))
print(pd.Series(we, index=['10~15', '15~20', '20~25', '25~30', '30~35', '35~40'], dtype=int))

import pandas as pd
import numpy as np

hanwo={'등급':pd.Series([1, 2, 3], index=['천안', '아산', '홍성']),
       '가격':pd.Series([10, 20, 30], index=['천안', '아산', '홍성']),
       '가치':pd.Series([20, 40, 50], index=['천안', '아산', '홍성'])}
hh=pd.DataFrame(hanwo)
print(hh)
print(hh.loc['아산'])
print(hh.iloc[0])

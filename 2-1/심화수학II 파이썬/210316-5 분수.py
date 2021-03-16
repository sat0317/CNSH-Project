'''
확률을 보통 분수로 표현
-> 1/4 이러면 소수로 나옴
  -> 분수 형태의 결과를 원한다면 fractions 라이브러리를 활용.

'''

from itertools import *
from fractions import * #Fraction

print(Fraction(1, 4)) #분자 / 분모
print(Fraction(5, 10)) #약분도 됨


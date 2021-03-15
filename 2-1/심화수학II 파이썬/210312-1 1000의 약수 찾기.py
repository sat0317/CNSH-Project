'''
1000의 약수

함수 정의: def FNAME(변수):
'''

A=[]
for i in range(1, 1000):
    if 1000%i==0:
        A.append(i)
print(A)
print(range(1, 1000))

A=[1, 2, 3]
B=[3, 4, 5]

C=A+B
D=[]
for i in A:
    if i not in B:
        D.append(i)
D = D+B
print(C)
print(D)

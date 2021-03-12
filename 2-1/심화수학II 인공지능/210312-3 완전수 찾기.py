def yaksu(x):
    A=[]
    for i in range(1, x//2+1):
        if x%i==0:
            A.append(i)
    return A

B=[]
for x in range(1, 1001):
    P=yaksu(x)
    n=sum(P)
    if n==x:
        B.append(x)
        print(x, " : ", P)
print("\n\nanswer : ", B)

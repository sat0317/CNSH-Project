def yaksu(x):
    A=[]
    for i in range(1, x//2+1):
        if x%i==0:
            A.append(i)
    return A

print(sum(yaksu(999)))


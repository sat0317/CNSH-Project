import math

def fac(n):
    if n<=1:
        return 1
    return n*fac(n-1)
a=int(fac(999))
b=int(pow(500, 999))
if a>b:
    print("fac(999)")
elif a==b:
    0
else:
    print("pow")
print(str(a)+'\n')
print(b)
print(len(str(a)), len(str(b)))

l=[0 for i in range(100)]
while True:
    s=input()
    if s=='':
        break
    a, b=map(int,s.split())
    l[a]=b
print(l)

l=[[] for i in range(100)]
while True:
    s=input()
    if s=='':
        break
    a, b=map(int,s.split(' →'))
    l[a].append(b)
print(l)
    

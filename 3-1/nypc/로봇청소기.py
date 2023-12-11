import sys
input=sys.stdin.readline

v=[]

def sorting():
    tsize=len(v)
    for i in range(tsize):
        for j in range(i+1, tsize):
            if v[i][0][0] > v[j][0][0]:
                v[i], v[j] = v[j], v[i]
n, m = map(int,input().split())
map=[[]]
for i in range(n):
    map.append(list(" "+input()))

for i in range(n, 0, -1):
    sorting()
    print(v)
    for vi in range(len(v)):
        posx=v[vi][0][0]
        deltapos=v[vi][0][1]-i

        for j in range(max(posx-deltapos, 1), min(posx+deltapos, m)+1):
            if map[i][j]=='X':
                map[i][j]='O'
                for k in range(deltapos-abs(posx-j)):
                    v[vi][1].append('D')
                if (posx-j>0):
                    for k in range(posx-j):
                        v[vi][1].append('R')
                else:
                    for k in range(j-posx):
                        v[vi][1].append('L')

                v[vi][0][0]=j
                v[vi][0][1]=i
                break
    for j in range(1, m+1):
        if map[i][j]=='X':
            map[i][j]='O'
            v.append([[j, i], ['D']*(n-i)])
for i in range(len(v)):
    for j in range(0, n-1-len(v[i])+1):
        v[i][1].append('D')

print(len(v))
for i in range(len(v)):
    print(v[i][0][0], end=' ')
    for _ in range(n-2, -1, -1):
        print(v[i][1][_], end='')
    print()
      

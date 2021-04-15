'''
다섯 명이 둘러앉을 수 있는 원 모양의 탁자와 두 학생 A , B를
포함한 명의 학생이 있다. 이 명의 학생 중에서 A , B를
포함하여 명을 선택하고 이 명의 학생 모두를 일정한
간격으로 탁자에 둘러앉게 할 때, A 와 B가 이웃하게 되는
경우의 수는? (단, 회전하여 일치하는 것은 같은 것으로 본다.)

6C3을 하고 3!으로 앉히기, 2!으로 AB 자리바꾸기
'''

from itertools import permutations as p
total=['A','B','C','D','E','F','G','H']
case=list(p(total[2:],3))
won=[i+('A','B') for i in case]+[i+('B','A') for i in case]
print(len(won))


Student=[1, 2, 3, 4, 5, 6, 7, 8]
All_case=list(p(Student, 5))
Case=[i for i in All_case if i[0] == 1 and (i[1] == 2 or i[4] == 2)]
print(len(Case))

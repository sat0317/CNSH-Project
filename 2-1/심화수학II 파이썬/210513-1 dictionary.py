a=[1, 2, 3, 4, 5] #list
b=(1, 2, 3, 4, 5) #tuple
c=(1, 2, 3, 4, 5)+(1, 2, 3)

'''
dictionary (type)
key: value 형식

데이터 분석: 판다스
'''
selfIntroduction={
    'name':'names',
    'height':'1000',
    'age':'1',
    'phone':'010112345678',
    'character':'char',
    'hobby':'violence'
    }
print(type(selfIntroduction))
print(selfIntroduction['name'])
selfIntroduction['birthday']=3.14
print(selfIntroduction['birthday'])
del selfIntroduction['character']
print(selfIntroduction)

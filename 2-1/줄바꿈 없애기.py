a='''
내용이
들어갑니다
:)
pdf 파일에서
복사하면 줄바꿈이
생기는데 그거를
없애기에 유용합니다.
'''
b=a.split('\n')
for i in b:
    print(i, end=' ')

#strData.replace('\n', ' ') 를 쓰면 사실 더 간단하게 할 수 있기는 합니다 :)

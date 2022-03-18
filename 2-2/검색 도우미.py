import os
import requests
from bs4 import BeautifulSoup as bs
from urllib import parse
import ssl


links = {
    'naver':'https://search.naver.com/search.naver?query=',
    'google':'https://www.google.com/search?q=',
    'daum':'https://search.daum.net/search?q=',
    'github':'https://github.com/search?q=as',
    'dbpia':'https://www.dbpia.co.kr/search/topSearch?query='
    
}
keyword=''
key=[]
for i in links.keys():
    key.append(i)
    

def mode1():
    for i in range(len(key)):
        os.system('start '+links[key[i]]+keyword)

def mode2():

        
    print('\n\n=========GOOGLE=========') #google
    print('구글은 사이트 특성상 영어 검색으로만 좋은 결과를 얻을 수 있음')
    cont=ssl._create_unverified_context()
    req=requests.get('https://www.google.co.kr/search', headers={'User-Agent':'Mozilla/5.0'}, params={
            'q':keyword,
            'oq':keyword,
            'aqs':'chrome..69i57.35694j0j7',
            'sourceid':'chrome',
            'ie':'UTF-8'
        })
    soup=(bs(req.text, 'html.parser'))
    print('---------검색결과---------')
    try:
        res=soup.find_all('div', {'class':'BNeawe vvjwJb AP7Wnd'})
        res2=soup.find_all('div', {'class':'BNeawe s3v9rd AP7Wnd'})
        for i in range(6):
            print(res[i].get_text().strip()+'\n\t'+res2[i*2+1].get_text().strip())
            print(' ')
    except:
        0
    
    print('\n\n=========NAVER=========') #naver
    req=requests.get(links['naver']+keyword)
    soup=(bs(req.text, 'html.parser'))
    print('---------사전---------')
    try:
        res=soup.find_all('p', {'class':'mean'})
        for i in res[0:10]:
            print(i.get_text().strip())
            print(' ')
    except:
        0
    print('---------종합---------')
    try:
        res=soup.find_all('a', {'class':'link_tit'})
        for i in res[0:4]:
            print(i.get_text().strip()+' : '+i['href'])
            print(' ')
    except:
        0
    try:
        res0=soup.find_all('div', {'class':'total_wrap api_ani_send'})
        for i in range(6):
            res=res0[i].find_all('a', {'class':'api_txt_lines total_tit _cross_trigger'})
            res2=res0[i].find_all('div', {'class':'api_txt_lines dsc_txt'})
            print(res[0].get_text().strip()+'\n\t'+res2[0].get_text().strip()+'\n\t'+res[0]['href'])
            print(' ')
    except:
        0

    print('\n\n=========DAUM=========') #daum
    req=requests.get(links['daum']+keyword)
    soup=(bs(req.text, 'html.parser'))
    print('---------백과사전---------')
    try:
        res=soup.find_all('a', {'class':'f_link_bu f_l'})
        res2=soup.find_all('p', {'class':'f_eb desc'})
        for i in range(3):
            print(res[i].get_text().strip()+' : '+res2[i].get_text().strip())
            print(' ')
    except:
        0
    print('---------뉴스---------')
    try:
        res0=soup.find_all('div', {'id':'newsColl'})
        res=res0[0].find_all('a', {'class':'tit_main fn_tit_u'})
        res2=res0[0].find_all('p', {'class':'desc'})
        res3=res0[0].find_all('div', {'class':'wrap_cont'})
        for i in range(4):
            print(res[i].get_text().strip())
            print('\t'+res2[i].get_text().strip())
            print('\t'+res[i]['href'])
            res4=res3[i].find_all('span', {'class':'f_nb'})
            print('\t\t'+res4[0].get_text().strip()+' | '+res4[1].get_text().strip())
            print(' ')
    except:
        0
    print('---------블로그---------')
    try:
        res0=soup.find_all('div', {'id':'blogColl'})
        res=res0[0].find_all('a', {'class':'f_link_b'})
        res2=res0[0].find_all('p', {'class':'f_eb desc'})
        for i in range(4):
            print(res[i].get_text().strip())
            print('\t'+res2[i].get_text().strip())
            print('\t'+res[i]['href'])
            print(' ')
    except:
        0



mode=input('모드선택\n1: 웹브라우저 자동 실행\n2: 웹브라우저 자동 실행 + 결과 보기\n기타: 결과만 보기\n:')

while True:
    keyword=parse.quote(input('검색어 입력: '))
    if mode=='1':
        mode1()
    elif mode=='2':
        mode1()
        mode2()
    else:
        mode2()



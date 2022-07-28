from bs4 import BeautifulSoup as bs
from pprint import pprint
import requests
html = requests.get('https://news.daum.net/')

soup = bs(html.text,'html.parser')
print('DAUM NEWS\n')
data1 = soup.findAll('a', {'class':'link_txt'})
for i in data1[0:24]:
    print(i.text.strip())

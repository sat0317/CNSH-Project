from bs4 import BeautifulSoup as bs
from pprint import pprint
import requests
html = requests.get('https://search.naver.com/search.naver?query=날씨')

soup = bs(html.text,'html.parser')

temp = soup.find('span', {'class':'todaytemp'}).text
print("기온:", temp, "℃")

cast = soup.find('p', {'class':'cast_txt'}).text
print(cast)

minTemp = soup.find('span', {'class':'min'}).text
maxTemp = soup.find('span', {'class':'max'}).text
print("최저/최고: ", minTemp, "℃ / ", maxTemp, "℃", sep="")

sen1 = soup.find('span', {'class':'sensible'})
sen2 = sen1.find('span', {'class':'num'}).text
print("체감온도: ", sen2, '℃', sep='')

rain1 = soup.find('span', {'class':'rainfall'})
rain2 = rain1.find('span', {'class':'num'}).text
print("시간당 강수량: ", rain2, 'mm\n', sep='')



data1 = soup.find('div', {'class':'sub_info'})
data2 = data1.findAll('dd')

fine_dust=[0, 0, 0]

fine_dust[0] = data2[0].find('span', {'class':'num'}).text
print("미세먼지:", fine_dust[0])
fine_dust[1] = data2[1].find('span', {'class':'num'}).text
print("초미세먼지:", fine_dust[1])
fine_dust[2] = data2[2].find('span', {'class':'num'}).text
print("오존지수:", fine_dust[2])




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


# 여기부터는 요일별

print('\n\n일별 기온 안내')
data1 = soup.find('ul',{'class':'list_area _pageList'})
data2 = data1.findAll('dd')

daydata = data1.findAll('span', {'class':'day_info'})
day = []
for i in range(5):
    day.append(daydata[i].text.replace(daydata[i].find('span').text, ''))

_temp = []
low_temp = []
high_temp = []
for i in range(5):
    _temp.append(data2[i].text.split('/'))
    low_temp.append(_temp[i][0].replace('°', ''))
    high_temp.append(_temp[i][1].replace('°', ''))
    
for i in range(5):
    print(day[i], '최저: ', low_temp[i]+'℃, ', '최고: ', high_temp[i]+'℃', sep='')

import requests
from bs4 import BeautifulSoup

searchLink = {
    'google':'https://www.google.com/search?q=',
    'naver':'https://search.naver.com/search.naver?where=nexearch&sm=top_hty&fbm=1&ie=utf8&query=',
    'daum':'https://search.daum.net/search?w=tot&DA=JU5&q=',
    'duckduckgo':'https://duckduckgo.com/?q=',
    'youtube':'https://www.youtube.com/results?search_query=',
    'github':'https://github.com/search?q=',
    'google scholar':'https://scholar.google.co.kr/scholar?hl=ko&as_sdt=0%2C5&q=',
    'dbpia':'https://www.dbpia.co.kr/search/topSearch?startCount=0&collection=ALL&range=A&searchField=ALL&sort=RANK&query='
}

searchKeyword = input("검색할 단어를 입력하세요: ")

searchResult = {}

for i in searchLink.keys():
    searchResult[i]=requests.get(searchKeyword[i])



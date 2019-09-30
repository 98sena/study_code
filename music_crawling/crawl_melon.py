#melon_crawl_version.2019_2

import requests
from bs4 import BeautifulSoup
from datetime import datetime

header = {'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; Trident/7.0; rv:11.0) like Gecko'}

today=datetime.now()

for i in range(2):
    if i==0:
        plus = ''
    else :
        plus = '#params%5Bidx%5D=51'
    req=requests.get("https://www.melon.com/chart/index.htm"+plus,headers=header) #html문서 가져오기


    melon_text=req.text

    melon_parse=BeautifulSoup(melon_text,'html.parser')

    melon_data=melon_parse.find_all("div",{"class":"ellipsis rank01"})

    print(melon_data)
    





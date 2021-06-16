from bs4 import BeautifulSoup

with open('https://www.runoob.com/python3/python3-iterator-generator.html','r') as html_file:
    content = html_file.read()
    soup = BeautifulSoup (content,'lxml')
    tags = soup.find_all('h5')

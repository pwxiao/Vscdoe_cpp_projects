import requests#导入request模块
url = 'http://10.255.0.19/drcom/login?callback=dr1003&DDDDD=2022304799%40unicom&upass=dadada52205&0MKKey=123456&R1=0&R3=0&R6=0&para=00&v6ip=&v=5751'
response = requests.get(url)
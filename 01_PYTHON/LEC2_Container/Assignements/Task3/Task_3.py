import requests

#Get Your Public IP
response = requests.get("https://api.ipify.org/?format=json")
if response.status_code == 200 :
    data = response.json()
PublicIp = data['ip']


#Get Information from Public IP
Link = "https://ipinfo.io/"+PublicIp+"/geo"
response = requests.get(Link)
if response.status_code == 200 :
    data = response.json()


#Print Your Information
for x , y in data.items() :
    print(x ,":", y , "\n")

import requests

response = requests.get('https://www.boredapi.com/api/activity')

if response.status_code == 200 :
    data=response.json()

print(data['activity'])
import os
for data in os.environ:
   print(data)
   print('-'*15)
   print(os.environ[data])
   print('='*30)




# import os
# # Access all environment variables 
# print('*----------------------------------*')
# print(os.environ)
# print('*----------------------------------*')
# # Access a particular environment variable 
# print(os.environ['HOME'])
# print('*----------------------------------*')
# print(os.environ['PATH'])
# print('*----------------------------------*')

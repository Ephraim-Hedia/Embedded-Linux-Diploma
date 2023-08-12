######################################################
#   pip install psutil
#   https://pypi.org/project/psutil/
# import psutil
# #Get CPU Usage percentage
# print("CPU Usage :" , psutil.cpu_percent )
######################################################




######################################################
# #pip install pyfiglet
# #https://www.geeksforgeeks.org/python-ascii-art-using-pyfiglet-module/


# import pyfiglet
# result = pyfiglet.figlet_format("Guirguis Hedia" , font = "digital")
# print(result)
######################################################





######################################################
# import datetime
# now =datetime.datetime.now()
# print("Current date and Time :")
# print(str(now)[0:-7])
######################################################





######################################################
# from pytube import YouTube
# YouTube('https://www.youtube.com/watch?v=-R5NQ-FI35I&ab_channel=SpiritualSongs')\
#     .streams.filter(progressive=True ,file_extension='mp4').first().download()
######################################################


######################################################
# import calendar
# print(calendar.month(2023,8))
######################################################

######################################################
# from gtts import gTTS
# import vlc

# myobj = gTTS(text = "صباح الفل يا كبير ، عامل ايه يا خويا عبدالله ", lang= "ar" , slow= False)
# myobj.save("Welcome.mp4")

# p=vlc.MediaPlayer("./Welcome.mp4")
# p.play()

# while True :
#     pass
######################################################




######################################################
# https://www.geeksforgeeks.org/download-video-in-mp3-format-using-pytube/
# # importing packages
# from pytube import YouTube
# import os
  
# # url input from user
# yt = YouTube(
#     str(input("Enter the URL of the video you want to download: \n>> ")))
  
# # extract only audio
# video = yt.streams.filter(only_audio=True).first()
  
# # check for destination to save file
# print("Enter the destination (leave blank for current directory)")
# destination = str(input(">> ")) or '.'
  
# # download the file
# out_file = video.download(output_path=destination)
  
# # save the file
# base, ext = os.path.splitext(out_file)
# new_file = base + '.mp3'
# os.rename(out_file, new_file)
  
# # result of success
# print(yt.title + " has been successfully downloaded.")
######################################################


# import os 
# favoriteFolder = [
#     "D:\Learn_in_Depth"
# ]

# os.popen(r"nautilus {}".format(favoriteFolder[0]))















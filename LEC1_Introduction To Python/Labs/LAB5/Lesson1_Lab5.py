from gtts import gTTS
import vlc

myobj = gTTS(text = "صباح الفل يا كبير ، عامل ايه يا خويا عبدالله ", lang= "ar" , slow= False)
myobj.save("Welcome.mp4")

p=vlc.MediaPlayer("./Welcome.mp4")
p.play()

while True :
    pass
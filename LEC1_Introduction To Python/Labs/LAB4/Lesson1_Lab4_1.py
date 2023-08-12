from pytube import YouTube
YouTube('https://www.youtube.com/watch?v=-R5NQ-FI35I&ab_channel=SpiritualSongs')\
    .streams.filter(progressive=True ,file_extension='mp4').first().download()
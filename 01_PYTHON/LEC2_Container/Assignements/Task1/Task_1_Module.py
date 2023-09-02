import webbrowser

urls ={
    "google"    :   "https://www.google.com" ,
    "facebook"  :   "https://www.facebook.com/",
    "youtube"   :   "https://www.youtube.com/"
}

def Open_URL(url) :
    try :
        webbrowser.open_new_tab(urls[url])
    except :
        print("You Enter Wrong Data")



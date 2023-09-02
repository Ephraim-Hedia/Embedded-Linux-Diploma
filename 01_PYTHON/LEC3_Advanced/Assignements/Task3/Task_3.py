import webbrowser
import pyautogui
import time



def OpenGmail() :
    webbrowser.open_new_tab("https://mail.google.com/mail/u/0/#inbox")
    
def Select_All_Message() :
    button7location = pyautogui.locateOnScreen('.\\Lesson_3\\mark.png',confidence=0.7)
    pyautogui.click(button7location)

def MakeAllMessageAsRead():
    button7location = pyautogui.locateOnScreen('.\\Lesson_3\\read.png',confidence=0.8)
    pyautogui.moveTo(button7location)

def CloseTab() :
    pyautogui.hotkey('ctrl','w')


if __name__ == '__main__':
    try :
        OpenGmail()
        time.sleep(5)
        Select_All_Message()
        time.sleep(3)
        MakeAllMessageAsRead()
        time.sleep(2)
        CloseTab()
    except :
        print("An Error Happened")



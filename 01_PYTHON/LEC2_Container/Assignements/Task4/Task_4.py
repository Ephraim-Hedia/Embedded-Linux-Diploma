import pyautogui
import time



def I_M (ModuleID) :
    pyautogui.hotkey('ctrl', 'shift', 'x')
    pyautogui.hotkey('ctrl' , 'a')
    pyautogui.press("backspace")
    time.sleep(2)
    pyautogui.write(ModuleID)
    time.sleep(2)
    try :
        x, y= pyautogui.locateCenterOnScreen("E:\\Python\\Lesson_2\\Install_Button.png", confidence=0.9)
        pyautogui.click(x,y)
        time.sleep(3)
        print(f"{ModuleID} is installing" )
    except:
        print(str(ModuleID)+" accure an Error") 
        time.sleep(3)

    pyautogui.hotkey("ctrl","shift","E") 
    time.sleep(2) 
    

I_M("twxs.cmake")                                   #Cmake
I_M("amiralizadeh9480.cpp-helper")                  #C++ Helper
I_M("llvm-vs-code-extensions.vscode-clangd")        #clangd
I_M("matepek.vscode-catch2-test-adapter")           #C++ TestMate
I_M("ms-vscode.cmake-tools")                        #CMake Tools


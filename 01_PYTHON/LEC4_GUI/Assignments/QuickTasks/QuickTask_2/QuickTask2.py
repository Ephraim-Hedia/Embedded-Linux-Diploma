from tkinter import *

window=Tk()
window.title("Ephraim")
window.geometry("300x100+1200+150")
window.resizable(False,False)


def ReverseString() :
    global lbl2
    word=str(e1.get())
    word=word[::-1]
    lbl2=Label(window , text=word , fg="black" , bg="White")
    lbl2.grid(row=1,column=1) 
    

lbl1=Label(window , text="Enter a Word" , fg="black" , bg="White")
e1=Entry(window)
b1=Button(window , text="Validate" ,command=ReverseString)

lbl1.grid(row=0,column=0)

e1.grid(row=0,column=1)
b1.grid(row=2,column=1)


window.mainloop()
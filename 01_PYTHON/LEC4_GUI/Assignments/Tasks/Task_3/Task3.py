from tkinter import *
import math 
window=Tk()
window.title("Ephraim")
window.geometry("300x100+1200+150")
window.resizable(False,False)


def FACT() :
    Number=int(e1.get())
    Number=math.factorial(Number)
    lbl2=Label(window , text=str(Number) , fg="black" , bg="White")
    lbl2.grid(row=1,column=1) 
    

lbl1=Label(window , text="Enter Value of intger N :" , fg="black" , bg="White")
e1=Entry(window)
b1=Button(window , text="Validate" ,command=FACT)

lbl1.grid(row=0,column=0)

e1.grid(row=0,column=1)
b1.grid(row=2,column=1)


window.mainloop()
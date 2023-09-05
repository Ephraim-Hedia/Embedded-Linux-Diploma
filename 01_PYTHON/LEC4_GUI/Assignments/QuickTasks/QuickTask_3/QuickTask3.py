from tkinter import *

window=Tk()
window.title("Ephraim")
window.geometry("300x100+1200+150")
window.resizable(False,False)

def Calc() :
    global v 
    val1 = int(e1.get())
    val2 = int(e2.get())
    SUM=val1+val2
    SUB=val1-val2

    if(v.get()==0) :
        lbl=Label(window , text=f"The SUM= {str(SUM)}" , fg="black")
        lbl.grid(row=2,column=1)
    elif(v.get()==1) :
        lbl=Label(window , text=f"The SUB= {str(SUB)}" , fg="black")
        lbl.grid(row=2,column=1)
        
    

v=IntVar()

#Handlers

#Two Labels
lbl1=Label(window , text="Enter The Value of M :" , fg="black")
lbl2=Label(window , text="Enter The Value of N :" , fg="black")

#Two Entry Boxes
e1=Entry(window)
e2=Entry(window)

#2 Radio Buttons
Rb1=Radiobutton(window , text="SUM" , variable=v , value=0)
Rb2=Radiobutton(window , text="SUB" , variable=v , value=1)

#One Button
try :
    bu=Button(window ,text= "GET" , width=12 , command=Calc)
except :
    pass

#Formating
lbl1.grid(row=0,column=0)
lbl2.grid(row=1,column=0)
e1.grid(row=0,column=1)
e2.grid(row=1,column=1)
bu.grid(row=3,column=1)
Rb1.place(x=10,y=50)
Rb2.place(x=10,y=70)


mainloop()
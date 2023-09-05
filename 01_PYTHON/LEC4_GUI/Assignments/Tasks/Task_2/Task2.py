#
# Use Canvas to create a basic gauge
#
from tkinter import *

 
def LedON():
    global lbl
    lbl.config(text="Led is ON")
    cnvs.create_oval(coord, fill="RED",  width=2)
def LedOff():
    lbl.config(text="Led is OFF")
    cnvs.create_oval(coord, fill="white",  width=2)    
# Create Canvas objects    
 
canvas_width = 400
canvas_height =300
 
root = Tk()
 
cnvs = Canvas(root, width=canvas_width, height=canvas_height)
cnvs.pack()
coord = 150,20,230,100 #define the size of the gauge
low_r = 0 # chart low range
hi_r = 100 # chart hi range
 
# Create a background arc and a pointer (very narrow arc)
cnvs.create_oval(coord, fill="white",  width=2)

#Handlers
lbl=Label(root , text="Led is OFF" , fg="black" , bg="White")
bu1=Button(root , text="Led ON" , command=LedON)
bu2=Button(root , text="Led Off" , command=LedOff)

#formating
lbl.pack()
bu1.pack()
bu2.pack()
 
root.mainloop()
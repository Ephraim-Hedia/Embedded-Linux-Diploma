from tkinter import *

window=Tk()
window.title("Ephraim")
window.geometry("350x100+1200+150")
window.resizable(False,False)
window.configure(background="black")


bt1=Button(window,text="Button 1",fg="Black",bg="White",width=15 )
bt2=Button(window,text="Button 2",fg="Black",bg="White",width=15 )
bt3=Button(window,text="Button 3",fg="Black",bg="White",width=15 )
bt4=Button(window,text="Button 4",fg="Black",bg="White",width=15 )

bt1.grid(row=0,column=1)
bt2.grid(row=1,column=0)
bt3.grid(row=1,column=2)
bt4.grid(row=2,column=1)

window.mainloop()

#Creating the File
f=open("E:\\Python\\Lesson_3\\AVR.c","w") 

#asking the user to input the data
ls =['0','0','0','0','0','0','0','0']
for x in range(0,8) :
    data=input(f"Please Enter Bit {x} Mode :")
    if data     == "in" :               ls[x]='0'
    elif data   == "out" :              ls[x]='1'    

data = "".join(ls)

#Writing to the file
text="void Init_Port_DIR(void)\n{\n\tDDRA="+data+"\n}"
f.write(text)
f.close()
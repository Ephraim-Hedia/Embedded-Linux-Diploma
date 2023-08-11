database = {
    "ahmed" :"1394",
    "ali"   :"6078",
    "amr"   :"9345"
}

UserName =  input   ("Enter Your User Name :")
Password =  input   ("Enter Your Password :")

if(UserName.strip().lower() in database.keys() and Password.strip().lower() in database.values()):
    print("Welcome")
else :
    print("You Enter Wrong Data")    


    

    


    
 
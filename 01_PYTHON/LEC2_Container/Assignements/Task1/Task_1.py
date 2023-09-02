from Task_1_Module import *


Link = input(f"Enter Your Fav Browser ({' ,'.join(list(urls.keys()))}) :")
Open_URL(Link.strip().lower())
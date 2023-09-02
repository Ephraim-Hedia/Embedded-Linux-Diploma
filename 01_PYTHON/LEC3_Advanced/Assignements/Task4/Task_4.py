import sys
 
def main() :
    # total arguments
    n = len(sys.argv)
    print("Number of arguments passed:", n)

    #file Name
    print("\nName of Python script:", sys.argv[0])
    

    # Arguments passed
    print("\nArguments passed:", end = " ")
    for i in range(1, n):
        print(sys.argv[i], end = " ")

if __name__ == "__main__":
    main()
      

      

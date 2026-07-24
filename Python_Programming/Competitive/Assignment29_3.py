import sys

def CopyContent():

    if(len(sys.argv)== 2):
        fobj1 = open(sys.argv[1],"r")
        fobj2 = open("Demo.txt","w")

        Data = fobj1.read()

        fobj2.write(Data)

        print("Text Copied")

        fobj1.close()
        fobj2.close()
    else:
        print("Invalid Input of Arguments")

def main():

    CopyContent()

if __name__ == "__main__":
    main()
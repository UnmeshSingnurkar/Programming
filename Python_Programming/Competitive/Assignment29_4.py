import sys
import os

def CopyContent():

    if (sys.argv[1] == '--h' or sys.argv[1] == '--H'):
        print("This automation sccript is used to compare two files")
        print("For better usage please check --u flag")

    elif (sys.argv[1] == '--u' or sys.argv[1] == '--U'):
        print("Please Execute the script as")
        print("python Filename.py First_FileName Second_FileName")

    elif(len(sys.argv)== 3):

        Ret = os.path.exists(sys.argv[1])

        if Ret == False:
            print("Automation Error : There is no such File with name",sys.argv[1])
            return
        
        Ret = os.path.exists(sys.argv[2])

        if Ret == False:
            print("Automation Error : There is no such File with name",sys.argv[2])
            return

        fobj1 = open(sys.argv[1],"r")
        fobj2 = open(sys.argv[2],"r")

        if(fobj1.read() == fobj2.read()):
            print("Success")
        else:
            print("Failure")

        fobj1.close()
        fobj2.close()
    else:
        print("Invalid Input of Arguments")

def main():

    CopyContent()

if __name__ == "__main__":
    main()
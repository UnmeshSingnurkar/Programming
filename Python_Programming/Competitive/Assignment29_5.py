import sys
import os

def CopyContent():

    if (sys.argv[1] == '--h' or sys.argv[1] == '--H'):
        print("This automation script is used to check frequency of a sting given by user in the file")
        print("For better usage please check --u flag")

    elif (sys.argv[1] == '--u' or sys.argv[1] == '--U'):
        print("Please Execute the script as")
        print("python Filename.py FileName String")

    elif(len(sys.argv)== 3):

        Ret = os.path.exists(sys.argv[1])

        if Ret == False:
            print("Automation Error : There is no such File with name",sys.argv[1])
            return
        
        fobj = open(sys.argv[1],"r")

        Count = 0
        Data = fobj.read()

        for i in Data.split():
            if i == sys.argv[2]:
                Count = Count + 1

        fobj.close()

        print(f"Number of {sys.argv[2]} in the file {sys.argv[1]} are {Count}")

    else:
        print("Invalid Input of Arguments")

def main():

    CopyContent()
    

if __name__ == "__main__":
    main()
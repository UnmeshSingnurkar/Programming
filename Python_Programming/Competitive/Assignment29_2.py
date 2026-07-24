import os

def main():
    Input = input("Enter File name with extension : ")

    fobj = open(Input,"r")

    print(fobj.read())

if __name__ == "__main__":
    main()
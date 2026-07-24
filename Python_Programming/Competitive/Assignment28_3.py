def main():
    try:
        fobj = open("Demo.txt", "r")
        print("File gets Opened")

        Data = fobj.readlines()

        print("Number of Lines are :", Data)

        fobj.close()

    except FileNotFoundError:
        print("File is not present in Current Directory")


if __name__ == "__main__":
    main()
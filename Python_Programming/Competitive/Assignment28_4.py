def main():
    try:
        fobj1 = open("Demo.txt", "r")

        fobj2 = open("ABC.txt","w")

        data = fobj1.read()
        
        fobj2.write(data)

        fobj1.close()
        fobj2.close()

    except FileNotFoundError:
        print("File is not present in Current Directory")


if __name__ == "__main__":
    main()
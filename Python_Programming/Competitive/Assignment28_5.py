def main():
    try:
        fobj = open("Demo.txt", "r")

        data = fobj.read()

        if "Marvellous" in data:
            print("Marvellous Word found")
        else:
            print("Marvellous word not found")

        fobj.close()

    except FileNotFoundError:
        print("File is not present in Current Directory")


if __name__ == "__main__":
    main()
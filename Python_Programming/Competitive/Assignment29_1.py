import os

def main():
    Input = input("Enter File name with extension : ")

    Ans = os.path.exists(Input)

    if Ans:
        print(f"{Input} file Exists")
    else:
        print(f"{Input} file does not Exists")

if __name__ == "__main__":
    main()
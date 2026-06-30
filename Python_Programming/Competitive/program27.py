def Binary(no):
    Bin = 0
    pos = 1
    while (no != 0):
        Rem = no % 2
        Bin = Bin + (Rem * pos)
        no = int(no / 2)
        pos = pos * 10

    return Bin

def main():
    Value = int(input("Enter Number : "))

    Ret = Binary(Value)

    print("Binary :",Ret)
    
if __name__ == "__main__":
    main()
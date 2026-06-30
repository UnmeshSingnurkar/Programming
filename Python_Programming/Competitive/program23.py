def Display(no):
    Data = list()

    for i in range (no,0,-1):
        Data.append(i)

    return Data

def main():
    Value = int(input("Enter Number : "))

    Ret = Display(Value)

    print(Ret)
    
if __name__ == "__main__":
    main()
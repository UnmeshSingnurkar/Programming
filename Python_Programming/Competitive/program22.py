def Display(no):
    Data = list()

    for i in range (1,no+1):
        Data.append(i)

    return Data

def main():
    Value = int(input("Enter Number : "))

    Ret = Display(Value)

    print(Ret)
    
if __name__ == "__main__":
    main()
def Odd(No):
    Data = list()
    for i in range(1,No+1,2):
        Data.append(i)

    return Data

def main():
    Value = int(input("Enter number : "))

    Ret = Odd(Value)

    print("Odd Numbers are :",Ret)
    
if __name__ == "__main__":
    main()
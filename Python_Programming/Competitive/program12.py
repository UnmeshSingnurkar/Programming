def Even(No):
    Data = list()
    for i in range(0,No+1,2):
        Data.append(i)

    return Data

def main():
    Value = int(input("Enter number : "))

    Ret = Even(Value)

    print("Even Numbers are :",Ret)
    
if __name__ == "__main__":
    main()
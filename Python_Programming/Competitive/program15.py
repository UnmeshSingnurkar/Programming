def CountDigit(No):
    Count = 0
    while(No != 0):
        Count = Count + 1
        No =int(No / 10)
    
    return Count 

def main():
    Value = int(input("Enter number : "))

    Ret = CountDigit(Value)

    print("Number of Digits are :",Ret)
    
if __name__ == "__main__":
    main()
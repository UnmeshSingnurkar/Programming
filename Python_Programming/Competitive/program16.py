def SumDigit(No):
    Sum = 0
    while(No != 0):
        Digit = No % 10
        Sum = Sum + Digit
        No =int(No / 10)
    
    return Sum 

def main():
    Value = int(input("Enter number : "))

    Ret = SumDigit(Value)

    print("Sum of Digits is :",Ret)
    
if __name__ == "__main__":
    main()
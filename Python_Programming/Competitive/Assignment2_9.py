def CountDigit(iNo):
    Digit = 0

    while(iNo != 0):
        Digit = Digit + 1      
        iNo = int(iNo/10)
    
    return Digit

def main():
    Value = int(input("Enter Number : "))

    Ret = CountDigit(Value)

    print("Number of digits are :",Ret)

if __name__ == "__main__" :
    main()
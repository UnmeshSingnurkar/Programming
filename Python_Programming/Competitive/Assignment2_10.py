def SumDigit(iNo):
    Digit = 0
    Sum = 0
    
    while(iNo != 0):
        Digit = iNo % 10
        Sum = Sum + Digit     
        iNo = int(iNo/10)
    
    return Sum

def main():
    Value = int(input("Enter Number : "))

    Ret = SumDigit(Value)

    print("Sum of digits is :",Ret)

if __name__ == "__main__" :
    main()
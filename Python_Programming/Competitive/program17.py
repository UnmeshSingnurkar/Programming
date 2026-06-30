def Reverse(No):
    Rev = 0
    while(No != 0):
        Digit = No % 10
        Rev = (Rev * 10) + Digit
        No =int(No / 10)
    
    return Rev 

def main():
    Value = int(input("Enter number : "))

    Ret = Reverse(Value)

    print("Reversed Digits is :",Ret)
    
if __name__ == "__main__":
    main()
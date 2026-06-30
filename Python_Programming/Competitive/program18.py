def Reverse(No):
    Rev = 0
    Temp = No
    Flag = False
    while(No != 0):
        Digit = No % 10
        Rev = (Rev * 10) + Digit
        No =int(No / 10)
    
    if Rev == Temp :
        Flag = True

    return Flag 

def main():
    Value = int(input("Enter number : "))

    Ret = Reverse(Value)

    if Ret == True :
        print("Palindrome")
    else:
        print("Not Palindrome")
    
if __name__ == "__main__":
    main()
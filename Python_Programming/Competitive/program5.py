def CheckGreater(No1,No2):
    if(No1>No2):
        Greater = No1
    else:
        Greater = No2
    
    return Greater

def main():
    Value1 = int(input("Enter First number : "))
    Value2 = int(input("Enter Second number : "))

    Ret = CheckGreater(Value1,Value2)

    print("Greater Number is :",Ret)

if __name__ == "__main__":
    main()
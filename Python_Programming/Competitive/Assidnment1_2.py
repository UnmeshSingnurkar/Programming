def ChkNum(No):
    Flag = False

    if No % 2 == 0 :
        Flag = True

    return Flag 

def main():
    Value = int(input("Enter Number : "))
    
    Ret = ChkNum(Value)

    if Ret == True :
        print("Even Number")
    else:
        print("Odd Number")

if __name__ == "__main__" :
    main()
def ChkDivisible(No):
    flag = False

    if (No  % 3 == 0) and (No % 5 == 0):
        flag = True

    return flag

def main():
    Value = int(input("Enter number : "))

    Ret = ChkDivisible(Value)

    if(Ret == True) :
        print("Number Divisible by 3 and 5")
    else:
        print("Number not Divisible by 3 and 5")

if __name__ == "__main__":
    main()
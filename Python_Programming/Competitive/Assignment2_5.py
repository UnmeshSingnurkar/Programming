def Prime(iNo):
    flag = False

    for i in range(2,int((iNo/2)+1)):
        if iNo % i == 0:
            flag = True
            break

    return flag

def main():
    Value = int(input("Enter Number : "))

    Ret = Prime(Value)

    if Ret == False:
        print(f"{Value} is Prime Number")
    else:
        print(f"{Value} is not Prime Number")

if __name__ == "__main__" :
    main()
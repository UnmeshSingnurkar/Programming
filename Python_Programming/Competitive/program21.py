def Calculations(no1,no2):
    Add = no1 + no2
    Sub = no1 - no2
    Mul = no1 * no2
    Div = no1 / no2

    return Add,Sub,Mul,Div

def main():
    Value1 = int(input("Enter 1st Number : "))
    Value2 = int(input("Enter 2nd Number : "))

    Ret1,Ret2,Ret3,Ret4 = Calculations(Value1,Value2)

    print("Addition is :",Ret1)
    print("Substraction is :",Ret2)
    print("Multiplication is :",Ret3)
    print("Division is :",Ret4)
    
if __name__ == "__main__":
    main()
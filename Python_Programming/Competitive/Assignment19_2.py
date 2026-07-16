Multiplication = lambda No1,No2 : No1 * No2

def main():
    Value1 = int(input("Enter number : "))
    Value2 = int(input("Enter number : "))

    Ret = Multiplication(Value1,Value2)

    print(f"Multiplication is {Ret}")

if __name__ == "__main__" :
    main()
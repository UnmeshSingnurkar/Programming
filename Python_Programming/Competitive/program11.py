def Factorial(No):
    Mult = 1

    for i in range(1,No+1):
        Mult = Mult * i

    return Mult

def main():
    Value = int(input("Enter number : "))

    Ret = Factorial(Value)

    print("Factorial is :",Ret)
    
if __name__ == "__main__":
    main()
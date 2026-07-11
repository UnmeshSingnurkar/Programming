def Fact(iNo):
    Ans = 1

    for i in range(1,iNo+1):
        Ans = Ans * i

    return Ans

def main():
    Value = int(input("Enter Number : "))

    Ret = Fact(Value)

    print(f"Factorial of {Value} is {Ret}")

if __name__ == "__main__" :
    main()
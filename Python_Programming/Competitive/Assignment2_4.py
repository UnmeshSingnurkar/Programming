def FactSum(iNo):
    Sum = 0

    for i in range(1,int((iNo/2)+1)):
        if iNo % i == 0:
            Sum = Sum + i

    return Sum

def main():
    Value = int(input("Enter Number : "))

    Ret = FactSum(Value)

    print(f"Sum of factors of {Value} is {Ret}")

if __name__ == "__main__" :
    main()
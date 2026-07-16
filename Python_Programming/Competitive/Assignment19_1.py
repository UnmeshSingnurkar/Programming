Power = lambda No : 2 ** No

def main():
    Value = int(input("Enter number : "))

    Ret = Power(Value)

    print(Ret)

if __name__ == "__main__" :
    main()
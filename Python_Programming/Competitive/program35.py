CheckDivisible = lambda No : (No % 5 == 0)

def main():
    Value = int(input("Enter Number :"))

    print(CheckDivisible(Value))

if __name__ == "__main__" :
    main()
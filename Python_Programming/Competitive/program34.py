CheckOdd = lambda No : (No % 2 != 0)

def main():
    Value = int(input("Enter Number :"))

    print(CheckOdd(Value))

if __name__ == "__main__" :
    main()
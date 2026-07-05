Max = lambda No1, No2 : No1 > No2 

def main():
    Value1 = int(input("Enter 1st Number :"))
    Value2 = int(input("Enter 2nd Number :"))

    if Max(Value1, Value2) == True:
        print(f"{Value1} is maximum")
    else :
        print(f"{Value2} is maximum")

if __name__ == "__main__" :
    main()
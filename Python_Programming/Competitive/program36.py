Addition = lambda No1, No2 : No1 + No2

def main():
    Value1 = int(input("Enter 1st Number :"))
    Value2 = int(input("Enter 2nd Number :"))

    print(f"Addition of {Value1} and {Value2} is : {Addition(Value1,Value2)}")

if __name__ == "__main__" :
    main()
def AreaCircle(Radius , PI = 3.14):
    return PI * Radius * Radius

def main():
    Value = int(input("Enter Radius : "))

    Ret = AreaCircle(Value)

    print("Area of Circle is :",Ret)
    
if __name__ == "__main__":
    main()
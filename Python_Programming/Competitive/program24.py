def AreaRect(Length , Width):
    return Length * Width

def main():
    Value1 = int(input("Enter Length : "))
    Value2 = int(input("Enter Width : "))

    Ret = AreaRect(Value1,Value2)

    print("Area of Rectangle is :",Ret)
    
if __name__ == "__main__":
    main()
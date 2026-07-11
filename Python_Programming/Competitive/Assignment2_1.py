import Assignment2_1Module as am

def main():
    Value1 = int(input("Enter 1st number : "))
    Value2 = int(input("Enter 2nd number : "))

    print("Addition is :",am.Add(Value1,Value2))
    print("Subtraction is is :",am.Sub(Value1,Value2))
    print("Multiplication is :",am.Mult(Value1,Value2))
    print("Division is :",am.Div(Value1,Value2))

if __name__ == "__main__" :
    main()
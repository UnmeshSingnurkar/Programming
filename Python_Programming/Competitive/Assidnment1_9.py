def Display(No):
    Value = 0
    for i in range(No):
        Value = Value + 2
        print(Value)

def main():
    Value = int(input("Enter Number : "))

    Display(Value)

if __name__ == "__main__" :
    main()
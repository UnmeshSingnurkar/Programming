def Min(Data):
    return min(Data)

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))
    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)
    
    Ret = Min(Data)

    print(f"Minimum of {Data} is : {Ret}")

if __name__ == "__main__" :
    main()
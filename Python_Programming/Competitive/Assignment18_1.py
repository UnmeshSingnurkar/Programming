def SumList(Data):
    Sum = 0

    for i in Data:
        Sum = Sum + i

    return Sum

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))
    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)
    
    Ret = SumList(Data)

    print(f"Addition of {Data} is : {Ret}")

if __name__ == "__main__" :
    main()
def Frequency(Data,Number):
    Count = 0

    for i in Data:
        if i==Number:
            Count = Count +1

    return Count

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    Number = int(input("Enter number to be checked : "))
    
    Ret = Frequency(Data,Number)

    print(f"Frequency of {Number} is : {Ret}")

if __name__ == "__main__" :
    main()
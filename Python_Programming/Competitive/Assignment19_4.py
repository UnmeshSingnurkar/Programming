from functools import reduce

Filter = lambda No : No % 2 == 0

Map = lambda No : No * No

Reduce = lambda No1, No2 : No1+No2

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)
    
    FData = list(filter(Filter,Data))
    print("Data after Filter :",FData)

    MData = list(map(Map,FData))
    print("Data after map :",MData)

    RData = reduce(Reduce,MData)
    print("Data After reduce :",RData)


if __name__ == "__main__" :
    main()
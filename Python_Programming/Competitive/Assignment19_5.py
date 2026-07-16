
from functools import reduce

def ChkPrime(Data):
    Ans = list()
    
    for i in Data:
        flag = False

        for no in range(2,int(i/2)+1):
            if i % no == 0:
                flag = True
                break
            
        if flag == False:
            Ans.append(i)
    return Ans

Map = lambda No : No * 2

Reduce = lambda No1, No2 : max(No1,No2)

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)
    
    FData = list(ChkPrime(Data))
    print("Data after Filter :",FData)

    MData = list(map(Map,FData))
    print("Data after map :",MData)

    RData = reduce(Reduce,MData)
    print("Data After reduce :",RData)


if __name__ == "__main__" :
    main()
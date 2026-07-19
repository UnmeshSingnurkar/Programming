import multiprocessing

def SumSquare(No):
    Sum = 0

    for i in range(1,No+1):
        Sum = Sum + (i ** 2)

    return Sum

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    pobj = multiprocessing.Pool()

    Result = pobj.map(SumSquare,Data)

    pobj.close()
    pobj.join()

    print(Result)

if __name__ == "__main__" :
    main()
import multiprocessing
import os

def Facotrial(No):
    print("Process is running with PID :",os.getpid())

    Fact = 1

    for i in range(1,No+1):
        Fact = Fact * i

    return Fact

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    pobj = multiprocessing.Pool()

    Result = pobj.map(Facotrial,Data)

    pobj.close()
    pobj.join()

    for i in range(Value):
        print(Data[i],":",Result[i])

if __name__ == "__main__" :
    main()
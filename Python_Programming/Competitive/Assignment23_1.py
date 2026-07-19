import multiprocessing
import os
import time

def SumEven(No):
    print("Process is running with PID :",os.getpid())

    Sum = 0

    for i in range(2,No+1,2):
        Sum = Sum + i

    return Sum

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    start_time = time.perf_counter()

    pobj = multiprocessing.Pool()

    Result = pobj.map(SumEven,Data)

    pobj.close()
    pobj.join()

    end_time = time.perf_counter()

    for i in range(Value):
        print(Data[i],":",Result[i])

    print(f"Time required : {end_time - start_time:.4f} seconds")

if __name__ == "__main__" :
    main()